/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0x734844ce */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static unsigned int ng0[] = {0U, 0U};
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {7U, 0U};



static void C11_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 1348U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 564U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t4, 0, 8);
    t5 = (t4 + 4U);
    t6 = (t3 + 4U);
    t7 = (t2 + 4U);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB7;

LAB4:    if (t17 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 1708);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    t25 = (t24 + 4U);
    t26 = 1U;
    t27 = t26;
    t28 = (t4 + 4U);
    t29 = *((unsigned int *)t4);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 & 4294967294U);
    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 | t26);
    t33 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t33 & 4294967294U);
    t34 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t34 | t27);
    xsi_driver_vfirst_trans(t20, 0, 0);
    t35 = (t0 + 1656);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB7;

}

static void C12_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t30[8];
    char t31[8];
    char t34[8];
    char t58[8];
    char t59[8];
    char t62[8];
    char t86[8];
    char t87[8];
    char t90[8];
    char t114[8];
    char t115[8];
    char t118[8];
    char t142[8];
    char t143[8];
    char t146[8];
    char t170[8];
    char t171[8];
    char t174[8];
    char t198[8];
    char t199[8];
    char t202[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t60;
    char *t61;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t88;
    char *t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t116;
    char *t117;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t144;
    char *t145;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t172;
    char *t173;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t200;
    char *t201;
    char *t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    char *t226;
    char *t227;
    char *t228;
    char *t229;
    char *t230;
    char *t231;
    char *t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    char *t242;

LAB0:    t1 = (t0 + 1476U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 564U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4U);
    t7 = (t5 + 4U);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 7);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t4 + 4U);
    t15 = (t6 + 4U);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t15) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4U);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t30, 8);

LAB16:    t227 = (t0 + 1744);
    t228 = (t227 + 32U);
    t229 = *((char **)t228);
    t230 = (t229 + 40U);
    t231 = *((char **)t230);
    t232 = (t231 + 4U);
    t233 = 7U;
    t234 = t233;
    t235 = (t3 + 4U);
    t236 = *((unsigned int *)t3);
    t233 = (t233 & t236);
    t237 = *((unsigned int *)t235);
    t234 = (t234 & t237);
    t238 = *((unsigned int *)t231);
    *((unsigned int *)t231) = (t238 & 4294967288U);
    t239 = *((unsigned int *)t231);
    *((unsigned int *)t231) = (t239 | t233);
    t240 = *((unsigned int *)t232);
    *((unsigned int *)t232) = (t240 & 4294967288U);
    t241 = *((unsigned int *)t232);
    *((unsigned int *)t232) = (t241 | t234);
    xsi_driver_vfirst_trans(t227, 0, 2);
    t242 = (t0 + 1664);
    *((int *)t242) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t25 = ((char*)((ng0)));
    goto LAB9;

LAB10:    t32 = (t0 + 564U);
    t33 = *((char **)t32);
    memset(t34, 0, 8);
    t32 = (t34 + 4U);
    t35 = (t33 + 4U);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 6);
    t38 = (t37 & 1);
    *((unsigned int *)t34) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 >> 6);
    t41 = (t40 & 1);
    *((unsigned int *)t32) = t41;
    memset(t31, 0, 8);
    t42 = (t31 + 4U);
    t43 = (t34 + 4U);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t34);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t43) != 0)
        goto LAB19;

LAB20:    t49 = (t31 + 4U);
    t50 = *((unsigned int *)t31);
    t51 = *((unsigned int *)t49);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB21;

LAB22:    t54 = *((unsigned int *)t31);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t49) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t31) > 0)
        goto LAB27;

LAB28:    memcpy(t30, t58, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 3, t25, 3, t30, 3);
    goto LAB16;

LAB14:    memcpy(t3, t25, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t31) = 1;
    goto LAB20;

LAB19:    *((unsigned int *)t31) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB20;

LAB21:    t53 = ((char*)((ng1)));
    goto LAB22;

LAB23:    t60 = (t0 + 564U);
    t61 = *((char **)t60);
    memset(t62, 0, 8);
    t60 = (t62 + 4U);
    t63 = (t61 + 4U);
    t64 = *((unsigned int *)t61);
    t65 = (t64 >> 5);
    t66 = (t65 & 1);
    *((unsigned int *)t62) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 >> 5);
    t69 = (t68 & 1);
    *((unsigned int *)t60) = t69;
    memset(t59, 0, 8);
    t70 = (t59 + 4U);
    t71 = (t62 + 4U);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t62);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t71) != 0)
        goto LAB32;

LAB33:    t77 = (t59 + 4U);
    t78 = *((unsigned int *)t59);
    t79 = *((unsigned int *)t77);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB34;

LAB35:    t82 = *((unsigned int *)t59);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t77) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t59) > 0)
        goto LAB40;

