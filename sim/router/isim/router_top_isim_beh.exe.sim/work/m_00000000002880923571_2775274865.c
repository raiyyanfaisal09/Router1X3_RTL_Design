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
static const char *ng0 = "/student/student1/B50_VLSI_RN/VLSI_RN/Verilog_labs/Router1X3/rtl/router_fifo.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {16, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {0U, 1U};
static unsigned int ng7[] = {0U, 255U};



static void Cont_13_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t8[8];
    char t20[8];
    char t24[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
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
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;

LAB0:    t1 = (t0 + 2868U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1988);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    t9 = (t0 + 2080);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t8, 0, 8);
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 0);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 15U);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 15U);
    t21 = (t0 + 2080);
    t22 = (t21 + 36U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    t25 = (t24 + 4);
    t26 = (t23 + 4);
    t27 = *((unsigned int *)t23);
    t28 = (t27 >> 4);
    t29 = (t28 & 1);
    *((unsigned int *)t24) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 4);
    t32 = (t31 & 1);
    *((unsigned int *)t25) = t32;
    memset(t20, 0, 8);
    t33 = (t24 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t24);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t33) == 0)
        goto LAB4;

LAB6:    t39 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t39) = 1;

LAB7:    t40 = (t20 + 4);
    t41 = (t24 + 4);
    t42 = *((unsigned int *)t24);
    t43 = (~(t42));
    *((unsigned int *)t20) = t43;
    *((unsigned int *)t40) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB9;

LAB8:    t48 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t48 & 1U);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t49 & 1U);
    xsi_vlogtype_concat(t7, 5, 5, 2U, t20, 1, t8, 4);
    memset(t50, 0, 8);
    t51 = (t6 + 4);
    t52 = (t7 + 4);
    t53 = *((unsigned int *)t6);
    t54 = *((unsigned int *)t7);
    t55 = (t53 ^ t54);
    t56 = *((unsigned int *)t51);
    t57 = *((unsigned int *)t52);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t51);
    t61 = *((unsigned int *)t52);
    t62 = (t60 | t61);
    t63 = (~(t62));
    t64 = (t59 & t63);
    if (t64 != 0)
        goto LAB13;

LAB10:    if (t62 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t50) = 1;

LAB13:    memset(t4, 0, 8);
    t66 = (t50 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t50);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t66) != 0)
        goto LAB16;

LAB17:    t73 = (t4 + 4);
    t74 = *((unsigned int *)t4);
    t75 = *((unsigned int *)t73);
    t76 = (t74 || t75);
    if (t76 > 0)
        goto LAB18;

LAB19:    t78 = *((unsigned int *)t4);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t73) > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t4) > 0)
        goto LAB24;

LAB25:    memcpy(t3, t82, 8);

LAB26:    t83 = (t0 + 3812);
    t84 = (t83 + 32U);
    t85 = *((char **)t84);
    t86 = (t85 + 32U);
    t87 = *((char **)t86);
    memset(t87, 0, 8);
    t88 = 1U;
    t89 = t88;
    t90 = (t3 + 4);
    t91 = *((unsigned int *)t3);
    t88 = (t88 & t91);
    t92 = *((unsigned int *)t90);
    t89 = (t89 & t92);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t94 | t88);
    t95 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t95 | t89);
    xsi_driver_vfirst_trans(t83, 0, 0);
    t96 = (t0 + 3728);
    *((int *)t96) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB9:    t44 = *((unsigned int *)t20);
    t45 = *((unsigned int *)t41);
    *((unsigned int *)t20) = (t44 | t45);
    t46 = *((unsigned int *)t40);
    t47 = *((unsigned int *)t41);
    *((unsigned int *)t40) = (t46 | t47);
    goto LAB8;

LAB12:    t65 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB16:    t72 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB17;

LAB18:    t77 = ((char*)((ng1)));
    goto LAB19;

LAB20:    t82 = ((char*)((ng2)));
    goto LAB21;

LAB22:    xsi_vlog_unsigned_bit_combine(t3, 1, t77, 1, t82, 1);
    goto LAB26;

LAB24:    memcpy(t3, t77, 8);
    goto LAB26;

}

static void Cont_15_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 3004U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1988);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 2080);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB7;

LAB4:    if (t22 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t10) = 1;

LAB7:    memset(t4, 0, 8);
    t26 = (t10 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t26) != 0)
        goto LAB10;

