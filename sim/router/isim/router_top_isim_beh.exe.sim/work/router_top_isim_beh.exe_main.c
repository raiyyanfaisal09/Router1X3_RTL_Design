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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000552194910_2849853989_init();
    work_m_00000000000891657705_0535140239_init();
    work_m_00000000002214264562_1321141568_init();
    work_m_00000000002880923571_2775274865_init();
    work_m_00000000000302598343_0856560831_init();
    work_m_00000000000347813886_2073120511_init();


    xsi_register_tops("work_m_00000000000302598343_0856560831");
    xsi_register_tops("work_m_00000000000347813886_2073120511");


    return xsi_run_simulation(argc, argv);

}
