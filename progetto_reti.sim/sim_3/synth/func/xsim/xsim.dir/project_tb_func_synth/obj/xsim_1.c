/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_452(char*, char *);
extern void execute_453(char*, char *);
extern void execute_454(char*, char *);
extern void execute_34(char*, char *);
extern void execute_37(char*, char *);
extern void execute_40(char*, char *);
extern void execute_43(char*, char *);
extern void execute_48(char*, char *);
extern void execute_50(char*, char *);
extern void execute_51(char*, char *);
extern void execute_52(char*, char *);
extern void execute_83(char*, char *);
extern void execute_86(char*, char *);
extern void execute_89(char*, char *);
extern void execute_95(char*, char *);
extern void execute_98(char*, char *);
extern void execute_101(char*, char *);
extern void execute_103(char*, char *);
extern void execute_104(char*, char *);
extern void execute_105(char*, char *);
extern void execute_107(char*, char *);
extern void execute_108(char*, char *);
extern void execute_109(char*, char *);
extern void execute_127(char*, char *);
extern void execute_129(char*, char *);
extern void execute_130(char*, char *);
extern void execute_160(char*, char *);
extern void execute_163(char*, char *);
extern void execute_166(char*, char *);
extern void execute_169(char*, char *);
extern void execute_172(char*, char *);
extern void execute_174(char*, char *);
extern void execute_175(char*, char *);
extern void execute_351(char*, char *);
extern void execute_409(char*, char *);
extern void execute_411(char*, char *);
extern void execute_413(char*, char *);
extern void execute_414(char*, char *);
extern void execute_415(char*, char *);
extern void execute_421(char*, char *);
extern void execute_423(char*, char *);
extern void execute_425(char*, char *);
extern void execute_441(char*, char *);
extern void execute_443(char*, char *);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_55(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_165(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_172(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_179(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_186(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_193(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_200(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_207(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_214(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_221(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_228(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_235(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_242(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_249(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_256(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_263(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_270(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_277(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_284(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_291(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_298(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_305(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_312(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_319(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_326(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_333(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_340(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_347(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_354(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_361(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_368(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_375(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_382(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_389(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_396(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_403(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_410(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_417(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_424(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_431(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_438(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_445(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_452(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_459(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_466(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_473(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_480(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_487(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_494(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_501(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_508(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_515(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_522(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_529(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_537(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_543(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_551(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_557(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_564(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[105] = {(funcp)execute_452, (funcp)execute_453, (funcp)execute_454, (funcp)execute_34, (funcp)execute_37, (funcp)execute_40, (funcp)execute_43, (funcp)execute_48, (funcp)execute_50, (funcp)execute_51, (funcp)execute_52, (funcp)execute_83, (funcp)execute_86, (funcp)execute_89, (funcp)execute_95, (funcp)execute_98, (funcp)execute_101, (funcp)execute_103, (funcp)execute_104, (funcp)execute_105, (funcp)execute_107, (funcp)execute_108, (funcp)execute_109, (funcp)execute_127, (funcp)execute_129, (funcp)execute_130, (funcp)execute_160, (funcp)execute_163, (funcp)execute_166, (funcp)execute_169, (funcp)execute_172, (funcp)execute_174, (funcp)execute_175, (funcp)execute_351, (funcp)execute_409, (funcp)execute_411, (funcp)execute_413, (funcp)execute_414, (funcp)execute_415, (funcp)execute_421, (funcp)execute_423, (funcp)execute_425, (funcp)execute_441, (funcp)execute_443, (funcp)transaction_4, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_55, (funcp)transaction_165, (funcp)transaction_172, (funcp)transaction_179, (funcp)transaction_186, (funcp)transaction_193, (funcp)transaction_200, (funcp)transaction_207, (funcp)transaction_214, (funcp)transaction_221, (funcp)transaction_228, (funcp)transaction_235, (funcp)transaction_242, (funcp)transaction_249, (funcp)transaction_256, (funcp)transaction_263, (funcp)transaction_270, (funcp)transaction_277, (funcp)transaction_284, (funcp)transaction_291, (funcp)transaction_298, (funcp)transaction_305, (funcp)transaction_312, (funcp)transaction_319, (funcp)transaction_326, (funcp)transaction_333, (funcp)transaction_340, (funcp)transaction_347, (funcp)transaction_354, (funcp)transaction_361, (funcp)transaction_368, (funcp)transaction_375, (funcp)transaction_382, (funcp)transaction_389, (funcp)transaction_396, (funcp)transaction_403, (funcp)transaction_410, (funcp)transaction_417, (funcp)transaction_424, (funcp)transaction_431, (funcp)transaction_438, (funcp)transaction_445, (funcp)transaction_452, (funcp)transaction_459, (funcp)transaction_466, (funcp)transaction_473, (funcp)transaction_480, (funcp)transaction_487, (funcp)transaction_494, (funcp)transaction_501, (funcp)transaction_508, (funcp)transaction_515, (funcp)transaction_522, (funcp)transaction_529, (funcp)transaction_537, (funcp)transaction_543, (funcp)transaction_551, (funcp)transaction_557, (funcp)transaction_564};
const int NumRelocateId= 105;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/project_tb_func_synth/xsim.reloc",  (void **)funcTab, 105);
	iki_vhdl_file_variable_register(dp + 2216288);
	iki_vhdl_file_variable_register(dp + 2216344);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/project_tb_func_synth/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/project_tb_func_synth/xsim.reloc");

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstantiate();

extern void implicit_HDL_SCcleanup();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/project_tb_func_synth/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/project_tb_func_synth/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/project_tb_func_synth/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
