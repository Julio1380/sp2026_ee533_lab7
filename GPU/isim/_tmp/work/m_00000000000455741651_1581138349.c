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
static const char *ng0 = "C:/Documents and Settings/student/Desktop/Lab7_GPU/GPU_lab7/tb_cpu_CMT.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1065369600U, 0U, 3236249751U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {1073758336U, 0U, 1083654295U, 0U};
static unsigned int ng7[] = {2348875776U, 0U};
static unsigned int ng8[] = {2348941313U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {270669824U, 0U};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {337780736U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {9U, 0U};
static unsigned int ng19[] = {10U, 0U};
static unsigned int ng20[] = {411052032U, 0U};
static unsigned int ng21[] = {11U, 0U};
static unsigned int ng22[] = {12U, 0U};
static unsigned int ng23[] = {13U, 0U};
static unsigned int ng24[] = {18U, 0U};
static unsigned int ng25[] = {472002560U, 0U};
static unsigned int ng26[] = {19U, 0U};
static unsigned int ng27[] = {20U, 0U};
static unsigned int ng28[] = {21U, 0U};
static unsigned int ng29[] = {22U, 0U};
static unsigned int ng30[] = {2886074374U, 0U};
static unsigned int ng31[] = {14U, 0U};
static unsigned int ng32[] = {2885877762U, 0U};
static unsigned int ng33[] = {15U, 0U};
static unsigned int ng34[] = {2885943299U, 0U};
static unsigned int ng35[] = {16U, 0U};
static unsigned int ng36[] = {2886008836U, 0U};
static unsigned int ng37[] = {17U, 0U};
static unsigned int ng38[] = {4227858432U, 0U};
static const char *ng39 = "-------------------------------------------------";
static const char *ng40 = "ADD_FP Result  : %h";
static const char *ng41 = "Expected       : c01c4117404040c0";
static const char *ng42 = "MULT_FP Result : %h";
static const char *ng43 = "Expected       : c20741B240004100";



static void A38_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;

LAB0:    t1 = (t0 + 2176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2092);
    xsi_process_wait(t2, 5000000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 964);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4U);
    t8 = (t6 + 4U);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    *((unsigned int *)t3) = t10;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB5:    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 1U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 1U);
    t17 = (t0 + 964);
    xsi_vlogvar_assign_value(t17, t3, 0, 0, 1);
    goto LAB2;

LAB6:    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t8);
    *((unsigned int *)t3) = (t11 | t12);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    goto LAB5;

}

static void I40_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 2304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);

LAB4:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 964);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1700);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2220);
    xsi_process_wait(t2, 25000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2484);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1700);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1516);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2492);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1516);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2500);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1700);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2508);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2516);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2524);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2532);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2540);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2548);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2556);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2564);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2572);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2580);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2588);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2596);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2604);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2612);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2620);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2628);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2636);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng28)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2644);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng30)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2652);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng31)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng32)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2660);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng33)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2668);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng35)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng36)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2676);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng37)));
    t3 = (t0 + 1148);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng38)));
    t3 = (t0 + 1332);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2684);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2692);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2220);
    xsi_process_wait(t2, 500000000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2700);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1516);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2708);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2716);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(111, ng0);
    xsi_vlogfile_write(1, 0, ng39, 1, t0);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, ng40, 2, t0, (char)118, t3, 64);
    xsi_set_current_line(113, ng0);
    xsi_vlogfile_write(1, 0, ng41, 1, t0);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1516);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2724);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2732);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, ng42, 2, t0, (char)118, t3, 64);
    xsi_set_current_line(119, ng0);
    xsi_vlogfile_write(1, 0, ng43, 1, t0);
    xsi_set_current_line(120, ng0);
    xsi_vlogfile_write(1, 0, ng39, 1, t0);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1516);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2740);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2748);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, ng42, 2, t0, (char)118, t3, 64);
    xsi_set_current_line(124, ng0);
    xsi_vlogfile_write(1, 0, ng39, 1, t0);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1516);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2756);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2764);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 652U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, ng42, 2, t0, (char)118, t3, 64);
    xsi_set_current_line(129, ng0);
    xsi_vlogfile_write(1, 0, ng39, 1, t0);
    xsi_set_current_line(131, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000000455741651_1581138349_init()
{
	static char *pe[] = {(void *)A38_0,(void *)I40_1};
	xsi_register_didat("work_m_00000000000455741651_1581138349", "isim/_tmp/work/m_00000000000455741651_1581138349.didat");
	xsi_register_executes(pe);
}
