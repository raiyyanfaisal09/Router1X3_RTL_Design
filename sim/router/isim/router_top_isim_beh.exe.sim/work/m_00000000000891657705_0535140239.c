/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x2f7eec00 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/student/student1/B50_VLSI_RN/VLSI_RN/Verilog_labs/Router1X3/rtl/router_sync.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {4U, 0U};
static int ng7[] = {29, 0};



static void Always_9_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3548U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 4816);
    *((int *)t2) = 1;
    t3 = (t0 + 3572);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(12, ng0);
    t11 = (t0 + 1796U);
    t12 = *((char **)t11);
    t11 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 2, 0LL);
    goto LAB8;

}

static void Always_16_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3684U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 4824);
    *((int *)t2) = 1;
    t3 = (t0 + 3708);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 3036);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(19, ng0);
    t9 = (t0 + 876U);
    t10 = *((char **)t9);
    t9 = (t0 + 2576);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 1);
    goto LAB15;

LAB9:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 968U);
    t4 = *((char **)t3);
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 1);
    goto LAB15;

LAB11:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = (t0 + 2576);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 1);
    goto LAB15;

}

static void Cont_27_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
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
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 3820U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1152U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 4924);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 32U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 4832);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void Cont_28_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
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
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 3956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1244U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 4960);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 32U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 4840);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void Cont_29_4(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
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
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 4092U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1336U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 4996);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 32U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 4848);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void Always_31_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 4228U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4856);
    *((int *)t2) = 1;
    t3 = (t0 + 4252);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1428U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 3, 0LL);
    goto LAB11;

LAB9:    xsi_set_current_line(36, ng0);

LAB12:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 3036);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);

LAB13:    t8 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 2, t8, 2);
    if (t9 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB18;

LAB19:
LAB21:
LAB20:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB22:    goto LAB11;

LAB14:    xsi_set_current_line(38, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 3, 0LL);
    goto LAB22;

LAB16:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB22;

LAB18:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB22;

}

static void Always_52_6(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 4364U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4864);
    *((int *)t2) = 1;
    t3 = (t0 + 4388);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(60, ng0);

LAB16:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1520U);
    t3 = *((char **)t2);

LAB17:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 32);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 32);
    if (t31 == 1)
        goto LAB20;

LAB21:
LAB22:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(55, ng0);

LAB15:    xsi_set_current_line(56, ng0);
    t29 = ((char*)((ng4)));
    t30 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB14;

LAB18:    xsi_set_current_line(62, ng0);

LAB23:    xsi_set_current_line(63, ng0);
    t5 = (t0 + 1888U);
    t6 = *((char **)t5);

LAB24:    t5 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t6, 1, t5, 32);
    if (t32 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t6, 1, t2, 32);
    if (t31 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB22;

LAB20:    xsi_set_current_line(83, ng0);

LAB41:    xsi_set_current_line(84, ng0);
    t5 = ((char*)((ng1)));
    t12 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t12, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 5, 0LL);
    goto LAB22;

LAB25:    xsi_set_current_line(64, ng0);

LAB30:    xsi_set_current_line(64, ng0);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB29;

LAB27:    xsi_set_current_line(67, ng0);

LAB31:    xsi_set_current_line(69, ng0);
    t5 = (t0 + 2300);
    t12 = (t5 + 36U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t23 = (t13 + 4);
    t29 = (t14 + 4);
    t7 = *((unsigned int *)t13);
    t8 = *((unsigned int *)t14);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t23);
    t11 = *((unsigned int *)t29);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t23);
    t18 = *((unsigned int *)t29);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB35;

LAB32:    if (t19 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t4) = 1;

LAB35:    t33 = (t4 + 4);
    t22 = *((unsigned int *)t33);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(75, ng0);

LAB40:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2300);
    t5 = (t2 + 36U);
    t12 = *((char **)t5);
    t13 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t12, 5, t13, 5);
    t14 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);

LAB38:    goto LAB29;

LAB34:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(70, ng0);

LAB39:    xsi_set_current_line(71, ng0);
    t34 = ((char*)((ng2)));
    t35 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 5, 0LL);
    goto LAB38;

}

static void Always_98_7(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 4500U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4872);
    *((int *)t2) = 1;
    t3 = (t0 + 4524);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);

LAB5:    xsi_set_current_line(100, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(106, ng0);

LAB16:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1612U);
    t3 = *((char **)t2);

LAB17:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 32);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 32);
    if (t31 == 1)
        goto LAB20;

LAB21:
LAB22:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(101, ng0);

LAB15:    xsi_set_current_line(102, ng0);
    t29 = ((char*)((ng4)));
    t30 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB14;

