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
static const char *ng0 = "/student/student2/B50_VLSI_RN/VLSI_RN/Verilog_labs/Router1X3/rtl/router_reg.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {3U, 0U};



static void Always_7_0(char *t0)
{
    char t4[8];
    char t23[8];
    char t38[8];
    char t45[8];
    char t81[8];
    char t88[8];
    char t105[8];
    char t113[8];
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
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    int t137;
    int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;

LAB0:    t1 = (t0 + 2904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(7, ng0);
    t2 = (t0 + 3764);
    *((int *)t2) = 1;
    t3 = (t0 + 2928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(8, ng0);

LAB5:    xsi_set_current_line(9, ng0);
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

LAB27:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t2) != 0)
        goto LAB31;

LAB32:    t6 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t6);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB33;

LAB34:    memcpy(t45, t4, 8);

LAB35:    memset(t81, 0, 8);
    t59 = (t45 + 4);
    t77 = *((unsigned int *)t59);
    t78 = (~(t77));
    t82 = *((unsigned int *)t45);
    t83 = (t82 & t78);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t59) != 0)
        goto LAB51;

LAB52:    t73 = (t81 + 4);
    t85 = *((unsigned int *)t81);
    t86 = *((unsigned int *)t73);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB53;

LAB54:    memcpy(t113, t81, 8);

LAB55:    t145 = (t113 + 4);
    t146 = *((unsigned int *)t145);
    t147 = (~(t146));
    t148 = *((unsigned int *)t113);
    t149 = (t148 & t147);
    t150 = (t149 != 0);
    if (t150 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t2) != 0)
        goto LAB74;

LAB75:    t6 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t6);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB76;

LAB77:    memcpy(t38, t4, 8);

LAB78:    t50 = (t38 + 4);
    t61 = *((unsigned int *)t50);
    t62 = (~(t61));
    t63 = *((unsigned int *)t38);
    t65 = (t63 & t62);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB86;

LAB87:
LAB88:
LAB71:
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

LAB16:    t36 = (t0 + 968U);
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

LAB26:    xsi_set_current_line(10, ng0);
    t79 = ((char*)((ng1)));
    t80 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t80, t79, 0, 0, 1, 0LL);
    goto LAB28;

LAB29:    *((unsigned int *)t4) = 1;
    goto LAB32;

LAB31:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB32;

LAB33:    t12 = (t0 + 876U);
    t13 = *((char **)t12);
    memset(t23, 0, 8);
    t12 = (t13 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t12) == 0)
        goto LAB36;

LAB38:    t14 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t14) = 1;

LAB39:    t24 = (t23 + 4);
    t30 = (t13 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    *((unsigned int *)t23) = t26;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB41;

LAB40:    t33 = *((unsigned int *)t23);
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
        goto LAB42;

LAB43:    if (*((unsigned int *)t31) != 0)
        goto LAB44;

LAB45:    t43 = *((unsigned int *)t4);
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
        goto LAB46;

LAB47:
LAB48:    goto LAB35;

LAB36:    *((unsigned int *)t23) = 1;
    goto LAB39;

LAB41:    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t30);
    *((unsigned int *)t23) = (t27 | t28);
    t29 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t29 | t32);
    goto LAB40;

LAB42:    *((unsigned int *)t38) = 1;
    goto LAB45;

LAB44:    t36 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB45;

LAB46:    t56 = *((unsigned int *)t45);
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
    goto LAB48;

LAB49:    *((unsigned int *)t81) = 1;
    goto LAB52;

LAB51:    t60 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB52;

LAB53:    t79 = (t0 + 784U);
    t80 = *((char **)t79);
    memset(t88, 0, 8);
    t79 = (t80 + 4);
    t89 = *((unsigned int *)t79);
    t90 = (~(t89));
    t91 = *((unsigned int *)t80);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB59;

LAB57:    if (*((unsigned int *)t79) == 0)
        goto LAB56;

LAB58:    t94 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t94) = 1;

LAB59:    t95 = (t88 + 4);
    t96 = (t80 + 4);
    t97 = *((unsigned int *)t80);
    t98 = (~(t97));
    *((unsigned int *)t88) = t98;
    *((unsigned int *)t95) = 0;
    if (*((unsigned int *)t96) != 0)
        goto LAB61;

LAB60:    t103 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t103 & 1U);
    t104 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t104 & 1U);
    memset(t105, 0, 8);
    t106 = (t88 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t88);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t106) != 0)
        goto LAB64;