LAB11:    t33 = (t4 + 4);
    t34 = *((unsigned int *)t4);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB12;

LAB13:    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t33);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t33) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t42, 8);

LAB20:    t43 = (t0 + 3848);
    t44 = (t43 + 32U);
    t45 = *((char **)t44);
    t46 = (t45 + 32U);
    t47 = *((char **)t46);
    memset(t47, 0, 8);
    t48 = 1U;
    t49 = t48;
    t50 = (t3 + 4);
    t51 = *((unsigned int *)t3);
    t48 = (t48 & t51);
    t52 = *((unsigned int *)t50);
    t49 = (t49 & t52);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 | t48);
    t55 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t55 | t49);
    xsi_driver_vfirst_trans(t43, 0, 0);
    t56 = (t0 + 3736);
    *((int *)t56) = 1;

LAB1:    return;
LAB6:    t25 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t32 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB11;

LAB12:    t37 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t42 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t37, 1, t42, 1);
    goto LAB20;

LAB18:    memcpy(t3, t37, 8);
    goto LAB20;

}

static void Always_17_2(char *t0)
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

LAB0:    t1 = (t0 + 3140U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 3744);
    *((int *)t2) = 1;
    t3 = (t0 + 3164);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2356);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(20, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 2356);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_24_3(char *t0)
{
    char t4[8];
    char t31[8];
    char t32[8];
    char t54[8];
    char t84[8];
    char t89[8];
    char t90[8];
    char t97[8];
    char t146[8];
    char t153[8];
    char t165[8];
    char t175[8];
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
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    char *t41;
    int t42;
    int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t176;

LAB0:    t1 = (t0 + 3276U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3752);
    *((int *)t2) = 1;
    t3 = (t0 + 3300);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t5 = (t0 + 932U);
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

LAB13:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1300U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB25;

LAB22:    if (t19 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t4) = 1;

LAB25:    t13 = (t4 + 4);
    t22 = *((unsigned int *)t13);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(39, ng0);

LAB29:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1116U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t2) != 0)
        goto LAB32;

LAB33:    t6 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t6);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB34;

LAB35:    memcpy(t54, t4, 8);

LAB36:    t39 = (t54 + 4);
    t79 = *((unsigned int *)t39);
    t80 = (~(t79));
    t81 = *((unsigned int *)t54);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1024U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t2) != 0)
        goto LAB57;

LAB58:    t6 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t6);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB59;

LAB60:    memcpy(t54, t4, 8);

LAB61:    t39 = (t54 + 4);
    t79 = *((unsigned int *)t39);
    t80 = (~(t79));
    t81 = *((unsigned int *)t54);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB75;

LAB76:
LAB77:
LAB28:
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

LAB12:    xsi_set_current_line(27, ng0);

LAB15:    xsi_set_current_line(28, ng0);
    xsi_set_current_line(28, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 2264);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 32);

LAB16:    t2 = (t0 + 2264);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB17;

LAB18:    goto LAB14;

LAB17:    xsi_set_current_line(29, ng0);

LAB19:    xsi_set_current_line(30, ng0);
    t13 = ((char*)((ng3)));
    t14 = (t0 + 1896);
    t23 = (t0 + 1896);
    t29 = (t23 + 44U);
    t30 = *((char **)t29);
    t33 = (t0 + 1896);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    t36 = (t0 + 2264);
    t37 = (t36 + 36U);
    t38 = *((char **)t37);
    xsi_vlog_generic_convert_array_indices(t31, t32, t30, t35, 2, 1, t38, 32, 1);
    t39 = (t31 + 4);
    t15 = *((unsigned int *)t39);
    t40 = (!(t15));
    t41 = (t32 + 4);
    t16 = *((unsigned int *)t41);
    t42 = (!(t16));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1804);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2172);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2264);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 2264);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB16;

LAB20:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t32);
    t44 = (t17 - t18);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t32), t45, 0LL);
    goto LAB21;

LAB24:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(37, ng0);
    t14 = ((char*)((ng6)));
    t23 = (t0 + 1804);
    xsi_vlogvar_wait_assign_value(t23, t14, 0, 0, 8, 0LL);
    goto LAB28;

LAB30:    *((unsigned int *)t4) = 1;
    goto LAB33;

LAB32:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB33;

LAB34:    t12 = (t0 + 1392U);
    t13 = *((char **)t12);
    memset(t31, 0, 8);
    t12 = (t13 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t12) == 0)
        goto LAB37;

LAB39:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;

