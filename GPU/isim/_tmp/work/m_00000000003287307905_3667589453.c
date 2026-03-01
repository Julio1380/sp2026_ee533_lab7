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
static const char *ng0 = "C:/Documents and Settings/student/Desktop/Lab7_GPU/GPU_lab7/alu_64.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {0U, 0U, 0U, 0U};
static int ng5[] = {32, 0};
static unsigned int ng6[] = {10U, 0U};
static unsigned int ng7[] = {1U, 0U, 0U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {7U, 0U};



static void N45_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 2676U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 564U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4U);
    t5 = (t4 + 4U);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 4294967295U);
    t12 = (t0 + 3852);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8);
    xsi_driver_vfirst_trans(t12, 0, 31U);
    t17 = (t0 + 3752);
    *((int *)t17) = 1;

LAB1:    return;
}

static void N46_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 2804U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 740U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4U);
    t5 = (t4 + 4U);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 4294967295U);
    t12 = (t0 + 3888);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 8);
    xsi_driver_vfirst_trans(t12, 0, 31U);
    t17 = (t0 + 3760);
    *((int *)t17) = 1;

LAB1:    return;
}

static void A49_2(char *t0)
{
    char t6[16];
    char t9[16];
    char t12[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t13;

LAB0:    t1 = (t0 + 2932U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3768);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 652U);
    t4 = *((char **)t3);

LAB6:    t3 = ((char*)((ng1)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 4);
    if (t5 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 33);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(51, ng0);
    t7 = (t0 + 1796U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t6, 33, 33, 2U, t7, 1, t8, 32);
    t10 = (t0 + 1884U);
    t11 = *((char **)t10);
    t10 = ((char*)((ng1)));
    xsi_vlogtype_concat(t9, 33, 33, 2U, t10, 1, t11, 32);
    xsi_vlog_unsigned_add(t12, 33, t6, 33, t9, 33);
    t13 = (t0 + 2200);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 33);
    goto LAB15;

LAB9:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1796U);
    t7 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t6, 33, 33, 2U, t3, 1, t7, 32);
    t8 = (t0 + 1884U);
    t10 = *((char **)t8);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t9, 33, 33, 2U, t8, 1, t10, 32);
    xsi_vlog_unsigned_minus(t12, 33, t6, 33, t9, 33);
    t11 = (t0 + 2200);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 33);
    goto LAB15;

LAB11:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1796U);
    t7 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t6, 33, 33, 2U, t3, 1, t7, 32);
    t8 = (t0 + 1884U);
    t10 = *((char **)t8);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t9, 33, 33, 2U, t8, 1, t10, 32);
    xsi_vlog_unsigned_minus(t12, 33, t6, 33, t9, 33);
    t11 = (t0 + 2200);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 33);
    goto LAB15;

}

static void A59_3(char *t0)
{
    char t6[16];
    char t7[8];
    char t19[8];
    char t24[8];
    char t34[8];
    char t53[8];
    char t61[8];
    char t62[8];
    char t65[8];
    char t74[8];
    char t106[8];
    char t116[8];
    char t117[8];
    char t120[8];
    char t130[8];
    char t162[8];
    char t173[8];
    char t174[8];
    char t177[8];
    char t187[8];
    char t219[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t63;
    char *t64;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t107;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t118;
    char *t119;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t175;
    char *t176;
    char *t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;
    char *t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    char *t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t220;
    char *t221;
    char *t222;
    char *t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    char *t230;

LAB0:    t1 = (t0 + 3060U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3776);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 652U);
    t4 = *((char **)t3);

LAB6:    t3 = ((char*)((ng1)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 4);
    if (t5 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t5 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2108);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(62, ng0);
    t8 = (t0 + 2200);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t7 + 4U);
    t12 = (t10 + 4U);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 4294967295U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 4294967295U);
    t20 = ((char*)((ng5)));
    t21 = (t0 + 2200);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    t25 = (t24 + 4U);
    t26 = (t23 + 4U);
    t27 = *((unsigned int *)t23);
    t28 = (t27 >> 31);
    t29 = (t28 & 1);
    *((unsigned int *)t24) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 31);
    t32 = (t31 & 1);
    *((unsigned int *)t25) = t32;
    xsi_vlog_mul_concat(t19, 32, 1, t20, 1U, t24, 1);
    xsi_vlogtype_concat(t6, 64, 64, 2U, t19, 32, t7, 32);
    t33 = (t0 + 2108);
    xsi_vlogvar_assign_value(t33, t6, 0, 0, 64);
    goto LAB25;

LAB9:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 2200);
    t8 = (t3 + 32U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t10 = (t7 + 4U);
    t11 = (t9 + 4U);
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 0);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 4294967295U);
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 4294967295U);
    t12 = ((char*)((ng5)));
    t20 = (t0 + 2200);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    memset(t24, 0, 8);
    t23 = (t24 + 4U);
    t25 = (t22 + 4U);
    t27 = *((unsigned int *)t22);
    t28 = (t27 >> 31);
    t29 = (t28 & 1);
    *((unsigned int *)t24) = t29;
    t30 = *((unsigned int *)t25);
    t31 = (t30 >> 31);
    t32 = (t31 & 1);
    *((unsigned int *)t23) = t32;
    xsi_vlog_mul_concat(t19, 32, 1, t12, 1U, t24, 1);
    xsi_vlogtype_concat(t6, 64, 64, 2U, t19, 32, t7, 32);
    t26 = (t0 + 2108);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 64);
    goto LAB25;