LAB41:    memcpy(t58, t86, 8);

LAB42:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t30, 3, t53, 3, t58, 3);
    goto LAB29;

LAB27:    memcpy(t30, t53, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t59) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t59) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB33;

LAB34:    t81 = ((char*)((ng2)));
    goto LAB35;

LAB36:    t88 = (t0 + 564U);
    t89 = *((char **)t88);
    memset(t90, 0, 8);
    t88 = (t90 + 4U);
    t91 = (t89 + 4U);
    t92 = *((unsigned int *)t89);
    t93 = (t92 >> 4);
    t94 = (t93 & 1);
    *((unsigned int *)t90) = t94;
    t95 = *((unsigned int *)t91);
    t96 = (t95 >> 4);
    t97 = (t96 & 1);
    *((unsigned int *)t88) = t97;
    memset(t87, 0, 8);
    t98 = (t87 + 4U);
    t99 = (t90 + 4U);
    t100 = *((unsigned int *)t99);
    t101 = (~(t100));
    t102 = *((unsigned int *)t90);
    t103 = (t102 & t101);
    t104 = (t103 & 1U);
    if (t104 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t99) != 0)
        goto LAB45;

LAB46:    t105 = (t87 + 4U);
    t106 = *((unsigned int *)t87);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB47;

LAB48:    t110 = *((unsigned int *)t87);
    t111 = (~(t110));
    t112 = *((unsigned int *)t105);
    t113 = (t111 || t112);
    if (t113 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t105) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t87) > 0)
        goto LAB53;

LAB54:    memcpy(t86, t114, 8);

LAB55:    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t58, 3, t81, 3, t86, 3);
    goto LAB42;

LAB40:    memcpy(t58, t81, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t87) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t87) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB46;

LAB47:    t109 = ((char*)((ng3)));
    goto LAB48;

LAB49:    t116 = (t0 + 564U);
    t117 = *((char **)t116);
    memset(t118, 0, 8);
    t116 = (t118 + 4U);
    t119 = (t117 + 4U);
    t120 = *((unsigned int *)t117);
    t121 = (t120 >> 3);
    t122 = (t121 & 1);
    *((unsigned int *)t118) = t122;
    t123 = *((unsigned int *)t119);
    t124 = (t123 >> 3);
    t125 = (t124 & 1);
    *((unsigned int *)t116) = t125;
    memset(t115, 0, 8);
    t126 = (t115 + 4U);
    t127 = (t118 + 4U);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t118);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t127) != 0)
        goto LAB58;

LAB59:    t133 = (t115 + 4U);
    t134 = *((unsigned int *)t115);
    t135 = *((unsigned int *)t133);
    t136 = (t134 || t135);
    if (t136 > 0)
        goto LAB60;

LAB61:    t138 = *((unsigned int *)t115);
    t139 = (~(t138));
    t140 = *((unsigned int *)t133);
    t141 = (t139 || t140);
    if (t141 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t133) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t115) > 0)
        goto LAB66;

LAB67:    memcpy(t114, t142, 8);

LAB68:    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t86, 3, t109, 3, t114, 3);
    goto LAB55;

LAB53:    memcpy(t86, t109, 8);
    goto LAB55;

LAB56:    *((unsigned int *)t115) = 1;
    goto LAB59;

LAB58:    *((unsigned int *)t115) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB59;

LAB60:    t137 = ((char*)((ng4)));
    goto LAB61;

LAB62:    t144 = (t0 + 564U);
    t145 = *((char **)t144);
    memset(t146, 0, 8);
    t144 = (t146 + 4U);
    t147 = (t145 + 4U);
    t148 = *((unsigned int *)t145);
    t149 = (t148 >> 2);
    t150 = (t149 & 1);
    *((unsigned int *)t146) = t150;
    t151 = *((unsigned int *)t147);
    t152 = (t151 >> 2);
    t153 = (t152 & 1);
    *((unsigned int *)t144) = t153;
    memset(t143, 0, 8);
    t154 = (t143 + 4U);
    t155 = (t146 + 4U);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t146);
    t159 = (t158 & t157);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t155) != 0)
        goto LAB71;

LAB72:    t161 = (t143 + 4U);
    t162 = *((unsigned int *)t143);
    t163 = *((unsigned int *)t161);
    t164 = (t162 || t163);
    if (t164 > 0)
        goto LAB73;

LAB74:    t166 = *((unsigned int *)t143);
    t167 = (~(t166));
    t168 = *((unsigned int *)t161);
    t169 = (t167 || t168);
    if (t169 > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t161) > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t143) > 0)
        goto LAB79;

LAB80:    memcpy(t142, t170, 8);

LAB81:    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t114, 3, t137, 3, t142, 3);
    goto LAB68;

LAB66:    memcpy(t114, t137, 8);
    goto LAB68;