LAB65:    t114 = *((unsigned int *)t81);
    t115 = *((unsigned int *)t105);
    t116 = (t114 & t115);
    *((unsigned int *)t113) = t116;
    t117 = (t81 + 4);
    t118 = (t105 + 4);
    t119 = (t113 + 4);
    t120 = *((unsigned int *)t117);
    t121 = *((unsigned int *)t118);
    t122 = (t120 | t121);
    *((unsigned int *)t119) = t122;
    t123 = *((unsigned int *)t119);
    t124 = (t123 != 0);
    if (t124 == 1)
        goto LAB66;

LAB67:
LAB68:    goto LAB55;

LAB56:    *((unsigned int *)t88) = 1;
    goto LAB59;

LAB61:    t99 = *((unsigned int *)t88);
    t100 = *((unsigned int *)t96);
    *((unsigned int *)t88) = (t99 | t100);
    t101 = *((unsigned int *)t95);
    t102 = *((unsigned int *)t96);
    *((unsigned int *)t95) = (t101 | t102);
    goto LAB60;

LAB62:    *((unsigned int *)t105) = 1;
    goto LAB65;

LAB64:    t112 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB65;

LAB66:    t125 = *((unsigned int *)t113);
    t126 = *((unsigned int *)t119);
    *((unsigned int *)t113) = (t125 | t126);
    t127 = (t81 + 4);
    t128 = (t105 + 4);
    t129 = *((unsigned int *)t81);
    t130 = (~(t129));
    t131 = *((unsigned int *)t127);
    t132 = (~(t131));
    t133 = *((unsigned int *)t105);
    t134 = (~(t133));
    t135 = *((unsigned int *)t128);
    t136 = (~(t135));
    t137 = (t130 & t132);
    t138 = (t134 & t136);
    t139 = (~(t137));
    t140 = (~(t138));
    t141 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t141 & t139);
    t142 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t142 & t140);
    t143 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t143 & t139);
    t144 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t144 & t140);
    goto LAB68;

LAB69:    xsi_set_current_line(12, ng0);
    t151 = ((char*)((ng2)));
    t152 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t152, t151, 0, 0, 1, 0LL);
    goto LAB71;

LAB72:    *((unsigned int *)t4) = 1;
    goto LAB75;

LAB74:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB75;

LAB76:    t12 = (t0 + 1932);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    memset(t23, 0, 8);
    t24 = (t14 + 4);
    t18 = *((unsigned int *)t24);
    t19 = (~(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t24) != 0)
        goto LAB81;

LAB82:    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t23);
    t27 = (t25 & t26);
    *((unsigned int *)t38) = t27;
    t31 = (t4 + 4);
    t36 = (t23 + 4);
    t37 = (t38 + 4);
    t28 = *((unsigned int *)t31);
    t29 = *((unsigned int *)t36);
    t32 = (t28 | t29);
    *((unsigned int *)t37) = t32;
    t33 = *((unsigned int *)t37);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB78;

LAB79:    *((unsigned int *)t23) = 1;
    goto LAB82;

LAB81:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB82;

LAB83:    t35 = *((unsigned int *)t38);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t38) = (t35 | t39);
    t44 = (t4 + 4);
    t49 = (t23 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t44);
    t43 = (~(t42));
    t46 = *((unsigned int *)t23);
    t47 = (~(t46));
    t48 = *((unsigned int *)t49);
    t52 = (~(t48));
    t64 = (t41 & t43);
    t68 = (t47 & t52);
    t53 = (~(t64));
    t54 = (~(t68));
    t55 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t55 & t53);
    t56 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t56 & t54);
    t57 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t57 & t53);
    t58 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t58 & t54);
    goto LAB85;

LAB86:    xsi_set_current_line(14, ng0);

LAB89:    xsi_set_current_line(15, ng0);
    t51 = (t0 + 1840);
    t59 = (t51 + 36U);
    t60 = *((char **)t59);
    memset(t45, 0, 8);
    t73 = (t60 + 4);
    t67 = *((unsigned int *)t73);
    t69 = (~(t67));
    t70 = *((unsigned int *)t60);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB93;

LAB91:    if (*((unsigned int *)t73) == 0)
        goto LAB90;

LAB92:    t79 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t79) = 1;

LAB93:    t80 = (t45 + 4);
    t94 = (t60 + 4);
    t74 = *((unsigned int *)t60);
    t75 = (~(t74));
    *((unsigned int *)t45) = t75;
    *((unsigned int *)t80) = 0;
    if (*((unsigned int *)t94) != 0)
        goto LAB95;