LAB40:    t23 = (t31 + 4);
    t29 = (t13 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    *((unsigned int *)t31) = t25;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB42;

LAB41:    t47 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t47 & 1U);
    t48 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t48 & 1U);
    memset(t32, 0, 8);
    t30 = (t31 + 4);
    t49 = *((unsigned int *)t30);
    t50 = (~(t49));
    t51 = *((unsigned int *)t31);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t30) != 0)
        goto LAB45;

LAB46:    t55 = *((unsigned int *)t4);
    t56 = *((unsigned int *)t32);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t34 = (t4 + 4);
    t35 = (t32 + 4);
    t36 = (t54 + 4);
    t58 = *((unsigned int *)t34);
    t59 = *((unsigned int *)t35);
    t60 = (t58 | t59);
    *((unsigned int *)t36) = t60;
    t61 = *((unsigned int *)t36);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB36;

LAB37:    *((unsigned int *)t31) = 1;
    goto LAB40;

LAB42:    t26 = *((unsigned int *)t31);
    t27 = *((unsigned int *)t29);
    *((unsigned int *)t31) = (t26 | t27);
    t28 = *((unsigned int *)t23);
    t46 = *((unsigned int *)t29);
    *((unsigned int *)t23) = (t28 | t46);
    goto LAB41;

LAB43:    *((unsigned int *)t32) = 1;
    goto LAB46;

LAB45:    t33 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB46;

LAB47:    t63 = *((unsigned int *)t54);
    t64 = *((unsigned int *)t36);
    *((unsigned int *)t54) = (t63 | t64);
    t37 = (t4 + 4);
    t38 = (t32 + 4);
    t65 = *((unsigned int *)t4);
    t66 = (~(t65));
    t67 = *((unsigned int *)t37);
    t68 = (~(t67));
    t69 = *((unsigned int *)t32);
    t70 = (~(t69));
    t71 = *((unsigned int *)t38);
    t72 = (~(t71));
    t40 = (t66 & t68);
    t42 = (t70 & t72);
    t73 = (~(t40));
    t74 = (~(t42));
    t75 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t75 & t73);
    t76 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t76 & t74);
    t77 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t77 & t73);
    t78 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t78 & t74);
    goto LAB49;

LAB50:    xsi_set_current_line(41, ng0);
    t41 = (t0 + 1576U);
    t85 = *((char **)t41);
    t41 = (t0 + 2356);
    t86 = (t41 + 36U);
    t87 = *((char **)t86);
    xsi_vlogtype_concat(t84, 9, 9, 2U, t87, 1, t85, 8);
    t88 = (t0 + 1896);
    t91 = (t0 + 1896);
    t92 = (t91 + 44U);
    t93 = *((char **)t92);
    t94 = (t0 + 1896);
    t95 = (t94 + 40U);
    t96 = *((char **)t95);
    t98 = (t0 + 1988);
    t99 = (t98 + 36U);
    t100 = *((char **)t99);
    memset(t97, 0, 8);
    t101 = (t97 + 4);
    t102 = (t100 + 4);
    t103 = *((unsigned int *)t100);
    t104 = (t103 >> 0);
    *((unsigned int *)t97) = t104;
    t105 = *((unsigned int *)t102);
    t106 = (t105 >> 0);
    *((unsigned int *)t101) = t106;
    t107 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t107 & 15U);
    t108 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t108 & 15U);
    xsi_vlog_generic_convert_array_indices(t89, t90, t93, t96, 2, 1, t97, 4, 2);
    t109 = (t89 + 4);
    t110 = *((unsigned int *)t109);
    t43 = (!(t110));
    t111 = (t90 + 4);
    t112 = *((unsigned int *)t111);
    t44 = (!(t112));
    t45 = (t43 && t44);
    if (t45 == 1)
        goto LAB53;

LAB54:    goto LAB52;

LAB53:    t113 = *((unsigned int *)t89);
    t114 = *((unsigned int *)t90);
    t115 = (t113 - t114);
    t116 = (t115 + 1);
    xsi_vlogvar_wait_assign_value(t88, t84, 0, *((unsigned int *)t90), t116, 0LL);
    goto LAB54;

LAB55:    *((unsigned int *)t4) = 1;
    goto LAB58;

LAB57:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB58;

