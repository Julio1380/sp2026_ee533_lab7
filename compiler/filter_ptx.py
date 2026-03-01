import re
import os

# ==========================================
# ISA DEFINITIONS
# ==========================================

# R-type opcodes (bits 31-26)
R_OPCODES = {
    "ADD":     "000000",
    "SUB":     "000001",
    "COMP":    "000010",
    "SLT":     "000011",
    "ADD_FP":  "000100",
    "ADDFP":   "000100",
    "MULT_FP": "000101",
    "MULTFP":  "000101",
    "RELU":    "000110",
    "ACCUM":   "000111",
}

# I-type opcodes (bits 31-26)
I_OPCODES = {
    "ADDI": "001000",
    "LW":   "100011",
    "SW":   "101011",
    "BEQ":  "001001",
    "BNE":  "001010",
}

# ==========================================
# Helper Functions
# ==========================================

def r2b(reg_str):
    num = re.findall(r'\d+', reg_str)
    return format(int(num[0]), '05b') if num else "00000"

def get_imm(imm_str, bits=16):
    try:
        val = int(re.sub(r'[^0-9\-]', '', imm_str))
        if val < 0:
            val = (1 << bits) + val
        return format(val & ((1 << bits) - 1), f'0{bits}b')
    except:
        return "0" * bits

# ==========================================
# ASSEMBLER
# ==========================================

def assemble_to_hex(raw_lines):
    labels = {}
    instructions = []
    pc = 0

    # Pass 1: Collect labels
    for line in raw_lines:
        clean = line.split('//')[0].strip()
        if not clean:
            continue

        if clean.endswith(':'):
            labels[clean[:-1]] = pc
        else:
            instructions.append(clean)
            pc += 1

    machine_code = []

    # Pass 2: Encode instructions
    for cur_pc, inst in enumerate(instructions):

        if inst.upper() == "NOP":
            machine_code.append("00000000")
            continue

        p = [x.replace(',', '') for x in inst.replace('(', ' ').replace(')', ' ').split()]
        op = p[0].upper()
        bin_str = ""

        # =========================
        # R-TYPE
        # Format: OP Rs, Rt, Rd
        # =========================
        if op in R_OPCODES:
            rs = r2b(p[1]) if len(p) > 1 else "00000"
            rt = r2b(p[2]) if len(p) > 2 else "00000"
            rd = r2b(p[3]) if len(p) > 3 else "00000"
            unused = "0" * 11
            bin_str = f"{R_OPCODES[op]}{rs}{rt}{rd}{unused}"

        # =========================
        # I-TYPE: ADDI
        # Format: ADDI Rt, Rs, imm
        # =========================
        elif op == "ADDI":
            rt = r2b(p[1])
            rs = r2b(p[2])
            imm = get_imm(p[3], 16)
            bin_str = f"{I_OPCODES['ADDI']}{rs}{rt}{imm}"

        # =========================
        # LW / SW
        # Format: LW Rt, imm(Rs)
        # =========================
        elif op in ["LW", "SW"]:
            rt = r2b(p[1])
            imm = get_imm(p[2], 16)
            rs = r2b(p[3])
            bin_str = f"{I_OPCODES[op]}{rs}{rt}{imm}"

        # =========================
        # BEQ
        # =========================
        elif op == "BEQ":
            rs = r2b(p[1])
            rt = r2b(p[2])
            target = p[3]

            if target in labels:
                offset = (labels[target] - cur_pc - 1) & 0xFFFF
            else:
                offset = int(target) & 0xFFFF

            bin_str = f"{I_OPCODES['BEQ']}{rs}{rt}{format(offset, '016b')}"

        else:
            print(f"Warning: Unknown instruction '{op}'")
            bin_str = "0" * 32

        machine_code.append(format(int(bin_str, 2), '08X'))

    return machine_code


# ==========================================
# MAIN
# ==========================================

if __name__ == "__main__":
    INPUT_FILE = "kernel.ptx"

    if not os.path.exists(INPUT_FILE):
        print(f"Error: '{INPUT_FILE}' not found.")
    else:
        with open(INPUT_FILE, "r") as f:
            raw_code = f.readlines()

        hex_list = assemble_to_hex(raw_code)

        with open("machine_code.mem", "w") as f:
            for h in hex_list:
                f.write(h + ",\n")

        print(f"Created 'machine_code.mem' with {len(hex_list)} instructions.")