LAB94:    t83 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t83 & 1U);
    t84 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t84 & 1U);
    t95 = (t45 + 4);
    t85 = *((unsigned int *)t95);
    t86 = (~(t85));
    t87 = *((unsigned int *)t45);
    t89 = (t87 & t86);
    t90 = (t89 != 0);
    if (t90 > 0)
        goto LAB96;

LAB97:
LAB98:    goto LAB88;

LAB90:    *((unsigned int *)t45) = 1;
    goto LAB93;

LAB95:    t76 = *((unsigned int *)t45);
    t77 = *((unsigned int *)t94);
    *((unsigned int *)t45) = (t76 | t77);
    t78 = *((unsigned int *)t80);
    t82 = *((unsigned int *)t94);
    *((unsigned int *)t80) = (t78 | t82);
    goto LAB94;

LAB96:    xsi_set_current_line(16, ng0);
    t96 = ((char*)((ng2)));
    t106 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t106, t96, 0, 0, 1, 0LL);
    goto LAB98;

}

static void Always_21_1(char *t0)
{
    char t4[8];
    char t23[8];
    char t38[8];
    char t45[8];
    char t81[8];
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
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;

LAB0:    t1 = (t0 + 3040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 3772);
    *((int *)t2) = 1;
    t3 = (t0 + 3064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);

LAB5:    xsi_set_current_line(23, ng0);
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

LAB27:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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
        goto LAB32;

LAB29:    if (t19 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t4) = 1;

LAB32:    memset(t23, 0, 8);
    t13 = (t4 + 4);
    t22 = *((unsigned int *)t13);
    t25 = (~(t22));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t13) != 0)
        goto LAB35;

LAB36:    t24 = (t23 + 4);
    t29 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t24);
    t33 = (t29 || t32);
    if (t33 > 0)
        goto LAB37;

LAB38:    memcpy(t81, t23, 8);

LAB39:    t80 = (t81 + 4);
    t91 = *((unsigned int *)t80);
    t92 = (~(t91));
    t93 = *((unsigned int *)t81);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
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

LAB16:    t36 = (t0 + 1428U);
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

LAB26:    xsi_set_current_line(24, ng0);
    t79 = ((char*)((ng1)));
    t80 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t80, t79, 0, 0, 1, 0LL);
    goto LAB28;

LAB31:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t23) = 1;
    goto LAB36;

LAB35:    t14 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB36;

LAB37:    t30 = (t0 + 784U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t36 = (t31 + 4);
    t37 = (t30 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t30);
    t39 = (t34 ^ t35);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t37);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t46 = *((unsigned int *)t36);
    t47 = *((unsigned int *)t37);
    t48 = (t46 | t47);
    t52 = (~(t48));
    t53 = (t43 & t52);
    if (t53 != 0)
        goto LAB43;

LAB40:    if (t48 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t38) = 1;

LAB43:    memset(t45, 0, 8);
    t49 = (t38 + 4);
    t54 = *((unsigned int *)t49);
    t55 = (~(t54));
    t56 = *((unsigned int *)t38);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t49) != 0)
        goto LAB46;

LAB47:    t61 = *((unsigned int *)t23);
    t62 = *((unsigned int *)t45);
    t63 = (t61 & t62);
    *((unsigned int *)t81) = t63;
    t51 = (t23 + 4);
    t59 = (t45 + 4);
    t60 = (t81 + 4);
    t65 = *((unsigned int *)t51);
    t66 = *((unsigned int *)t59);
    t67 = (t65 | t66);
    *((unsigned int *)t60) = t67;
    t69 = *((unsigned int *)t60);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB39;

LAB42:    t44 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t45) = 1;
    goto LAB47;

LAB46:    t50 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB47;

LAB48:    t71 = *((unsigned int *)t81);
    t72 = *((unsigned int *)t60);
    *((unsigned int *)t81) = (t71 | t72);
    t73 = (t23 + 4);
    t79 = (t45 + 4);
    t74 = *((unsigned int *)t23);
    t75 = (~(t74));
    t76 = *((unsigned int *)t73);
    t77 = (~(t76));
    t78 = *((unsigned int *)t45);
    t82 = (~(t78));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t64 = (t75 & t77);
    t68 = (t82 & t84);
    t85 = (~(t64));
    t86 = (~(t68));
    t87 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t87 & t85);
    t88 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t88 & t86);
    t89 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t89 & t85);
    t90 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t90 & t86);
    goto LAB50;

LAB51:    xsi_set_current_line(26, ng0);
    t96 = ((char*)((ng3)));
    t97 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t97, t96, 0, 0, 1, 0LL);
    goto LAB53;

}