LAB69:    *((unsigned int *)t143) = 1;
    goto LAB72;

LAB71:    *((unsigned int *)t143) = 1;
    *((unsigned int *)t154) = 1;
    goto LAB72;

LAB73:    t165 = ((char*)((ng5)));
    goto LAB74;

LAB75:    t172 = (t0 + 564U);
    t173 = *((char **)t172);
    memset(t174, 0, 8);
    t172 = (t174 + 4U);
    t175 = (t173 + 4U);
    t176 = *((unsigned int *)t173);
    t177 = (t176 >> 1);
    t178 = (t177 & 1);
    *((unsigned int *)t174) = t178;
    t179 = *((unsigned int *)t175);
    t180 = (t179 >> 1);
    t181 = (t180 & 1);
    *((unsigned int *)t172) = t181;
    memset(t171, 0, 8);
    t182 = (t171 + 4U);
    t183 = (t174 + 4U);
    t184 = *((unsigned int *)t183);
    t185 = (~(t184));
    t186 = *((unsigned int *)t174);
    t187 = (t186 & t185);
    t188 = (t187 & 1U);
    if (t188 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t183) != 0)
        goto LAB84;

LAB85:    t189 = (t171 + 4U);
    t190 = *((unsigned int *)t171);
    t191 = *((unsigned int *)t189);
    t192 = (t190 || t191);
    if (t192 > 0)
        goto LAB86;

LAB87:    t194 = *((unsigned int *)t171);
    t195 = (~(t194));
    t196 = *((unsigned int *)t189);
    t197 = (t195 || t196);
    if (t197 > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t189) > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t171) > 0)
        goto LAB92;

LAB93:    memcpy(t170, t198, 8);

LAB94:    goto LAB76;

LAB77:    xsi_vlog_unsigned_bit_combine(t142, 3, t165, 3, t170, 3);
    goto LAB81;

LAB79:    memcpy(t142, t165, 8);
    goto LAB81;

LAB82:    *((unsigned int *)t171) = 1;
    goto LAB85;

LAB84:    *((unsigned int *)t171) = 1;
    *((unsigned int *)t182) = 1;
    goto LAB85;

LAB86:    t193 = ((char*)((ng6)));
    goto LAB87;

LAB88:    t200 = (t0 + 564U);
    t201 = *((char **)t200);
    memset(t202, 0, 8);
    t200 = (t202 + 4U);
    t203 = (t201 + 4U);
    t204 = *((unsigned int *)t201);
    t205 = (t204 >> 0);
    t206 = (t205 & 1);
    *((unsigned int *)t202) = t206;
    t207 = *((unsigned int *)t203);
    t208 = (t207 >> 0);
    t209 = (t208 & 1);
    *((unsigned int *)t200) = t209;
    memset(t199, 0, 8);
    t210 = (t199 + 4U);
    t211 = (t202 + 4U);
    t212 = *((unsigned int *)t211);
    t213 = (~(t212));
    t214 = *((unsigned int *)t202);
    t215 = (t214 & t213);
    t216 = (t215 & 1U);
    if (t216 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t211) != 0)
        goto LAB97;

LAB98:    t217 = (t199 + 4U);
    t218 = *((unsigned int *)t199);
    t219 = *((unsigned int *)t217);
    t220 = (t218 || t219);
    if (t220 > 0)
        goto LAB99;

LAB100:    t222 = *((unsigned int *)t199);
    t223 = (~(t222));
    t224 = *((unsigned int *)t217);
    t225 = (t223 || t224);
    if (t225 > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t217) > 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t199) > 0)
        goto LAB105;

LAB106:    memcpy(t198, t226, 8);

LAB107:    goto LAB89;

LAB90:    xsi_vlog_unsigned_bit_combine(t170, 3, t193, 3, t198, 3);
    goto LAB94;

LAB92:    memcpy(t170, t193, 8);
    goto LAB94;

LAB95:    *((unsigned int *)t199) = 1;
    goto LAB98;

LAB97:    *((unsigned int *)t199) = 1;
    *((unsigned int *)t210) = 1;
    goto LAB98;

LAB99:    t221 = ((char*)((ng7)));
    goto LAB100;

LAB101:    t226 = ((char*)((ng0)));
    goto LAB102;

LAB103:    xsi_vlog_unsigned_bit_combine(t198, 3, t221, 3, t226, 3);
    goto LAB107;

LAB105:    memcpy(t198, t221, 8);
    goto LAB107;

}


extern void work_m_00000000000483370785_3036786177_init()
{
	static char *pe[] = {(void *)C11_0,(void *)C12_1};
	xsi_register_didat("work_m_00000000000483370785_3036786177", "isim/_tmp/work/m_00000000000483370785_3036786177.didat");
	xsi_register_executes(pe);
}