LAB11:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 2200);
    t8 = (t3 + 32U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t10 = (t7 + 4U);
    t11 = (t9 + 4U);
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 0);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 4294967295U);
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 4294967295U);
    t12 = ((char*)((ng5)));
    t20 = (t0 + 2200);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    memset(t24, 0, 8);
    t23 = (t24 + 4U);
    t25 = (t22 + 4U);
    t27 = *((unsigned int *)t22);
    t28 = (t27 >> 31);
    t29 = (t28 & 1);
    *((unsigned int *)t24) = t29;
    t30 = *((unsigned int *)t25);
    t31 = (t30 >> 31);
    t32 = (t31 & 1);
    *((unsigned int *)t23) = t32;
    xsi_vlog_mul_concat(t19, 32, 1, t12, 1U, t24, 1);
    xsi_vlogtype_concat(t6, 64, 64, 2U, t19, 32, t7, 32);
    t26 = (t0 + 2108);
    xsi_vlogvar_assign_value(t26, t6, 0, 0, 64);
    goto LAB25;

LAB13:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1796U);
    t8 = *((char **)t3);
    t3 = (t0 + 1884U);
    t9 = *((char **)t3);
    memset(t34, 0, 8);
    xsi_vlog_signed_less(t34, 32, t8, 32, t9, 32);
    memset(t7, 0, 8);
    t3 = (t7 + 4U);
    t10 = (t34 + 4U);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t34);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t10) != 0)
        goto LAB28;

LAB29:    t11 = (t7 + 4U);
    t18 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t11);
    t28 = (t18 || t27);
    if (t28 > 0)
        goto LAB30;

LAB31:    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t11) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t7) > 0)
        goto LAB36;

LAB37:    memcpy(t6, t20, 16);

LAB38:    t21 = (t0 + 2108);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 64);
    goto LAB25;

LAB15:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 1532U);
    t8 = *((char **)t3);
    t3 = (t0 + 2108);
    xsi_vlogvar_assign_value(t3, t8, 0, 0, 64);
    goto LAB25;

LAB17:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1620U);
    t8 = *((char **)t3);
    t3 = (t0 + 2108);
    xsi_vlogvar_assign_value(t3, t8, 0, 0, 64);
    goto LAB25;

LAB19:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 564U);
    t8 = *((char **)t3);
    memset(t24, 0, 8);
    t3 = (t24 + 4U);
    t9 = (t8 + 4U);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 15);
    t15 = (t14 & 1);
    *((unsigned int *)t24) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 15);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t10 = ((char*)((ng2)));
    memset(t34, 0, 8);
    t11 = (t34 + 4U);
    t12 = (t24 + 4U);
    t20 = (t10 + 4U);
    t27 = *((unsigned int *)t24);
    t28 = *((unsigned int *)t10);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t12);
    t31 = *((unsigned int *)t20);
    t32 = (t30 ^ t31);
    t35 = (t29 | t32);
    t36 = *((unsigned int *)t12);
    t37 = *((unsigned int *)t20);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB42;

LAB39:    if (t38 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t34) = 1;

LAB42:    memset(t19, 0, 8);
    t21 = (t19 + 4U);
    t22 = (t34 + 4U);
    t41 = *((unsigned int *)t22);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t22) != 0)
        goto LAB45;

LAB46:    t23 = (t19 + 4U);
    t46 = *((unsigned int *)t19);
    t47 = *((unsigned int *)t23);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB47;

LAB48:    t49 = *((unsigned int *)t19);
    t50 = (~(t49));
    t51 = *((unsigned int *)t23);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t23) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t19) > 0)
        goto LAB53;

LAB54:    memcpy(t7, t53, 8);

LAB55:    t63 = (t0 + 564U);
    t64 = *((char **)t63);
    memset(t65, 0, 8);
    t63 = (t65 + 4U);
    t66 = (t64 + 4U);
    t67 = *((unsigned int *)t64);
    t68 = (t67 >> 31);
    t69 = (t68 & 1);
    *((unsigned int *)t65) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 31);
    t72 = (t71 & 1);
    *((unsigned int *)t63) = t72;
    t73 = ((char*)((ng2)));
    memset(t74, 0, 8);
    t75 = (t74 + 4U);
    t76 = (t65 + 4U);
    t77 = (t73 + 4U);
    t78 = *((unsigned int *)t65);
    t79 = *((unsigned int *)t73);
    t80 = (t78 ^ t79);
    t81 = *((unsigned int *)t76);
    t82 = *((unsigned int *)t77);
    t83 = (t81 ^ t82);
    t84 = (t80 | t83);
    t85 = *((unsigned int *)t76);
    t86 = *((unsigned int *)t77);
    t87 = (t85 | t86);
    t88 = (~(t87));
    t89 = (t84 & t88);
    if (t89 != 0)
        goto LAB59;

LAB56:    if (t87 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t74) = 1;

LAB59:    memset(t62, 0, 8);
    t90 = (t62 + 4U);
    t91 = (t74 + 4U);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t74);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t91) != 0)
        goto LAB62;

LAB63:    t97 = (t62 + 4U);
    t98 = *((unsigned int *)t62);
    t99 = *((unsigned int *)t97);
    t100 = (t98 || t99);
    if (t100 > 0)
        goto LAB64;

LAB65:    t102 = *((unsigned int *)t62);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t97) > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t62) > 0)
        goto LAB70;