static void Always_30_2(char *t0)
{
    char t4[8];
    char t31[8];
    char t32[8];
    char t56[8];
    char t68[8];
    char t79[8];
    char t95[8];
    char t103[8];
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
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    int t127;
    int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;

LAB0:    t1 = (t0 + 3176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3780);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
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

LAB13:    xsi_set_current_line(39, ng0);

LAB16:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t2) != 0)
        goto LAB19;

LAB20:    t6 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t6);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB21;

LAB22:    memcpy(t32, t4, 8);

LAB23:    memset(t56, 0, 8);
    t57 = (t32 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t57) != 0)
        goto LAB33;

LAB34:    t64 = (t56 + 4);
    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t64);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB35;

LAB36:    memcpy(t103, t56, 8);

LAB37:    t135 = (t103 + 4);
    t136 = *((unsigned int *)t135);
    t137 = (~(t136));
    t138 = *((unsigned int *)t103);
    t139 = (t138 & t137);
    t140 = (t139 != 0);
    if (t140 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t2) != 0)
        goto LAB54;

LAB55:    t6 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t6);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB56;

LAB57:    memcpy(t56, t4, 8);

LAB58:    t70 = (t56 + 4);
    t76 = *((unsigned int *)t70);
    t77 = (~(t76));
    t82 = *((unsigned int *)t56);
    t83 = (t82 & t77);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB76;

LAB74:    if (*((unsigned int *)t2) == 0)
        goto LAB73;

LAB75:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB76:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB78;

LAB77:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    memset(t31, 0, 8);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t13) != 0)
        goto LAB81;

LAB82:    t23 = (t31 + 4);
    t33 = *((unsigned int *)t31);
    t34 = *((unsigned int *)t23);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB83;

LAB84:    memcpy(t56, t31, 8);

LAB85:    t70 = (t56 + 4);
    t77 = *((unsigned int *)t70);
    t82 = (~(t77));
    t83 = *((unsigned int *)t56);
    t84 = (t83 & t82);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB93;

LAB94:
LAB95:
LAB72:
LAB51:
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

LAB12:    xsi_set_current_line(33, ng0);

LAB15:    xsi_set_current_line(34, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 8, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB14;

LAB17:    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB19:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB20;

LAB21:    t12 = (t0 + 784U);
    t13 = *((char **)t12);
    memset(t31, 0, 8);
    t12 = (t13 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t12) != 0)
        goto LAB26;

LAB27:    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t31);
    t26 = (t24 & t25);
    *((unsigned int *)t32) = t26;
    t23 = (t4 + 4);
    t29 = (t31 + 4);
    t30 = (t32 + 4);
    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t29);
    t33 = (t27 | t28);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB23;

LAB24:    *((unsigned int *)t31) = 1;
    goto LAB27;

LAB26:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB27;

LAB28:    t36 = *((unsigned int *)t32);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t32) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t31 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t50);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t51);
    goto LAB30;

LAB31:    *((unsigned int *)t56) = 1;
    goto LAB34;

LAB33:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB34;

LAB35:    t69 = (t0 + 1520U);
    t70 = *((char **)t69);
    memset(t68, 0, 8);
    t69 = (t68 + 4);
    t71 = (t70 + 4);
    t72 = *((unsigned int *)t70);
    t73 = (t72 >> 0);
    *((unsigned int *)t68) = t73;
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 0);
    *((unsigned int *)t69) = t75;
    t76 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t76 & 3U);
    t77 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t77 & 3U);
    t78 = ((char*)((ng4)));
    memset(t79, 0, 8);
    t80 = (t68 + 4);
    t81 = (t78 + 4);
    t82 = *((unsigned int *)t68);
    t83 = *((unsigned int *)t78);
    t84 = (t82 ^ t83);
    t85 = *((unsigned int *)t80);
    t86 = *((unsigned int *)t81);
    t87 = (t85 ^ t86);
    t88 = (t84 | t87);
    t89 = *((unsigned int *)t80);
    t90 = *((unsigned int *)t81);
    t91 = (t89 | t90);
    t92 = (~(t91));
    t93 = (t88 & t92);
    if (t93 != 0)
        goto LAB39;

LAB38:    if (t91 != 0)
        goto LAB40;

LAB41:    memset(t95, 0, 8);
    t96 = (t79 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t79);
    t100 = (t99 & t98);
    t101 = (t100 & 1U);
    if (t101 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t96) != 0)
        goto LAB44;