LAB59:    t12 = (t0 + 1484U);
    t13 = *((char **)t12);
    memset(t31, 0, 8);
    t12 = (t13 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB65;

LAB63:    if (*((unsigned int *)t12) == 0)
        goto LAB62;

LAB64:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;

LAB65:    t23 = (t31 + 4);
    t29 = (t13 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    *((unsigned int *)t31) = t25;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB67;

LAB66:    t47 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t47 & 1U);
    t48 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t48 & 1U);
    memset(t32, 0, 8);
    t30 = (t31 + 4);
    t49 = *((unsigned int *)t30);
    t50 = (~(t49));
    t51 = *((unsigned int *)t31);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t30) != 0)
        goto LAB70;

LAB71:    t55 = *((unsigned int *)t4);
    t56 = *((unsigned int *)t32);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t34 = (t4 + 4);
    t35 = (t32 + 4);
    t36 = (t54 + 4);
    t58 = *((unsigned int *)t34);
    t59 = *((unsigned int *)t35);
    t60 = (t58 | t59);
    *((unsigned int *)t36) = t60;
    t61 = *((unsigned int *)t36);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB72;

LAB73:
LAB74:    goto LAB61;

LAB62:    *((unsigned int *)t31) = 1;
    goto LAB65;

LAB67:    t26 = *((unsigned int *)t31);
    t27 = *((unsigned int *)t29);
    *((unsigned int *)t31) = (t26 | t27);
    t28 = *((unsigned int *)t23);
    t46 = *((unsigned int *)t29);
    *((unsigned int *)t23) = (t28 | t46);
    goto LAB66;

LAB68:    *((unsigned int *)t32) = 1;
    goto LAB71;

LAB70:    t33 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB71;

LAB72:    t63 = *((unsigned int *)t54);
    t64 = *((unsigned int *)t36);
    *((unsigned int *)t54) = (t63 | t64);
    t37 = (t4 + 4);
    t38 = (t32 + 4);
    t65 = *((unsigned int *)t4);
    t66 = (~(t65));
    t67 = *((unsigned int *)t37);
    t68 = (~(t67));
    t69 = *((unsigned int *)t32);
    t70 = (~(t69));
    t71 = *((unsigned int *)t38);
    t72 = (~(t71));
    t40 = (t66 & t68);
    t42 = (t70 & t72);
    t73 = (~(t40));
    t74 = (~(t42));
    t75 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t75 & t73);
    t76 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t76 & t74);
    t77 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t77 & t73);
    t78 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t78 & t74);
    goto LAB74;

LAB75:    xsi_set_current_line(43, ng0);

LAB78:    xsi_set_current_line(44, ng0);
    t41 = (t0 + 1896);
    t85 = (t41 + 36U);
    t86 = *((char **)t85);
    t87 = (t0 + 1896);
    t88 = (t87 + 44U);
    t91 = *((char **)t88);
    t92 = (t0 + 1896);
    t93 = (t92 + 40U);
    t94 = *((char **)t93);
    t95 = (t0 + 2080);
    t96 = (t95 + 36U);
    t98 = *((char **)t96);
    memset(t89, 0, 8);
    t99 = (t89 + 4);
    t100 = (t98 + 4);
    t103 = *((unsigned int *)t98);
    t104 = (t103 >> 0);
    *((unsigned int *)t89) = t104;
    t105 = *((unsigned int *)t100);
    t106 = (t105 >> 0);
    *((unsigned int *)t99) = t106;
    t107 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t107 & 15U);
    t108 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t108 & 15U);
    xsi_vlog_generic_get_array_select_value(t84, 9, t86, t91, t94, 2, 1, t89, 4, 2);
    memset(t90, 0, 8);
    t101 = (t90 + 4);
    t102 = (t84 + 4);
    t110 = *((unsigned int *)t84);
    t112 = (t110 >> 8);
    *((unsigned int *)t90) = t112;
    t113 = *((unsigned int *)t102);
    t114 = (t113 >> 8);
    *((unsigned int *)t101) = t114;
    t117 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t117 & 1U);
    t118 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t118 & 1U);
    t109 = ((char*)((ng5)));
    memset(t97, 0, 8);
    t111 = (t90 + 4);
    t119 = (t109 + 4);
    t120 = *((unsigned int *)t90);
    t121 = *((unsigned int *)t109);
    t122 = (t120 ^ t121);
    t123 = *((unsigned int *)t111);
    t124 = *((unsigned int *)t119);
    t125 = (t123 ^ t124);
    t126 = (t122 | t125);
    t127 = *((unsigned int *)t111);
    t128 = *((unsigned int *)t119);
    t129 = (t127 | t128);
    t130 = (~(t129));
    t131 = (t126 & t130);
    if (t131 != 0)
        goto LAB82;