LAB18:    xsi_set_current_line(108, ng0);

LAB23:    xsi_set_current_line(109, ng0);
    t5 = (t0 + 1980U);
    t6 = *((char **)t5);

LAB24:    t5 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t6, 1, t5, 32);
    if (t32 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t6, 1, t2, 32);
    if (t31 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB22;

LAB20:    xsi_set_current_line(128, ng0);

LAB41:    xsi_set_current_line(129, ng0);
    t5 = ((char*)((ng1)));
    t12 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t12, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 5, 0LL);
    goto LAB22;

LAB25:    xsi_set_current_line(110, ng0);

LAB30:    xsi_set_current_line(110, ng0);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB29;

LAB27:    xsi_set_current_line(113, ng0);

LAB31:    xsi_set_current_line(114, ng0);
    t5 = (t0 + 2392);
    t12 = (t5 + 36U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t23 = (t13 + 4);
    t29 = (t14 + 4);
    t7 = *((unsigned int *)t13);
    t8 = *((unsigned int *)t14);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t23);
    t11 = *((unsigned int *)t29);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t23);
    t18 = *((unsigned int *)t29);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB35;

LAB32:    if (t19 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t4) = 1;

LAB35:    t33 = (t4 + 4);
    t22 = *((unsigned int *)t33);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(120, ng0);

LAB40:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2392);
    t5 = (t2 + 36U);
    t12 = *((char **)t5);
    t13 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t12, 5, t13, 5);
    t14 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);

LAB38:    goto LAB29;

LAB34:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(115, ng0);

LAB39:    xsi_set_current_line(116, ng0);
    t34 = ((char*)((ng2)));
    t35 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 5, 0LL);
    goto LAB38;

}

static void Always_138_8(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 4636U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 4880);
    *((int *)t2) = 1;
    t3 = (t0 + 4660);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(139, ng0);

LAB5:    xsi_set_current_line(140, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(146, ng0);

LAB16:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1704U);
    t3 = *((char **)t2);

LAB17:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 32);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 32);
    if (t31 == 1)
        goto LAB20;

LAB21:
LAB22:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(141, ng0);

LAB15:    xsi_set_current_line(142, ng0);
    t29 = ((char*)((ng4)));
    t30 = (t0 + 2852);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB14;

LAB18:    xsi_set_current_line(148, ng0);

LAB23:    xsi_set_current_line(149, ng0);
    t5 = (t0 + 2072U);
    t6 = *((char **)t5);

LAB24:    t5 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t6, 1, t5, 32);
    if (t32 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t6, 1, t2, 32);
    if (t31 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB22;

LAB20:    xsi_set_current_line(168, ng0);

LAB41:    xsi_set_current_line(169, ng0);
    t5 = ((char*)((ng1)));
    t12 = (t0 + 2852);
    xsi_vlogvar_wait_assign_value(t12, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 5, 0LL);
    goto LAB22;

LAB25:    xsi_set_current_line(150, ng0);

LAB30:    xsi_set_current_line(150, ng0);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2852);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB29;

LAB27:    xsi_set_current_line(153, ng0);

LAB31:    xsi_set_current_line(154, ng0);
    t5 = (t0 + 2484);
    t12 = (t5 + 36U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t23 = (t13 + 4);
    t29 = (t14 + 4);
    t7 = *((unsigned int *)t13);
    t8 = *((unsigned int *)t14);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t23);
    t11 = *((unsigned int *)t29);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t23);
    t18 = *((unsigned int *)t29);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB35;

LAB32:    if (t19 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t4) = 1;

LAB35:    t33 = (t4 + 4);
    t22 = *((unsigned int *)t33);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(160, ng0);

LAB40:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 2484);
    t5 = (t2 + 36U);
    t12 = *((char **)t5);
    t13 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t12, 5, t13, 5);
    t14 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t14, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2852);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);

LAB38:    goto LAB29;

LAB34:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(155, ng0);

LAB39:    xsi_set_current_line(156, ng0);
    t34 = ((char*)((ng2)));
    t35 = (t0 + 2852);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 5, 0LL);
    goto LAB38;

}


extern void work_m_00000000000891657705_0535140239_init()
{
	static char *pe[] = {(void *)Always_9_0,(void *)Always_16_1,(void *)Cont_27_2,(void *)Cont_28_3,(void *)Cont_29_4,(void *)Always_31_5,(void *)Always_52_6,(void *)Always_98_7,(void *)Always_138_8};
	xsi_register_didat("work_m_00000000000891657705_0535140239", "isim/router_top_isim_beh.exe.sim/work/m_00000000000891657705_0535140239.didat");
	xsi_register_executes(pe);
}