LAB45:    t104 = *((unsigned int *)t56);
    t105 = *((unsigned int *)t95);
    t106 = (t104 & t105);
    *((unsigned int *)t103) = t106;
    t107 = (t56 + 4);
    t108 = (t95 + 4);
    t109 = (t103 + 4);
    t110 = *((unsigned int *)t107);
    t111 = *((unsigned int *)t108);
    t112 = (t110 | t111);
    *((unsigned int *)t109) = t112;
    t113 = *((unsigned int *)t109);
    t114 = (t113 != 0);
    if (t114 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB37;

LAB39:    *((unsigned int *)t79) = 1;
    goto LAB41;

LAB40:    t94 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t95) = 1;
    goto LAB45;

LAB44:    t102 = (t95 + 4);
    *((unsigned int *)t95) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB45;

LAB46:    t115 = *((unsigned int *)t103);
    t116 = *((unsigned int *)t109);
    *((unsigned int *)t103) = (t115 | t116);
    t117 = (t56 + 4);
    t118 = (t95 + 4);
    t119 = *((unsigned int *)t56);
    t120 = (~(t119));
    t121 = *((unsigned int *)t117);
    t122 = (~(t121));
    t123 = *((unsigned int *)t95);
    t124 = (~(t123));
    t125 = *((unsigned int *)t118);
    t126 = (~(t125));
    t127 = (t120 & t122);
    t128 = (t124 & t126);
    t129 = (~(t127));
    t130 = (~(t128));
    t131 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t131 & t129);
    t132 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t132 & t130);
    t133 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t133 & t129);
    t134 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t134 & t130);
    goto LAB48;

LAB49:    xsi_set_current_line(40, ng0);
    t141 = (t0 + 1520U);
    t142 = *((char **)t141);
    t141 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t141, t142, 0, 0, 8, 0LL);
    goto LAB51;

LAB52:    *((unsigned int *)t4) = 1;
    goto LAB55;

LAB54:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB55;

LAB56:    t12 = (t0 + 876U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng3)));
    memset(t31, 0, 8);
    t14 = (t13 + 4);
    t23 = (t12 + 4);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t12);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t23);
    t24 = (t21 ^ t22);
    t25 = (t20 | t24);
    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t23);
    t28 = (t26 | t27);
    t33 = (~(t28));
    t34 = (t25 & t33);
    if (t34 != 0)
        goto LAB62;

LAB59:    if (t28 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t31) = 1;

LAB62:    memset(t32, 0, 8);
    t30 = (t31 + 4);
    t35 = *((unsigned int *)t30);
    t36 = (~(t35));
    t37 = *((unsigned int *)t31);
    t40 = (t37 & t36);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t30) != 0)
        goto LAB65;

LAB66:    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t32);
    t44 = (t42 & t43);
    *((unsigned int *)t56) = t44;
    t39 = (t4 + 4);
    t57 = (t32 + 4);
    t63 = (t56 + 4);
    t45 = *((unsigned int *)t39);
    t46 = *((unsigned int *)t57);
    t47 = (t45 | t46);
    *((unsigned int *)t63) = t47;
    t50 = *((unsigned int *)t63);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB67;

LAB68:
LAB69:    goto LAB58;

LAB61:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t32) = 1;
    goto LAB66;

LAB65:    t38 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB66;

LAB67:    t52 = *((unsigned int *)t56);
    t53 = *((unsigned int *)t63);
    *((unsigned int *)t56) = (t52 | t53);
    t64 = (t4 + 4);
    t69 = (t32 + 4);
    t54 = *((unsigned int *)t4);
    t55 = (~(t54));
    t58 = *((unsigned int *)t64);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t69);
    t65 = (~(t62));
    t48 = (t55 & t59);
    t49 = (t61 & t65);
    t66 = (~(t48));
    t67 = (~(t49));
    t72 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t72 & t66);
    t73 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t73 & t67);
    t74 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t74 & t66);
    t75 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t75 & t67);
    goto LAB69;

LAB70:    xsi_set_current_line(42, ng0);
    t71 = (t0 + 1520U);
    t78 = *((char **)t71);
    t71 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t71, t78, 0, 0, 8, 0LL);
    goto LAB72;

LAB73:    *((unsigned int *)t4) = 1;
    goto LAB76;

LAB78:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t19 | t20);
    goto LAB77;

LAB79:    *((unsigned int *)t31) = 1;
    goto LAB82;

LAB81:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB82;

LAB83:    t29 = (t0 + 1060U);
    t30 = *((char **)t29);
    memset(t32, 0, 8);
    t29 = (t30 + 4);
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t40 = *((unsigned int *)t30);
    t41 = (t40 & t37);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t29) != 0)
        goto LAB88;