LAB79:    if (t129 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t97) = 1;

LAB82:    t133 = (t97 + 4);
    t134 = *((unsigned int *)t133);
    t135 = (~(t134));
    t136 = *((unsigned int *)t97);
    t137 = (t136 & t135);
    t138 = (t137 != 0);
    if (t138 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(58, ng0);

LAB95:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2172);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);

LAB96:    t6 = ((char*)((ng3)));
    t40 = xsi_vlog_unsigned_case_compare(t5, 7, t6, 32);
    if (t40 == 1)
        goto LAB97;

LAB98:
LAB100:
LAB99:    xsi_set_current_line(64, ng0);

LAB103:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2172);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t6, 7, t12, 32);
    t13 = (t0 + 2172);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 7, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1896);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    t12 = (t0 + 1896);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t23 = (t0 + 1896);
    t29 = (t23 + 40U);
    t30 = *((char **)t29);
    t33 = (t0 + 2080);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    memset(t31, 0, 8);
    t36 = (t31 + 4);
    t37 = (t35 + 4);
    t7 = *((unsigned int *)t35);
    t8 = (t7 >> 0);
    *((unsigned int *)t31) = t8;
    t9 = *((unsigned int *)t37);
    t10 = (t9 >> 0);
    *((unsigned int *)t36) = t10;
    t11 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t11 & 15U);
    t15 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t15 & 15U);
    xsi_vlog_generic_get_array_select_value(t4, 9, t6, t14, t30, 2, 1, t31, 4, 2);
    t38 = (t0 + 1804);
    xsi_vlogvar_wait_assign_value(t38, t4, 0, 0, 8, 0LL);

LAB101:
LAB85:    goto LAB77;

LAB81:    t132 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(45, ng0);

LAB86:    xsi_set_current_line(46, ng0);
    t139 = (t0 + 2172);
    t140 = (t139 + 36U);
    t141 = *((char **)t140);

LAB87:    t142 = ((char*)((ng3)));
    t43 = xsi_vlog_unsigned_case_compare(t141, 7, t142, 32);
    if (t43 == 1)
        goto LAB88;

LAB89:
LAB91:
LAB90:    xsi_set_current_line(51, ng0);

LAB94:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2172);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t5, 7, t6, 32);
    t12 = (t0 + 2172);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 7, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1896);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 1896);
    t12 = (t6 + 44U);
    t13 = *((char **)t12);
    t14 = (t0 + 1896);
    t23 = (t14 + 40U);
    t29 = *((char **)t23);
    t30 = (t0 + 2080);
    t33 = (t30 + 36U);
    t34 = *((char **)t33);
    memset(t31, 0, 8);
    t35 = (t31 + 4);
    t36 = (t34 + 4);
    t7 = *((unsigned int *)t34);
    t8 = (t7 >> 0);
    *((unsigned int *)t31) = t8;
    t9 = *((unsigned int *)t36);
    t10 = (t9 >> 0);
    *((unsigned int *)t35) = t10;
    t11 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t11 & 15U);
    t15 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t15 & 15U);
    xsi_vlog_generic_get_array_select_value(t4, 9, t5, t13, t29, 2, 1, t31, 4, 2);
    t37 = (t0 + 1804);
    xsi_vlogvar_wait_assign_value(t37, t4, 0, 0, 8, 0LL);

LAB92:    goto LAB85;

LAB88:    xsi_set_current_line(47, ng0);