LAB71:    memcpy(t61, t106, 8);

LAB72:    t118 = (t0 + 564U);
    t119 = *((char **)t118);
    memset(t120, 0, 8);
    t118 = (t120 + 4U);
    t121 = (t119 + 8U);
    t122 = (t119 + 12U);
    t123 = *((unsigned int *)t121);
    t124 = (t123 >> 15);
    t125 = (t124 & 1);
    *((unsigned int *)t120) = t125;
    t126 = *((unsigned int *)t122);
    t127 = (t126 >> 15);
    t128 = (t127 & 1);
    *((unsigned int *)t118) = t128;
    t129 = ((char*)((ng2)));
    memset(t130, 0, 8);
    t131 = (t130 + 4U);
    t132 = (t120 + 4U);
    t133 = (t129 + 4U);
    t134 = *((unsigned int *)t120);
    t135 = *((unsigned int *)t129);
    t136 = (t134 ^ t135);
    t137 = *((unsigned int *)t132);
    t138 = *((unsigned int *)t133);
    t139 = (t137 ^ t138);
    t140 = (t136 | t139);
    t141 = *((unsigned int *)t132);
    t142 = *((unsigned int *)t133);
    t143 = (t141 | t142);
    t144 = (~(t143));
    t145 = (t140 & t144);
    if (t145 != 0)
        goto LAB76;

LAB73:    if (t143 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t130) = 1;

LAB76:    memset(t117, 0, 8);
    t146 = (t117 + 4U);
    t147 = (t130 + 4U);
    t148 = *((unsigned int *)t147);
    t149 = (~(t148));
    t150 = *((unsigned int *)t130);
    t151 = (t150 & t149);
    t152 = (t151 & 1U);
    if (t152 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t147) != 0)
        goto LAB79;

LAB80:    t153 = (t117 + 4U);
    t154 = *((unsigned int *)t117);
    t155 = *((unsigned int *)t153);
    t156 = (t154 || t155);
    if (t156 > 0)
        goto LAB81;

LAB82:    t158 = *((unsigned int *)t117);
    t159 = (~(t158));
    t160 = *((unsigned int *)t153);
    t161 = (t159 || t160);
    if (t161 > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t153) > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t117) > 0)
        goto LAB87;

LAB88:    memcpy(t116, t162, 8);

LAB89:    t175 = (t0 + 564U);
    t176 = *((char **)t175);
    memset(t177, 0, 8);
    t175 = (t177 + 4U);
    t178 = (t176 + 8U);
    t179 = (t176 + 12U);
    t180 = *((unsigned int *)t178);
    t181 = (t180 >> 31);
    t182 = (t181 & 1);
    *((unsigned int *)t177) = t182;
    t183 = *((unsigned int *)t179);
    t184 = (t183 >> 31);
    t185 = (t184 & 1);
    *((unsigned int *)t175) = t185;
    t186 = ((char*)((ng2)));
    memset(t187, 0, 8);
    t188 = (t187 + 4U);
    t189 = (t177 + 4U);
    t190 = (t186 + 4U);
    t191 = *((unsigned int *)t177);
    t192 = *((unsigned int *)t186);
    t193 = (t191 ^ t192);
    t194 = *((unsigned int *)t189);
    t195 = *((unsigned int *)t190);
    t196 = (t194 ^ t195);
    t197 = (t193 | t196);
    t198 = *((unsigned int *)t189);
    t199 = *((unsigned int *)t190);
    t200 = (t198 | t199);
    t201 = (~(t200));
    t202 = (t197 & t201);
    if (t202 != 0)
        goto LAB93;

LAB90:    if (t200 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t187) = 1;

LAB93:    memset(t174, 0, 8);
    t203 = (t174 + 4U);
    t204 = (t187 + 4U);
    t205 = *((unsigned int *)t204);
    t206 = (~(t205));
    t207 = *((unsigned int *)t187);
    t208 = (t207 & t206);
    t209 = (t208 & 1U);
    if (t209 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t204) != 0)
        goto LAB96;

LAB97:    t210 = (t174 + 4U);
    t211 = *((unsigned int *)t174);
    t212 = *((unsigned int *)t210);
    t213 = (t211 || t212);
    if (t213 > 0)
        goto LAB98;

LAB99:    t215 = *((unsigned int *)t174);
    t216 = (~(t215));
    t217 = *((unsigned int *)t210);
    t218 = (t216 || t217);
    if (t218 > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t210) > 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t174) > 0)
        goto LAB104;

LAB105:    memcpy(t173, t219, 8);

LAB106:    xsi_vlogtype_concat(t6, 64, 64, 4U, t173, 16, t116, 16, t61, 16, t7, 16);
    t230 = (t0 + 2108);
    xsi_vlogvar_assign_value(t230, t6, 0, 0, 64);
    goto LAB25;

LAB21:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1708U);
    t8 = *((char **)t3);
    t3 = (t0 + 2108);
    xsi_vlogvar_assign_value(t3, t8, 0, 0, 64);
    goto LAB25;

LAB26:    *((unsigned int *)t7) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t7) = 1;
    *((unsigned int *)t3) = 1;
    goto LAB29;

LAB30:    t12 = ((char*)((ng7)));
    goto LAB31;

LAB32:    t20 = ((char*)((ng4)));
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t6, 64, t12, 64, t20, 64);
    goto LAB38;