LAB89:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t32);
    t45 = (t43 & t44);
    *((unsigned int *)t56) = t45;
    t39 = (t31 + 4);
    t57 = (t32 + 4);
    t63 = (t56 + 4);
    t46 = *((unsigned int *)t39);
    t47 = *((unsigned int *)t57);
    t50 = (t46 | t47);
    *((unsigned int *)t63) = t50;
    t51 = *((unsigned int *)t63);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB90;

LAB91:
LAB92:    goto LAB85;

LAB86:    *((unsigned int *)t32) = 1;
    goto LAB89;

LAB88:    t38 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB89;

LAB90:    t53 = *((unsigned int *)t56);
    t54 = *((unsigned int *)t63);
    *((unsigned int *)t56) = (t53 | t54);
    t64 = (t31 + 4);
    t69 = (t32 + 4);
    t55 = *((unsigned int *)t31);
    t58 = (~(t55));
    t59 = *((unsigned int *)t64);
    t60 = (~(t59));
    t61 = *((unsigned int *)t32);
    t62 = (~(t61));
    t65 = *((unsigned int *)t69);
    t66 = (~(t65));
    t48 = (t58 & t60);
    t49 = (t62 & t66);
    t67 = (~(t48));
    t72 = (~(t49));
    t73 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t73 & t67);
    t74 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t74 & t72);
    t75 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t75 & t67);
    t76 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t76 & t72);
    goto LAB92;

LAB93:    xsi_set_current_line(44, ng0);
    t71 = (t0 + 1520U);
    t78 = *((char **)t71);
    t71 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t71, t78, 0, 0, 8, 0LL);
    goto LAB95;

}

static void Always_48_3(char *t0)
{
    char t4[8];
    char t31[8];
    char t35[8];
    char t42[8];
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
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
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;

LAB0:    t1 = (t0 + 3312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3788);
    *((int *)t2) = 1;
    t3 = (t0 + 3336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
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

LAB13:    xsi_set_current_line(53, ng0);

LAB15:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1336U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t2) != 0)
        goto LAB21;

LAB22:    t6 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t6);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB23;

LAB24:    memcpy(t42, t4, 8);

LAB25:    t74 = (t42 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t42);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB42;

LAB43:
LAB44:
LAB41:
LAB18:
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

LAB12:    xsi_set_current_line(51, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 8, 0LL);
    goto LAB14;

LAB16:    xsi_set_current_line(55, ng0);
    t5 = (t0 + 2116);
    t6 = (t5 + 36U);
    t12 = *((char **)t6);
    t13 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    goto LAB18;

LAB19:    *((unsigned int *)t4) = 1;
    goto LAB22;

LAB21:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB22;

LAB23:    t12 = (t0 + 876U);
    t13 = *((char **)t12);
    memset(t31, 0, 8);
    t12 = (t13 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t12) == 0)
        goto LAB26;

LAB28:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;

LAB29:    t23 = (t31 + 4);
    t29 = (t13 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    *((unsigned int *)t31) = t25;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB31;

LAB30:    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 & 1U);
    t34 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t34 & 1U);
    memset(t35, 0, 8);
    t30 = (t31 + 4);
    t36 = *((unsigned int *)t30);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t30) != 0)
        goto LAB34;

LAB35:    t43 = *((unsigned int *)t4);
    t44 = *((unsigned int *)t35);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t4 + 4);
    t47 = (t35 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB25;

LAB26:    *((unsigned int *)t31) = 1;
    goto LAB29;

LAB31:    t26 = *((unsigned int *)t31);
    t27 = *((unsigned int *)t29);
    *((unsigned int *)t31) = (t26 | t27);
    t28 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t29);
    *((unsigned int *)t23) = (t28 | t32);
    goto LAB30;

LAB32:    *((unsigned int *)t35) = 1;
    goto LAB35;

LAB34:    t41 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB35;

LAB36:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t4 + 4);
    t57 = (t35 + 4);
    t58 = *((unsigned int *)t4);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t35);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB38;

LAB39:    xsi_set_current_line(57, ng0);
    t80 = (t0 + 1520U);
    t81 = *((char **)t80);
    t80 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t80, t81, 0, 0, 8, 0LL);
    goto LAB41;

LAB42:    xsi_set_current_line(59, ng0);
    t5 = (t0 + 2208);
    t6 = (t5 + 36U);
    t12 = *((char **)t6);
    t13 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    goto LAB44;

}

static void Always_62_4(char *t0)
{
    char t4[8];
    char t31[8];
    char t32[8];
    char t68[8];
    char t83[8];
    char t90[8];
    char t96[8];
    char t138[8];
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
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    int t119;
    int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;

LAB0:    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3796);
    *((int *)t2) = 1;
    t3 = (t0 + 3472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
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

LAB13:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t2) != 0)
        goto LAB17;

