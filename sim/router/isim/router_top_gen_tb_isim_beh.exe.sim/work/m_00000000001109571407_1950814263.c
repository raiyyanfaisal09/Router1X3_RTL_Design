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
static const char *ng0 = "/student/student2/B50_VLSI_RN/VLSI_RN/Verilog_labs/Router1X3/tb/router_top_gen_tb.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {17, 0};
static int ng4[] = {3, 0};
static int ng5[] = {0, 0};
static int ng6[] = {1, 0};
static int ng7[] = {256, 0};
static int ng8[] = {2, 0};
static unsigned int ng9[] = {4U, 0U};



static int sp_rst1(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 564);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 2156);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2156);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB4;

}

static int sp_pkt_gen_14(char *t1, char *t2)
{
    char t8[8];
    char t42[8];
    char t43[8];
    char t56[8];
    char t59[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
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
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t60;
    int t61;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 820);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t5 = (t2 + 48U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(42, ng0);

LAB7:    t9 = (t1 + 1836U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t9) == 0)
        goto LAB8;

LAB10:    t16 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t16) = 1;

LAB11:    t17 = (t8 + 4);
    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = (~(t19));
    *((unsigned int *)t8) = t20;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB13;

LAB12:    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 1U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 1U);
    t27 = (t8 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB15;

LAB14:    t33 = (t2 + 48U);
    t34 = *((char **)t33);
    t35 = (t34 + 8U);
    xsi_wp_set_status(t35, 1);
    t36 = (t2 + 28U);
    *((char **)t36) = &&LAB7;
    goto LAB1;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB11;

LAB13:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t23 | t24);
    goto LAB12;

LAB15:    t37 = (t2 + 48U);
    t38 = *((char **)t37);
    t39 = (t38 + 8U);
    xsi_wp_set_status(t39, 0);
    xsi_set_current_line(43, ng0);
    t40 = ((char*)((ng3)));
    t41 = (t1 + 2892);
    xsi_vlogvar_assign_value(t41, t40, 0, 0, 6);
    xsi_set_current_line(44, ng0);
    *((int *)t42) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t4 = (t42 + 4);
    *((int *)t4) = 0;
    xsi_vlogtype_concat(t8, 32, 32, 1U, t42, 32);
    t5 = ((char*)((ng4)));
    memset(t43, 0, 8);
    xsi_vlog_unsigned_mod(t43, 32, t8, 32, t5, 32);
    t6 = (t1 + 2984);
    xsi_vlogvar_assign_value(t6, t43, 0, 0, 2);
    xsi_set_current_line(45, ng0);
    t4 = (t1 + 2984);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 2892);
    t9 = (t7 + 36U);
    t10 = *((char **)t9);
    xsi_vlogtype_concat(t8, 8, 8, 2U, t10, 6, t6, 2);
    t16 = (t1 + 2800);
    xsi_vlogvar_assign_value(t16, t8, 0, 0, 8);
    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 2708);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t4 = (t1 + 2800);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 2432);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(50, ng0);
    t4 = (t1 + 2708);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 2800);
    t9 = (t7 + 36U);
    t10 = *((char **)t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    *((unsigned int *)t8) = t13;
    t16 = (t6 + 4);
    t17 = (t10 + 4);
    t18 = (t8 + 4);
    t14 = *((unsigned int *)t16);
    t15 = *((unsigned int *)t17);
    t19 = (t14 | t15);
    *((unsigned int *)t18) = t19;
    t20 = *((unsigned int *)t18);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB16;

LAB17:
LAB18:    t27 = (t1 + 2708);
    xsi_vlogvar_assign_value(t27, t8, 0, 0, 8);
    xsi_set_current_line(51, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB19;
    goto LAB1;

LAB16:    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t18);
    *((unsigned int *)t8) = (t22 | t23);
    goto LAB18;

LAB19:    xsi_set_current_line(52, ng0);

LAB20:    t7 = (t1 + 1836U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    t7 = (t9 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t7) == 0)
        goto LAB21;

LAB23:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;

LAB24:    t16 = (t8 + 4);
    t17 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t8) = t20;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB26;