LAB36:    memcpy(t6, t12, 16);
    goto LAB38;

LAB41:    *((unsigned int *)t34) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t19) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t19) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB46;

LAB47:    t25 = ((char*)((ng1)));
    goto LAB48;

LAB49:    t26 = (t0 + 564U);
    t33 = *((char **)t26);
    memset(t53, 0, 8);
    t26 = (t53 + 4U);
    t54 = (t33 + 4U);
    t55 = *((unsigned int *)t33);
    t56 = (t55 >> 0);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 0);
    *((unsigned int *)t26) = t58;
    t59 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t59 & 65535U);
    t60 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t60 & 65535U);
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t7, 16, t25, 16, t53, 16);
    goto LAB55;

LAB53:    memcpy(t7, t25, 8);
    goto LAB55;

LAB58:    *((unsigned int *)t74) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t62) = 1;
    goto LAB63;

LAB62:    *((unsigned int *)t62) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB63;

LAB64:    t101 = ((char*)((ng1)));
    goto LAB65;

LAB66:    t107 = (t0 + 564U);
    t108 = *((char **)t107);
    memset(t106, 0, 8);
    t107 = (t106 + 4U);
    t109 = (t108 + 4U);
    t110 = *((unsigned int *)t108);
    t111 = (t110 >> 16);
    *((unsigned int *)t106) = t111;
    t112 = *((unsigned int *)t109);
    t113 = (t112 >> 16);
    *((unsigned int *)t107) = t113;
    t114 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t114 & 65535U);
    t115 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t115 & 65535U);
    goto LAB67;

LAB68:    xsi_vlog_unsigned_bit_combine(t61, 16, t101, 16, t106, 16);
    goto LAB72;

LAB70:    memcpy(t61, t101, 8);
    goto LAB72;

LAB75:    *((unsigned int *)t130) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB76;

LAB77:    *((unsigned int *)t117) = 1;
    goto LAB80;

LAB79:    *((unsigned int *)t117) = 1;
    *((unsigned int *)t146) = 1;
    goto LAB80;

LAB81:    t157 = ((char*)((ng1)));
    goto LAB82;

LAB83:    t163 = (t0 + 564U);
    t164 = *((char **)t163);
    memset(t162, 0, 8);
    t163 = (t162 + 4U);
    t165 = (t164 + 8U);
    t166 = (t164 + 12U);
    t167 = *((unsigned int *)t165);
    t168 = (t167 >> 0);
    *((unsigned int *)t162) = t168;
    t169 = *((unsigned int *)t166);
    t170 = (t169 >> 0);
    *((unsigned int *)t163) = t170;
    t171 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t171 & 65535U);
    t172 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t172 & 65535U);
    goto LAB84;

LAB85:    xsi_vlog_unsigned_bit_combine(t116, 16, t157, 16, t162, 16);
    goto LAB89;

LAB87:    memcpy(t116, t157, 8);
    goto LAB89;

LAB92:    *((unsigned int *)t187) = 1;
    *((unsigned int *)t188) = 1;
    goto LAB93;

LAB94:    *((unsigned int *)t174) = 1;
    goto LAB97;

LAB96:    *((unsigned int *)t174) = 1;
    *((unsigned int *)t203) = 1;
    goto LAB97;

LAB98:    t214 = ((char*)((ng1)));
    goto LAB99;

LAB100:    t220 = (t0 + 564U);
    t221 = *((char **)t220);
    memset(t219, 0, 8);
    t220 = (t219 + 4U);
    t222 = (t221 + 8U);
    t223 = (t221 + 12U);
    t224 = *((unsigned int *)t222);
    t225 = (t224 >> 16);
    *((unsigned int *)t219) = t225;
    t226 = *((unsigned int *)t223);
    t227 = (t226 >> 16);
    *((unsigned int *)t220) = t227;
    t228 = *((unsigned int *)t219);
    *((unsigned int *)t219) = (t228 & 65535U);
    t229 = *((unsigned int *)t220);
    *((unsigned int *)t220) = (t229 & 65535U);
    goto LAB101;

LAB102:    xsi_vlog_unsigned_bit_combine(t173, 16, t214, 16, t219, 16);
    goto LAB106;

LAB104:    memcpy(t173, t214, 8);
    goto LAB106;

}

static void C87_4(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 3188U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2108);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    xsi_vlog_unsigned_equal(t6, 64, t4, 64, t5, 64);
    t7 = (t0 + 3924);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t11 + 4U);
    t13 = 1U;
    t14 = t13;
    t15 = (t6 + 4U);
    t16 = *((unsigned int *)t6);
    t13 = (t13 & t16);
    t17 = *((unsigned int *)t15);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 4294967294U);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 | t13);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 4294967294U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 | t14);
    xsi_driver_vfirst_trans(t7, 0, 0);
    t22 = (t0 + 3784);
    *((int *)t22) = 1;

LAB1:    return;
}

static void C88_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 3316U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2108);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4U);
    t7 = (t4 + 8U);
    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t6) = t14;
    t15 = (t0 + 3960);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    t20 = (t19 + 4U);
    t21 = 1U;
    t22 = t21;
    t23 = (t5 + 4U);
    t24 = *((unsigned int *)t5);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t23);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 4294967294U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 | t21);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 4294967294U);
    t29 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t29 | t22);
    xsi_driver_vfirst_trans(t15, 0, 0);
    t30 = (t0 + 3792);
    *((int *)t30) = 1;

LAB1:    return;
}