LAB93:    xsi_set_current_line(48, ng0);
    t143 = (t0 + 1896);
    t144 = (t143 + 36U);
    t145 = *((char **)t144);
    t147 = (t0 + 1896);
    t148 = (t147 + 44U);
    t149 = *((char **)t148);
    t150 = (t0 + 1896);
    t151 = (t150 + 40U);
    t152 = *((char **)t151);
    t154 = (t0 + 2080);
    t155 = (t154 + 36U);
    t156 = *((char **)t155);
    memset(t153, 0, 8);
    t157 = (t153 + 4);
    t158 = (t156 + 4);
    t159 = *((unsigned int *)t156);
    t160 = (t159 >> 0);
    *((unsigned int *)t153) = t160;
    t161 = *((unsigned int *)t158);
    t162 = (t161 >> 0);
    *((unsigned int *)t157) = t162;
    t163 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t163 & 15U);
    t164 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t164 & 15U);
    xsi_vlog_generic_get_array_select_value(t146, 9, t145, t149, t152, 2, 1, t153, 4, 2);
    memset(t165, 0, 8);
    t166 = (t165 + 4);
    t167 = (t146 + 4);
    t168 = *((unsigned int *)t146);
    t169 = (t168 >> 2);
    *((unsigned int *)t165) = t169;
    t170 = *((unsigned int *)t167);
    t171 = (t170 >> 2);
    *((unsigned int *)t166) = t171;
    t172 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t172 & 63U);
    t173 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t173 & 63U);
    t174 = ((char*)((ng5)));
    memset(t175, 0, 8);
    xsi_vlog_unsigned_add(t175, 32, t165, 32, t174, 32);
    t176 = (t0 + 2172);
    xsi_vlogvar_wait_assign_value(t176, t175, 0, 0, 7, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1896);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 1896);
    t12 = (t6 + 44U);
    t13 = *((char **)t12);
    t14 = (t0 + 1896);
    t23 = (t14 + 40U);
    t29 = *((char **)t23);
    t30 = (t0 + 2080);
    t33 = (t30 + 36U);
    t34 = *((char **)t33);
    memset(t31, 0, 8);
    t35 = (t31 + 4);
    t36 = (t34 + 4);
    t7 = *((unsigned int *)t34);
    t8 = (t7 >> 0);
    *((unsigned int *)t31) = t8;
    t9 = *((unsigned int *)t36);
    t10 = (t9 >> 0);
    *((unsigned int *)t35) = t10;
    t11 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t11 & 15U);
    t15 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t15 & 15U);
    xsi_vlog_generic_get_array_select_value(t4, 9, t5, t13, t29, 2, 1, t31, 4, 2);
    t37 = (t0 + 1804);
    xsi_vlogvar_wait_assign_value(t37, t4, 0, 0, 8, 0LL);
    goto LAB92;

LAB97:    xsi_set_current_line(60, ng0);

LAB102:    xsi_set_current_line(62, ng0);
    t12 = ((char*)((ng7)));
    t13 = (t0 + 1804);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    goto LAB101;

}

static void Always_77_4(char *t0)
{
    char t4[8];
    char t23[8];
    char t38[8];
    char t45[8];
    char t84[8];
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
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t85;

LAB0:    t1 = (t0 + 3412U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3760);
    *((int *)t2) = 1;
    t3 = (t0 + 3436);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);

LAB5:    xsi_set_current_line(79, ng0);
    t5 = (t0 + 932U);
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
    memset(t23, 0, 8);
    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t24) != 0)
        goto LAB14;

LAB15:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (!(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB16;

LAB17:    memcpy(t45, t23, 8);

LAB18:    t73 = (t45 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t45);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(84, ng0);

LAB30:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1116U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t2) != 0)
        goto LAB33;

LAB34:    t6 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t6);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB35;

LAB36:    memcpy(t45, t4, 8);

LAB37:    t59 = (t45 + 4);
    t77 = *((unsigned int *)t59);
    t78 = (~(t77));
    t81 = *((unsigned int *)t45);
    t82 = (t81 & t78);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB51;

LAB52:
LAB53:
LAB28:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    *((unsigned int *)t23) = 1;
    goto LAB15;

LAB14:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB15;

LAB16:    t36 = (t0 + 1300U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    t36 = (t37 + 4);
    t39 = *((unsigned int *)t36);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t36) != 0)
        goto LAB21;

LAB22:    t46 = *((unsigned int *)t23);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = (t23 + 4);
    t50 = (t38 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB18;

LAB19:    *((unsigned int *)t38) = 1;
    goto LAB22;

LAB21:    t44 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB22;

LAB23:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t23 + 4);
    t60 = (t38 + 4);
    t61 = *((unsigned int *)t59);
    t62 = (~(t61));
    t63 = *((unsigned int *)t23);
    t64 = (t63 & t62);
    t65 = *((unsigned int *)t60);
    t66 = (~(t65));
    t67 = *((unsigned int *)t38);
    t68 = (t67 & t66);
    t69 = (~(t64));
    t70 = (~(t68));
    t71 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t71 & t69);
    t72 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t72 & t70);
    goto LAB25;

LAB26:    xsi_set_current_line(80, ng0);