LAB25:    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 1U);
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 1U);
    t18 = (t8 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB28;

LAB27:    t27 = (t2 + 48U);
    t33 = *((char **)t27);
    t34 = (t33 + 24U);
    xsi_wp_set_status(t34, 1);
    t35 = (t2 + 28U);
    *((char **)t35) = &&LAB20;
    goto LAB1;

LAB21:    *((unsigned int *)t8) = 1;
    goto LAB24;

LAB26:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t17);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t23 | t24);
    goto LAB25;

LAB28:    t36 = (t2 + 48U);
    t37 = *((char **)t36);
    t38 = (t37 + 24U);
    xsi_wp_set_status(t38, 0);
    xsi_set_current_line(53, ng0);
    xsi_set_current_line(53, ng0);
    t39 = ((char*)((ng5)));
    t40 = (t1 + 2524);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 32);

LAB29:    t4 = (t1 + 2524);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 2892);
    t9 = (t7 + 36U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t16 = (t6 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB31;

LAB30:    t17 = (t10 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB32;

LAB33:    t27 = (t8 + 4);
    t11 = *((unsigned int *)t27);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2340);
    t6 = (t1 + 2340);
    t7 = (t6 + 44U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t8, t9, 2, t10, 32, 1);
    t16 = (t8 + 4);
    t11 = *((unsigned int *)t16);
    t61 = (!(t11));
    if (t61 == 1)
        goto LAB51;

LAB52:    xsi_set_current_line(62, ng0);
    t4 = (t2 + 48U);
    t5 = *((char **)t4);
    t6 = (t5 + 48U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB53;
    goto LAB1;

LAB31:    t18 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t8) = 1;
    goto LAB33;

LAB35:    xsi_set_current_line(54, ng0);

LAB37:    xsi_set_current_line(55, ng0);
    t33 = (t2 + 48U);
    t34 = *((char **)t33);
    t35 = (t34 + 32U);
    xsi_wp_set_status(t35, 1);
    *((char **)t3) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(56, ng0);

LAB39:    t36 = (t1 + 1836U);
    t37 = *((char **)t36);
    memset(t42, 0, 8);
    t36 = (t37 + 4);
    t19 = *((unsigned int *)t36);
    t20 = (~(t19));
    t21 = *((unsigned int *)t37);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB43;

LAB41:    if (*((unsigned int *)t36) == 0)
        goto LAB40;

LAB42:    t38 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t38) = 1;

LAB43:    t39 = (t42 + 4);
    t40 = (t37 + 4);
    t24 = *((unsigned int *)t37);
    t25 = (~(t24));
    *((unsigned int *)t42) = t25;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB45;

LAB44:    t31 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t31 & 1U);
    t32 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t32 & 1U);
    t41 = (t42 + 4);
    t44 = *((unsigned int *)t41);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB47;

LAB46:    t49 = (t2 + 48U);
    t50 = *((char **)t49);
    t51 = (t50 + 40U);
    xsi_wp_set_status(t51, 1);
    t52 = (t2 + 28U);
    *((char **)t52) = &&LAB39;
    goto LAB1;

LAB40:    *((unsigned int *)t42) = 1;
    goto LAB43;

LAB45:    t26 = *((unsigned int *)t42);
    t28 = *((unsigned int *)t40);
    *((unsigned int *)t42) = (t26 | t28);
    t29 = *((unsigned int *)t39);
    t30 = *((unsigned int *)t40);
    *((unsigned int *)t39) = (t29 | t30);
    goto LAB44;