static void C91_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;

LAB0:    t1 = (t0 + 3444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 652U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4U);
    t7 = (t6 + 4U);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 2);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 2);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t15 + 4U);
    t17 = (t5 + 4U);
    t18 = (t14 + 4U);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t14);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB7;

LAB4:    if (t28 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t4, 0, 8);
    t31 = (t4 + 4U);
    t32 = (t15 + 4U);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t32) != 0)
        goto LAB10;

LAB11:    t38 = (t4 + 4U);
    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB12;

LAB13:    t55 = *((unsigned int *)t4);
    t56 = (~(t55));
    t57 = *((unsigned int *)t38);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t38) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t59, 8);

LAB20:    t60 = (t0 + 3996);
    t61 = (t60 + 32U);
    t62 = *((char **)t61);
    t63 = (t62 + 40U);
    t64 = *((char **)t63);
    t65 = (t64 + 4U);
    t66 = 1U;
    t67 = t66;
    t68 = (t3 + 4U);
    t69 = *((unsigned int *)t3);
    t66 = (t66 & t69);
    t70 = *((unsigned int *)t68);
    t67 = (t67 & t70);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t71 & 4294967294U);
    t72 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t72 | t66);
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t73 & 4294967294U);
    t74 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t74 | t67);
    xsi_driver_vfirst_trans(t60, 0, 0);
    t75 = (t0 + 3800);
    *((int *)t75) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB12:    t42 = (t0 + 2200);
    t43 = (t42 + 32U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t46 = (t45 + 4U);
    t47 = (t44 + 8U);
    t48 = (t44 + 12U);
    t49 = *((unsigned int *)t47);
    t50 = (t49 >> 0);
    t51 = (t50 & 1);
    *((unsigned int *)t45) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 >> 0);
    t54 = (t53 & 1);
    *((unsigned int *)t46) = t54;
    goto LAB13;

LAB14:    t59 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t45, 1, t59, 1);
    goto LAB20;

LAB18:    memcpy(t3, t45, 8);
    goto LAB20;

}

static void C94_7(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t36[8];
    char t46[8];
    char t54[8];
    char t80[8];
    char t91[8];
    char t100[8];
    char t114[8];
    char t150[8];
    char t151[8];
    char t154[8];
    char t170[8];
    char t185[8];
    char t201[8];
    char t209[8];
    char t250[8];
    char t260[8];
    char t268[8];
    char t284[8];
    char t295[8];
    char t304[8];
    char t318[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
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
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    int t138;
    int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t152;
    char *t153;
    char *t155;
    char *t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    char *t186;
    char *t187;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t202;
    char *t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    char *t213;
    char *t214;
    char *t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    char *t223;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t237;
    char *t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    char *t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    char *t248;
    char *t249;
    char *t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    char *t258;
    char *t259;
    char *t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    char *t272;
    char *t273;
    char *t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    char *t282;
    char *t283;
    char *t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    char *t292;
    char *t293;
    char *t294;
    char *t296;
    char *t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    char *t308;
    char *t309;
    char *t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    char *t322;
    char *t323;
    char *t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    char *t332;
    char *t333;
    unsigned int t334;
    unsigned int t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    unsigned int t339;
    unsigned int t340;
    unsigned int t341;
    int t342;
    int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    char *t354;
    char *t355;
    char *t356;
    char *t357;
    char *t358;
    char *t359;
    char *t360;
    unsigned int t361;
    unsigned int t362;
    char *t363;
    unsigned int t364;
    unsigned int t365;
    unsigned int t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    char *t370;

LAB0:    t1 = (t0 + 3572U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 652U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = (t2 + 4U);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t4 + 4U);
    t23 = (t6 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4U);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t146 = *((unsigned int *)t4);
    t147 = (~(t146));
    t148 = *((unsigned int *)t29);
    t149 = (t147 || t148);
    if (t149 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t150, 8);

LAB20:    t355 = (t0 + 4032);
    t356 = (t355 + 32U);
    t357 = *((char **)t356);
    t358 = (t357 + 40U);
    t359 = *((char **)t358);
    t360 = (t359 + 4U);
    t361 = 1U;
    t362 = t361;
    t363 = (t3 + 4U);
    t364 = *((unsigned int *)t3);
    t361 = (t361 & t364);
    t365 = *((unsigned int *)t363);
    t362 = (t362 & t365);
    t366 = *((unsigned int *)t359);
    *((unsigned int *)t359) = (t366 & 4294967294U);
    t367 = *((unsigned int *)t359);
    *((unsigned int *)t359) = (t367 | t361);
    t368 = *((unsigned int *)t360);
    *((unsigned int *)t360) = (t368 & 4294967294U);
    t369 = *((unsigned int *)t360);
    *((unsigned int *)t360) = (t369 | t362);
    xsi_driver_vfirst_trans(t355, 0, 0);
    t370 = (t0 + 3808);
    *((int *)t370) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1796U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t36 + 4U);
    t37 = (t35 + 4U);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 31);
    t40 = (t39 & 1);
    *((unsigned int *)t36) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 31);
    t43 = (t42 & 1);
    *((unsigned int *)t34) = t43;
    t44 = (t0 + 1884U);
    t45 = *((char **)t44);
    memset(t46, 0, 8);
    t44 = (t46 + 4U);
    t47 = (t45 + 4U);
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 31);
    t50 = (t49 & 1);
    *((unsigned int *)t46) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 >> 31);
    t53 = (t52 & 1);
    *((unsigned int *)t44) = t53;
    t55 = *((unsigned int *)t36);
    t56 = *((unsigned int *)t46);
    t57 = (t55 ^ t56);
    *((unsigned int *)t54) = t57;
    t58 = (t36 + 4U);
    t59 = (t46 + 4U);
    t60 = (t54 + 4U);
    t61 = *((unsigned int *)t58);
    t62 = *((unsigned int *)t59);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB21;