LAB18:    t6 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t6);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB19;

LAB20:    memcpy(t32, t4, 8);

LAB21:    t56 = (t32 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t32);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t2) != 0)
        goto LAB37;

LAB38:    t6 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t6);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB39;

LAB40:    memcpy(t32, t4, 8);

LAB41:    memset(t68, 0, 8);
    t56 = (t32 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t32);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t56) != 0)
        goto LAB51;

LAB52:    t63 = (t68 + 4);
    t69 = *((unsigned int *)t68);
    t70 = *((unsigned int *)t63);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB53;

LAB54:    memcpy(t96, t68, 8);

LAB55:    t127 = (t96 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t96);
    t131 = (t130 & t129);
    t132 = (t131 != 0);
    if (t132 > 0)
        goto LAB69;

LAB70:
LAB71:
LAB31:
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

LAB12:    xsi_set_current_line(65, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 8, 0LL);
    goto LAB14;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB17:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB18;

LAB19:    t12 = (t0 + 1336U);
    t13 = *((char **)t12);
    memset(t31, 0, 8);
    t12 = (t13 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t12) != 0)
        goto LAB24;

LAB25:    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t31);
    t26 = (t24 & t25);
    *((unsigned int *)t32) = t26;
    t23 = (t4 + 4);
    t29 = (t31 + 4);
    t30 = (t32 + 4);
    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t29);
    t33 = (t27 | t28);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB21;

LAB22:    *((unsigned int *)t31) = 1;
    goto LAB25;

LAB24:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB25;

LAB26:    t36 = *((unsigned int *)t32);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t32) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t31 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t50);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t51);
    goto LAB28;

LAB29:    xsi_set_current_line(67, ng0);
    t62 = (t0 + 2300);
    t63 = (t62 + 36U);
    t64 = *((char **)t63);
    t65 = (t0 + 2116);
    t66 = (t65 + 36U);
    t67 = *((char **)t66);
    t69 = *((unsigned int *)t64);
    t70 = *((unsigned int *)t67);
    t71 = (t69 ^ t70);
    *((unsigned int *)t68) = t71;
    t72 = (t64 + 4);
    t73 = (t67 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB32;

LAB33:
LAB34:    t82 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t82, t68, 0, 0, 8, 0LL);
    goto LAB31;

LAB32:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    goto LAB34;

LAB35:    *((unsigned int *)t4) = 1;
    goto LAB38;

LAB37:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB38;

LAB39:    t12 = (t0 + 1060U);
    t13 = *((char **)t12);
    memset(t31, 0, 8);
    t12 = (t13 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t12) != 0)
        goto LAB44;

LAB45:    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t31);
    t26 = (t24 & t25);
    *((unsigned int *)t32) = t26;
    t23 = (t4 + 4);
    t29 = (t31 + 4);
    t30 = (t32 + 4);
    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t29);
    t33 = (t27 | t28);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB41;

LAB42:    *((unsigned int *)t31) = 1;
    goto LAB45;

LAB44:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB45;

LAB46:    t36 = *((unsigned int *)t32);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t32) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t31 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t50);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t51);
    goto LAB48;

LAB49:    *((unsigned int *)t68) = 1;
    goto LAB52;

LAB51:    t62 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB52;

LAB53:    t64 = (t0 + 1244U);
    t65 = *((char **)t64);
    memset(t83, 0, 8);
    t64 = (t65 + 4);
    t75 = *((unsigned int *)t64);
    t76 = (~(t75));
    t77 = *((unsigned int *)t65);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB59;

LAB57:    if (*((unsigned int *)t64) == 0)
        goto LAB56;

LAB58:    t66 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t66) = 1;

LAB59:    t67 = (t83 + 4);
    t72 = (t65 + 4);
    t80 = *((unsigned int *)t65);
    t81 = (~(t80));
    *((unsigned int *)t83) = t81;
    *((unsigned int *)t67) = 0;
    if (*((unsigned int *)t72) != 0)
        goto LAB61;

LAB60:    t88 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t88 & 1U);
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & 1U);
    memset(t90, 0, 8);
    t73 = (t83 + 4);
    t91 = *((unsigned int *)t73);
    t92 = (~(t91));
    t93 = *((unsigned int *)t83);
    t94 = (t93 & t92);
    t95 = (t94 & 1U);
    if (t95 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t73) != 0)
        goto LAB64;