LAB47:    t53 = (t2 + 48U);
    t54 = *((char **)t53);
    t55 = (t54 + 40U);
    xsi_wp_set_status(t55, 0);
    xsi_set_current_line(57, ng0);
    *((int *)t56) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t57 = (t56 + 4);
    *((int *)t57) = 0;
    xsi_vlogtype_concat(t43, 32, 32, 1U, t56, 32);
    t58 = ((char*)((ng7)));
    memset(t59, 0, 8);
    xsi_vlog_unsigned_mod(t59, 32, t43, 32, t58, 32);
    t60 = (t1 + 2616);
    xsi_vlogvar_assign_value(t60, t59, 0, 0, 8);
    xsi_set_current_line(58, ng0);
    t4 = (t1 + 2616);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 2432);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(59, ng0);
    t4 = (t1 + 2432);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 2708);
    t9 = (t7 + 36U);
    t10 = *((char **)t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    *((unsigned int *)t8) = t13;
    t16 = (t6 + 4);
    t17 = (t10 + 4);
    t18 = (t8 + 4);
    t14 = *((unsigned int *)t16);
    t15 = *((unsigned int *)t17);
    t19 = (t14 | t15);
    *((unsigned int *)t18) = t19;
    t20 = *((unsigned int *)t18);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB48;

LAB49:
LAB50:    t27 = (t1 + 2708);
    xsi_vlogvar_assign_value(t27, t8, 0, 0, 8);
    xsi_set_current_line(53, ng0);
    t4 = (t1 + 2524);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 2524);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB29;

LAB48:    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t18);
    *((unsigned int *)t8) = (t22 | t23);
    goto LAB50;

LAB51:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t8), 1);
    goto LAB52;

LAB53:    xsi_set_current_line(63, ng0);

LAB54:    t7 = (t1 + 1836U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    t7 = (t9 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB58;

LAB56:    if (*((unsigned int *)t7) == 0)
        goto LAB55;

LAB57:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;

LAB58:    t16 = (t8 + 4);
    t17 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t8) = t20;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB60;

LAB59:    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 1U);
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 1U);
    t18 = (t8 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB62;

LAB61:    t27 = (t2 + 48U);
    t33 = *((char **)t27);
    t34 = (t33 + 56U);
    xsi_wp_set_status(t34, 1);
    t35 = (t2 + 28U);
    *((char **)t35) = &&LAB54;
    goto LAB1;

LAB55:    *((unsigned int *)t8) = 1;
    goto LAB58;

LAB60:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t17);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t23 | t24);
    goto LAB59;

LAB62:    t36 = (t2 + 48U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    xsi_wp_set_status(t38, 0);
    xsi_set_current_line(64, ng0);
    t39 = ((char*)((ng5)));
    t40 = (t1 + 2248);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t4 = (t1 + 2708);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 2432);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB4;

}

static void Always_12_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 3396);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);
    t4 = (t0 + 2064);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2064);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_13_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 3632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);

LAB4:    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(16, ng0);
    t2 = (t0 + 3532);
    t3 = (t0 + 564);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 3584);
    t6 = *((char **)t5);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t8 + 148U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB9:    if (t13 != 0)
        goto LAB10;

LAB5:    t6 = (t0 + 564);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 3584);
    t15 = *((char **)t14);
    t14 = (t0 + 564);
    t16 = (t0 + 3532);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 3532);
    t3 = (t0 + 820);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB13:    t5 = (t0 + 3584);
    t6 = *((char **)t5);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t8 + 148U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB15:    if (t13 != 0)
        goto LAB16;

LAB11:    t6 = (t0 + 820);
    xsi_vlog_subprogram_popinvocation(t6);

LAB12:    t14 = (t0 + 3584);
    t15 = *((char **)t14);
    t14 = (t0 + 820);
    t16 = (t0 + 3532);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2340);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3532);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB17;

LAB1:    return;
LAB8:;
LAB10:    t5 = (t0 + 3632U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t5 = (t0 + 3632U);
    *((char **)t5) = &&LAB13;
    goto LAB1;

LAB17:    xsi_set_current_line(24, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000001109571407_1950814263_init()
{
	static char *pe[] = {(void *)Always_12_0,(void *)Initial_13_1};
	static char *se[] = {(void *)sp_rst1,(void *)sp_pkt_gen_14};
	xsi_register_didat("work_m_00000000001109571407_1950814263", "isim/router_top_gen_tb_isim_beh.exe.sim/work/m_00000000001109571407_1950814263.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