LAB22:
LAB23:    memset(t33, 0, 8);
    t68 = (t33 + 4U);
    t69 = (t54 + 4U);
    t70 = *((unsigned int *)t54);
    t71 = (~(t70));
    *((unsigned int *)t33) = t71;
    *((unsigned int *)t68) = 0;
    if (*((unsigned int *)t69) != 0)
        goto LAB25;

LAB24:    t76 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t76 & 1U);
    t77 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t77 & 1U);
    t78 = (t0 + 1796U);
    t79 = *((char **)t78);
    memset(t80, 0, 8);
    t78 = (t80 + 4U);
    t81 = (t79 + 4U);
    t82 = *((unsigned int *)t79);
    t83 = (t82 >> 31);
    t84 = (t83 & 1);
    *((unsigned int *)t80) = t84;
    t85 = *((unsigned int *)t81);
    t86 = (t85 >> 31);
    t87 = (t86 & 1);
    *((unsigned int *)t78) = t87;
    t88 = (t0 + 2200);
    t89 = (t88 + 32U);
    t90 = *((char **)t89);
    memset(t91, 0, 8);
    t92 = (t91 + 4U);
    t93 = (t90 + 4U);
    t94 = *((unsigned int *)t90);
    t95 = (t94 >> 31);
    t96 = (t95 & 1);
    *((unsigned int *)t91) = t96;
    t97 = *((unsigned int *)t93);
    t98 = (t97 >> 31);
    t99 = (t98 & 1);
    *((unsigned int *)t92) = t99;
    t101 = *((unsigned int *)t80);
    t102 = *((unsigned int *)t91);
    t103 = (t101 ^ t102);
    *((unsigned int *)t100) = t103;
    t104 = (t80 + 4U);
    t105 = (t91 + 4U);
    t106 = (t100 + 4U);
    t107 = *((unsigned int *)t104);
    t108 = *((unsigned int *)t105);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 != 0);
    if (t111 == 1)
        goto LAB26;

LAB27:
LAB28:    t115 = *((unsigned int *)t33);
    t116 = *((unsigned int *)t100);
    t117 = (t115 & t116);
    *((unsigned int *)t114) = t117;
    t118 = (t33 + 4U);
    t119 = (t100 + 4U);
    t120 = (t114 + 4U);
    t121 = *((unsigned int *)t118);
    t122 = *((unsigned int *)t119);
    t123 = (t121 | t122);
    *((unsigned int *)t120) = t123;
    t124 = *((unsigned int *)t120);
    t125 = (t124 != 0);
    if (t125 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB13;

LAB14:    t152 = (t0 + 652U);
    t153 = *((char **)t152);
    t152 = ((char*)((ng2)));
    memset(t154, 0, 8);
    t155 = (t154 + 4U);
    t156 = (t153 + 4U);
    t157 = (t152 + 4U);
    t158 = *((unsigned int *)t153);
    t159 = *((unsigned int *)t152);
    t160 = (t158 ^ t159);
    t161 = *((unsigned int *)t156);
    t162 = *((unsigned int *)t157);
    t163 = (t161 ^ t162);
    t164 = (t160 | t163);
    t165 = *((unsigned int *)t156);
    t166 = *((unsigned int *)t157);
    t167 = (t165 | t166);
    t168 = (~(t167));
    t169 = (t164 & t168);
    if (t169 != 0)
        goto LAB35;

LAB32:    if (t167 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t154) = 1;

LAB35:    memset(t170, 0, 8);
    t171 = (t170 + 4U);
    t172 = (t154 + 4U);
    t173 = *((unsigned int *)t172);
    t174 = (~(t173));
    t175 = *((unsigned int *)t154);
    t176 = (t175 & t174);
    t177 = (t176 & 1U);
    if (t177 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t172) != 0)
        goto LAB38;

LAB39:    t178 = (t170 + 4U);
    t179 = *((unsigned int *)t170);
    t180 = (!(t179));
    t181 = *((unsigned int *)t178);
    t182 = (t180 || t181);
    if (t182 > 0)
        goto LAB40;

LAB41:    memcpy(t209, t170, 8);

LAB42:    memset(t151, 0, 8);
    t237 = (t151 + 4U);
    t238 = (t209 + 4U);
    t239 = *((unsigned int *)t238);
    t240 = (~(t239));
    t241 = *((unsigned int *)t209);
    t242 = (t241 & t240);
    t243 = (t242 & 1U);
    if (t243 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t238) != 0)
        goto LAB56;

LAB57:    t244 = (t151 + 4U);
    t245 = *((unsigned int *)t151);
    t246 = *((unsigned int *)t244);
    t247 = (t245 || t246);
    if (t247 > 0)
        goto LAB58;

LAB59:    t350 = *((unsigned int *)t151);
    t351 = (~(t350));
    t352 = *((unsigned int *)t244);
    t353 = (t351 || t352);
    if (t353 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t244) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t151) > 0)
        goto LAB64;