LAB29:    xsi_set_current_line(81, ng0);
    t79 = ((char*)((ng3)));
    t80 = (t0 + 1988);
    xsi_vlogvar_wait_assign_value(t80, t79, 0, 0, 5, 0LL);
    goto LAB28;

LAB31:    *((unsigned int *)t4) = 1;
    goto LAB34;

LAB33:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB34;

LAB35:    t12 = (t0 + 1392U);
    t13 = *((char **)t12);
    memset(t23, 0, 8);
    t12 = (t13 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB41;

LAB39:    if (*((unsigned int *)t12) == 0)
        goto LAB38;

LAB40:    t14 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t14) = 1;

LAB41:    t24 = (t23 + 4);
    t30 = (t13 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    *((unsigned int *)t23) = t26;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB43;

LAB42:    t33 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t33 & 1U);
    t34 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t34 & 1U);
    memset(t38, 0, 8);
    t31 = (t23 + 4);
    t35 = *((unsigned int *)t31);
    t39 = (~(t35));
    t40 = *((unsigned int *)t23);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t31) != 0)
        goto LAB46;

LAB47:    t43 = *((unsigned int *)t4);
    t46 = *((unsigned int *)t38);
    t47 = (t43 & t46);
    *((unsigned int *)t45) = t47;
    t37 = (t4 + 4);
    t44 = (t38 + 4);
    t49 = (t45 + 4);
    t48 = *((unsigned int *)t37);
    t52 = *((unsigned int *)t44);
    t53 = (t48 | t52);
    *((unsigned int *)t49) = t53;
    t54 = *((unsigned int *)t49);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB37;

LAB38:    *((unsigned int *)t23) = 1;
    goto LAB41;

LAB43:    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t30);
    *((unsigned int *)t23) = (t27 | t28);
    t29 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t29 | t32);
    goto LAB42;

LAB44:    *((unsigned int *)t38) = 1;
    goto LAB47;

LAB46:    t36 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB47;

LAB48:    t56 = *((unsigned int *)t45);
    t57 = *((unsigned int *)t49);
    *((unsigned int *)t45) = (t56 | t57);
    t50 = (t4 + 4);
    t51 = (t38 + 4);
    t58 = *((unsigned int *)t4);
    t61 = (~(t58));
    t62 = *((unsigned int *)t50);
    t63 = (~(t62));
    t65 = *((unsigned int *)t38);
    t66 = (~(t65));
    t67 = *((unsigned int *)t51);
    t69 = (~(t67));
    t64 = (t61 & t63);
    t68 = (t66 & t69);
    t70 = (~(t64));
    t71 = (~(t68));
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t74 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t74 & t71);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t70);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t71);
    goto LAB50;

LAB51:    xsi_set_current_line(87, ng0);
    t60 = (t0 + 1988);
    t73 = (t60 + 36U);
    t79 = *((char **)t73);
    t80 = ((char*)((ng1)));
    memset(t84, 0, 8);
    xsi_vlog_unsigned_add(t84, 5, t79, 5, t80, 5);
    t85 = (t0 + 1988);
    xsi_vlogvar_wait_assign_value(t85, t84, 0, 0, 5, 0LL);
    goto LAB53;

}

static void Always_91_5(char *t0)
{
    char t4[8];
    char t23[8];
    char t38[8];
    char t45[8];
    char t84[8];
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
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t85;

LAB0:    t1 = (t0 + 3548U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3768);
    *((int *)t2) = 1;
    t3 = (t0 + 3572);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);

LAB5:    xsi_set_current_line(93, ng0);
    t5 = (t0 + 932U);
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
    memset(t23, 0, 8);
    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t24) != 0)
        goto LAB14;

LAB15:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (!(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB16;

LAB17:    memcpy(t45, t23, 8);

LAB18:    t73 = (t45 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t45);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1024U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t2) != 0)
        goto LAB32;

LAB33:    t6 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t6);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB34;

LAB35:    memcpy(t45, t4, 8);

LAB36:    t59 = (t45 + 4);
    t77 = *((unsigned int *)t59);
    t78 = (~(t77));
    t81 = *((unsigned int *)t45);
    t82 = (t81 & t78);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB50;

LAB51:
LAB52:
LAB28:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    *((unsigned int *)t23) = 1;
    goto LAB15;

LAB14:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB15;

LAB16:    t36 = (t0 + 1300U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    t36 = (t37 + 4);
    t39 = *((unsigned int *)t36);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t36) != 0)
        goto LAB21;