LAB65:    t97 = *((unsigned int *)t68);
    t98 = *((unsigned int *)t90);
    t99 = (t97 & t98);
    *((unsigned int *)t96) = t99;
    t82 = (t68 + 4);
    t100 = (t90 + 4);
    t101 = (t96 + 4);
    t102 = *((unsigned int *)t82);
    t103 = *((unsigned int *)t100);
    t104 = (t102 | t103);
    *((unsigned int *)t101) = t104;
    t105 = *((unsigned int *)t101);
    t106 = (t105 != 0);
    if (t106 == 1)
        goto LAB66;

LAB67:
LAB68:    goto LAB55;

LAB56:    *((unsigned int *)t83) = 1;
    goto LAB59;

LAB61:    t84 = *((unsigned int *)t83);
    t85 = *((unsigned int *)t72);
    *((unsigned int *)t83) = (t84 | t85);
    t86 = *((unsigned int *)t67);
    t87 = *((unsigned int *)t72);
    *((unsigned int *)t67) = (t86 | t87);
    goto LAB60;

LAB62:    *((unsigned int *)t90) = 1;
    goto LAB65;

LAB64:    t74 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB65;

LAB66:    t107 = *((unsigned int *)t96);
    t108 = *((unsigned int *)t101);
    *((unsigned int *)t96) = (t107 | t108);
    t109 = (t68 + 4);
    t110 = (t90 + 4);
    t111 = *((unsigned int *)t68);
    t112 = (~(t111));
    t113 = *((unsigned int *)t109);
    t114 = (~(t113));
    t115 = *((unsigned int *)t90);
    t116 = (~(t115));
    t117 = *((unsigned int *)t110);
    t118 = (~(t117));
    t119 = (t112 & t114);
    t120 = (t116 & t118);
    t121 = (~(t119));
    t122 = (~(t120));
    t123 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t123 & t121);
    t124 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t124 & t122);
    t125 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t125 & t121);
    t126 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t126 & t122);
    goto LAB68;

LAB69:    xsi_set_current_line(69, ng0);
    t133 = (t0 + 2300);
    t134 = (t133 + 36U);
    t135 = *((char **)t134);
    t136 = (t0 + 1520U);
    t137 = *((char **)t136);
    t139 = *((unsigned int *)t135);
    t140 = *((unsigned int *)t137);
    t141 = (t139 ^ t140);
    *((unsigned int *)t138) = t141;
    t136 = (t135 + 4);
    t142 = (t137 + 4);
    t143 = (t138 + 4);
    t144 = *((unsigned int *)t136);
    t145 = *((unsigned int *)t142);
    t146 = (t144 | t145);
    *((unsigned int *)t143) = t146;
    t147 = *((unsigned int *)t143);
    t148 = (t147 != 0);
    if (t148 == 1)
        goto LAB72;

LAB73:
LAB74:    t151 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t151, t138, 0, 0, 8, 0LL);
    goto LAB71;

LAB72:    t149 = *((unsigned int *)t138);
    t150 = *((unsigned int *)t143);
    *((unsigned int *)t138) = (t149 | t150);
    goto LAB74;

}

static void Always_72_5(char *t0)
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
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 3584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3804);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng0);

LAB5:    xsi_set_current_line(74, ng0);
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

LAB13:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB17:
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

LAB12:    xsi_set_current_line(75, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    goto LAB14;

LAB15:    xsi_set_current_line(77, ng0);

LAB18:    xsi_set_current_line(78, ng0);
    t12 = (t0 + 2300);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t23 = (t0 + 2392);
    t29 = (t23 + 36U);
    t30 = *((char **)t29);
    memset(t4, 0, 8);
    t31 = (t14 + 4);
    t32 = (t30 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t30);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t31);
    t19 = *((unsigned int *)t32);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t31);
    t24 = *((unsigned int *)t32);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB20;

LAB19:    if (t25 != 0)
        goto LAB21;

LAB22:    t34 = (t4 + 4);
    t28 = *((unsigned int *)t34);
    t35 = (~(t28));
    t36 = *((unsigned int *)t4);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB25:    goto LAB17;

LAB20:    *((unsigned int *)t4) = 1;
    goto LAB22;

LAB21:    t33 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(79, ng0);
    t39 = ((char*)((ng2)));
    t40 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 1, 0LL);
    goto LAB25;

}


extern void work_m_00000000002214264562_1321141568_init()
{
	static char *pe[] = {(void *)Always_7_0,(void *)Always_21_1,(void *)Always_30_2,(void *)Always_48_3,(void *)Always_62_4,(void *)Always_72_5};
	xsi_register_didat("work_m_00000000002214264562_1321141568", "isim/router_top_tb_isim_beh.exe.sim/work/m_00000000002214264562_1321141568.didat");
	xsi_register_executes(pe);
}