LAB65:    memcpy(t150, t354, 8);

LAB66:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t114, 1, t150, 1);
    goto LAB20;

LAB18:    memcpy(t3, t114, 8);
    goto LAB20;

LAB21:    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t54) = (t66 | t67);
    goto LAB23;

LAB25:    t72 = *((unsigned int *)t33);
    t73 = *((unsigned int *)t69);
    *((unsigned int *)t33) = (t72 | t73);
    t74 = *((unsigned int *)t68);
    t75 = *((unsigned int *)t69);
    *((unsigned int *)t68) = (t74 | t75);
    goto LAB24;

LAB26:    t112 = *((unsigned int *)t100);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t100) = (t112 | t113);
    goto LAB28;

LAB29:    t126 = *((unsigned int *)t114);
    t127 = *((unsigned int *)t120);
    *((unsigned int *)t114) = (t126 | t127);
    t128 = (t33 + 4U);
    t129 = (t100 + 4U);
    t130 = *((unsigned int *)t33);
    t131 = (~(t130));
    t132 = *((unsigned int *)t128);
    t133 = (~(t132));
    t134 = *((unsigned int *)t100);
    t135 = (~(t134));
    t136 = *((unsigned int *)t129);
    t137 = (~(t136));
    t138 = (t131 & t133);
    t139 = (t135 & t137);
    t140 = (~(t138));
    t141 = (~(t139));
    t142 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t142 & t140);
    t143 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t143 & t141);
    t144 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t144 & t140);
    t145 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t145 & t141);
    goto LAB31;

LAB34:    *((unsigned int *)t154) = 1;
    *((unsigned int *)t155) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t170) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t170) = 1;
    *((unsigned int *)t171) = 1;
    goto LAB39;

LAB40:    t183 = (t0 + 652U);
    t184 = *((char **)t183);
    t183 = ((char*)((ng3)));
    memset(t185, 0, 8);
    t186 = (t185 + 4U);
    t187 = (t184 + 4U);
    t188 = (t183 + 4U);
    t189 = *((unsigned int *)t184);
    t190 = *((unsigned int *)t183);
    t191 = (t189 ^ t190);
    t192 = *((unsigned int *)t187);
    t193 = *((unsigned int *)t188);
    t194 = (t192 ^ t193);
    t195 = (t191 | t194);
    t196 = *((unsigned int *)t187);
    t197 = *((unsigned int *)t188);
    t198 = (t196 | t197);
    t199 = (~(t198));
    t200 = (t195 & t199);
    if (t200 != 0)
        goto LAB46;

LAB43:    if (t198 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t185) = 1;

LAB46:    memset(t201, 0, 8);
    t202 = (t201 + 4U);
    t203 = (t185 + 4U);
    t204 = *((unsigned int *)t203);
    t205 = (~(t204));
    t206 = *((unsigned int *)t185);
    t207 = (t206 & t205);
    t208 = (t207 & 1U);
    if (t208 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t203) != 0)
        goto LAB49;

LAB50:    t210 = *((unsigned int *)t170);
    t211 = *((unsigned int *)t201);
    t212 = (t210 | t211);
    *((unsigned int *)t209) = t212;
    t213 = (t170 + 4U);
    t214 = (t201 + 4U);
    t215 = (t209 + 4U);
    t216 = *((unsigned int *)t213);
    t217 = *((unsigned int *)t214);
    t218 = (t216 | t217);
    *((unsigned int *)t215) = t218;
    t219 = *((unsigned int *)t215);
    t220 = (t219 != 0);
    if (t220 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB42;

LAB45:    *((unsigned int *)t185) = 1;
    *((unsigned int *)t186) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t201) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t201) = 1;
    *((unsigned int *)t202) = 1;
    goto LAB50;

LAB51:    t221 = *((unsigned int *)t209);
    t222 = *((unsigned int *)t215);
    *((unsigned int *)t209) = (t221 | t222);
    t223 = (t170 + 4U);
    t224 = (t201 + 4U);
    t225 = *((unsigned int *)t223);
    t226 = (~(t225));
    t227 = *((unsigned int *)t170);
    t228 = (t227 & t226);
    t229 = *((unsigned int *)t224);
    t230 = (~(t229));
    t231 = *((unsigned int *)t201);
    t232 = (t231 & t230);
    t233 = (~(t228));
    t234 = (~(t232));
    t235 = *((unsigned int *)t215);
    *((unsigned int *)t215) = (t235 & t233);
    t236 = *((unsigned int *)t215);
    *((unsigned int *)t215) = (t236 & t234);
    goto LAB53;

LAB54:    *((unsigned int *)t151) = 1;
    goto LAB57;

LAB56:    *((unsigned int *)t151) = 1;
    *((unsigned int *)t237) = 1;
    goto LAB57;