LAB22:    t46 = *((unsigned int *)t23);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = (t23 + 4);
    t50 = (t38 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB18;

LAB19:    *((unsigned int *)t38) = 1;
    goto LAB22;

LAB21:    t44 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB22;

LAB23:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t23 + 4);
    t60 = (t38 + 4);
    t61 = *((unsigned int *)t59);
    t62 = (~(t61));
    t63 = *((unsigned int *)t23);
    t64 = (t63 & t62);
    t65 = *((unsigned int *)t60);
    t66 = (~(t65));
    t67 = *((unsigned int *)t38);
    t68 = (t67 & t66);
    t69 = (~(t64));
    t70 = (~(t68));
    t71 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t71 & t69);
    t72 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t72 & t70);
    goto LAB25;

LAB26:    xsi_set_current_line(94, ng0);

LAB29:    xsi_set_current_line(95, ng0);
    t79 = ((char*)((ng3)));
    t80 = (t0 + 2080);
    xsi_vlogvar_wait_assign_value(t80, t79, 0, 0, 5, 0LL);
    goto LAB28;

LAB30:    *((unsigned int *)t4) = 1;
    goto LAB33;

LAB32:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB33;

LAB34:    t12 = (t0 + 1484U);
    t13 = *((char **)t12);
    memset(t23, 0, 8);
    t12 = (t13 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t12) == 0)
        goto LAB37;

LAB39:    t14 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t14) = 1;

LAB40:    t24 = (t23 + 4);
    t30 = (t13 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    *((unsigned int *)t23) = t26;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB42;

LAB41:    t33 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t33 & 1U);
    t34 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t34 & 1U);
    memset(t38, 0, 8);
    t31 = (t23 + 4);
    t35 = *((unsigned int *)t31);
    t39 = (~(t35));
    t40 = *((unsigned int *)t23);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t31) != 0)
        goto LAB45;

LAB46:    t43 = *((unsigned int *)t4);
    t46 = *((unsigned int *)t38);
    t47 = (t43 & t46);
    *((unsigned int *)t45) = t47;
    t37 = (t4 + 4);
    t44 = (t38 + 4);
    t49 = (t45 + 4);
    t48 = *((unsigned int *)t37);
    t52 = *((unsigned int *)t44);
    t53 = (t48 | t52);
    *((unsigned int *)t49) = t53;
    t54 = *((unsigned int *)t49);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB36;

LAB37:    *((unsigned int *)t23) = 1;
    goto LAB40;

LAB42:    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t30);
    *((unsigned int *)t23) = (t27 | t28);
    t29 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t29 | t32);
    goto LAB41;

LAB43:    *((unsigned int *)t38) = 1;
    goto LAB46;

LAB45:    t36 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB46;

LAB47:    t56 = *((unsigned int *)t45);
    t57 = *((unsigned int *)t49);
    *((unsigned int *)t45) = (t56 | t57);
    t50 = (t4 + 4);
    t51 = (t38 + 4);
    t58 = *((unsigned int *)t4);
    t61 = (~(t58));
    t62 = *((unsigned int *)t50);
    t63 = (~(t62));
    t65 = *((unsigned int *)t38);
    t66 = (~(t65));
    t67 = *((unsigned int *)t51);
    t69 = (~(t67));
    t64 = (t61 & t63);
    t68 = (t66 & t69);
    t70 = (~(t64));
    t71 = (~(t68));
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t74 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t74 & t71);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t70);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t71);
    goto LAB49;

LAB50:    xsi_set_current_line(99, ng0);
    t60 = (t0 + 2080);
    t73 = (t60 + 36U);
    t79 = *((char **)t73);
    t80 = ((char*)((ng1)));
    memset(t84, 0, 8);
    xsi_vlog_unsigned_add(t84, 5, t79, 5, t80, 5);
    t85 = (t0 + 2080);
    xsi_vlogvar_wait_assign_value(t85, t84, 0, 0, 5, 0LL);
    goto LAB52;

}


extern void work_m_00000000002880923571_2775274865_init()
{
	static char *pe[] = {(void *)Cont_13_0,(void *)Cont_15_1,(void *)Always_17_2,(void *)Always_24_3,(void *)Always_77_4,(void *)Always_91_5};
	xsi_register_didat("work_m_00000000002880923571_2775274865", "isim/router_top_isim_beh.exe.sim/work/m_00000000002880923571_2775274865.didat");
	xsi_register_executes(pe);
}