LAB58:    t248 = (t0 + 1796U);
    t249 = *((char **)t248);
    memset(t250, 0, 8);
    t248 = (t250 + 4U);
    t251 = (t249 + 4U);
    t252 = *((unsigned int *)t249);
    t253 = (t252 >> 31);
    t254 = (t253 & 1);
    *((unsigned int *)t250) = t254;
    t255 = *((unsigned int *)t251);
    t256 = (t255 >> 31);
    t257 = (t256 & 1);
    *((unsigned int *)t248) = t257;
    t258 = (t0 + 1884U);
    t259 = *((char **)t258);
    memset(t260, 0, 8);
    t258 = (t260 + 4U);
    t261 = (t259 + 4U);
    t262 = *((unsigned int *)t259);
    t263 = (t262 >> 31);
    t264 = (t263 & 1);
    *((unsigned int *)t260) = t264;
    t265 = *((unsigned int *)t261);
    t266 = (t265 >> 31);
    t267 = (t266 & 1);
    *((unsigned int *)t258) = t267;
    t269 = *((unsigned int *)t250);
    t270 = *((unsigned int *)t260);
    t271 = (t269 ^ t270);
    *((unsigned int *)t268) = t271;
    t272 = (t250 + 4U);
    t273 = (t260 + 4U);
    t274 = (t268 + 4U);
    t275 = *((unsigned int *)t272);
    t276 = *((unsigned int *)t273);
    t277 = (t275 | t276);
    *((unsigned int *)t274) = t277;
    t278 = *((unsigned int *)t274);
    t279 = (t278 != 0);
    if (t279 == 1)
        goto LAB67;

LAB68:
LAB69:    t282 = (t0 + 1796U);
    t283 = *((char **)t282);
    memset(t284, 0, 8);
    t282 = (t284 + 4U);
    t285 = (t283 + 4U);
    t286 = *((unsigned int *)t283);
    t287 = (t286 >> 31);
    t288 = (t287 & 1);
    *((unsigned int *)t284) = t288;
    t289 = *((unsigned int *)t285);
    t290 = (t289 >> 31);
    t291 = (t290 & 1);
    *((unsigned int *)t282) = t291;
    t292 = (t0 + 2200);
    t293 = (t292 + 32U);
    t294 = *((char **)t293);
    memset(t295, 0, 8);
    t296 = (t295 + 4U);
    t297 = (t294 + 4U);
    t298 = *((unsigned int *)t294);
    t299 = (t298 >> 31);
    t300 = (t299 & 1);
    *((unsigned int *)t295) = t300;
    t301 = *((unsigned int *)t297);
    t302 = (t301 >> 31);
    t303 = (t302 & 1);
    *((unsigned int *)t296) = t303;
    t305 = *((unsigned int *)t284);
    t306 = *((unsigned int *)t295);
    t307 = (t305 ^ t306);
    *((unsigned int *)t304) = t307;
    t308 = (t284 + 4U);
    t309 = (t295 + 4U);
    t310 = (t304 + 4U);
    t311 = *((unsigned int *)t308);
    t312 = *((unsigned int *)t309);
    t313 = (t311 | t312);
    *((unsigned int *)t310) = t313;
    t314 = *((unsigned int *)t310);
    t315 = (t314 != 0);
    if (t315 == 1)
        goto LAB70;

LAB71:
LAB72:    t319 = *((unsigned int *)t268);
    t320 = *((unsigned int *)t304);
    t321 = (t319 & t320);
    *((unsigned int *)t318) = t321;
    t322 = (t268 + 4U);
    t323 = (t304 + 4U);
    t324 = (t318 + 4U);
    t325 = *((unsigned int *)t322);
    t326 = *((unsigned int *)t323);
    t327 = (t325 | t326);
    *((unsigned int *)t324) = t327;
    t328 = *((unsigned int *)t324);
    t329 = (t328 != 0);
    if (t329 == 1)
        goto LAB73;

LAB74:
LAB75:    goto LAB59;

LAB60:    t354 = ((char*)((ng1)));
    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t150, 1, t318, 1, t354, 1);
    goto LAB66;

LAB64:    memcpy(t150, t318, 8);
    goto LAB66;

LAB67:    t280 = *((unsigned int *)t268);
    t281 = *((unsigned int *)t274);
    *((unsigned int *)t268) = (t280 | t281);
    goto LAB69;

LAB70:    t316 = *((unsigned int *)t304);
    t317 = *((unsigned int *)t310);
    *((unsigned int *)t304) = (t316 | t317);
    goto LAB72;

LAB73:    t330 = *((unsigned int *)t318);
    t331 = *((unsigned int *)t324);
    *((unsigned int *)t318) = (t330 | t331);
    t332 = (t268 + 4U);
    t333 = (t304 + 4U);
    t334 = *((unsigned int *)t268);
    t335 = (~(t334));
    t336 = *((unsigned int *)t332);
    t337 = (~(t336));
    t338 = *((unsigned int *)t304);
    t339 = (~(t338));
    t340 = *((unsigned int *)t333);
    t341 = (~(t340));
    t342 = (t335 & t337);
    t343 = (t339 & t341);
    t344 = (~(t342));
    t345 = (~(t343));
    t346 = *((unsigned int *)t324);
    *((unsigned int *)t324) = (t346 & t344);
    t347 = *((unsigned int *)t324);
    *((unsigned int *)t324) = (t347 & t345);
    t348 = *((unsigned int *)t318);
    *((unsigned int *)t318) = (t348 & t344);
    t349 = *((unsigned int *)t318);
    *((unsigned int *)t318) = (t349 & t345);
    goto LAB75;

}


extern void work_m_00000000003287307905_3667589453_init()
{
	static char *pe[] = {(void *)N45_0,(void *)N46_1,(void *)A49_2,(void *)A59_3,(void *)C87_4,(void *)C88_5,(void *)C91_6,(void *)C94_7};
	xsi_register_didat("work_m_00000000003287307905_3667589453", "isim/_tmp/work/m_00000000003287307905_3667589453.didat");
	xsi_register_executes(pe);
}
