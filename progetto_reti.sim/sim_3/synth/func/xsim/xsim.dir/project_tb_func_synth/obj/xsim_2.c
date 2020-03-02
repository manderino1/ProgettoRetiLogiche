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
extern void execute_1849(char*, char *);
extern void execute_1850(char*, char *);
extern void execute_1851(char*, char *);
extern void execute_34(char*, char *);
extern void execute_39(char*, char *);
extern void execute_42(char*, char *);
extern void execute_47(char*, char *);
extern void execute_51(char*, char *);
extern void execute_56(char*, char *);
extern void execute_58(char*, char *);
extern void execute_59(char*, char *);
extern void execute_60(char*, char *);
extern void execute_78(char*, char *);
extern void execute_80(char*, char *);
extern void execute_81(char*, char *);
extern void execute_113(char*, char *);
extern void execute_115(char*, char *);
extern void execute_121(char*, char *);
extern void execute_123(char*, char *);
extern void execute_124(char*, char *);
extern void execute_171(char*, char *);
extern void execute_172(char*, char *);
extern void execute_173(char*, char *);
extern void execute_189(char*, char *);
extern void execute_193(char*, char *);
extern void execute_197(char*, char *);
extern void execute_203(char*, char *);
extern void execute_208(char*, char *);
extern void execute_212(char*, char *);
extern void execute_216(char*, char *);
extern void execute_222(char*, char *);
extern void execute_226(char*, char *);
extern void execute_229(char*, char *);
extern void execute_232(char*, char *);
extern void execute_235(char*, char *);
extern void execute_239(char*, char *);
extern void execute_242(char*, char *);
extern void execute_245(char*, char *);
extern void execute_250(char*, char *);
extern void execute_252(char*, char *);
extern void execute_267(char*, char *);
extern void execute_270(char*, char *);
extern void execute_275(char*, char *);
extern void execute_279(char*, char *);
extern void execute_283(char*, char *);
extern void execute_287(char*, char *);
extern void execute_291(char*, char *);
extern void execute_297(char*, char *);
extern void execute_309(char*, char *);
extern void execute_314(char*, char *);
extern void execute_335(char*, char *);
extern void execute_350(char*, char *);
extern void execute_354(char*, char *);
extern void execute_357(char*, char *);
extern void execute_361(char*, char *);
extern void execute_366(char*, char *);
extern void execute_374(char*, char *);
extern void execute_378(char*, char *);
extern void execute_383(char*, char *);
extern void execute_391(char*, char *);
extern void execute_396(char*, char *);
extern void execute_400(char*, char *);
extern void execute_404(char*, char *);
extern void execute_407(char*, char *);
extern void execute_415(char*, char *);
extern void execute_423(char*, char *);
extern void execute_427(char*, char *);
extern void execute_434(char*, char *);
extern void execute_438(char*, char *);
extern void execute_446(char*, char *);
extern void execute_449(char*, char *);
extern void execute_452(char*, char *);
extern void execute_458(char*, char *);
extern void execute_469(char*, char *);
extern void execute_476(char*, char *);
extern void execute_480(char*, char *);
extern void execute_484(char*, char *);
extern void execute_498(char*, char *);
extern void execute_508(char*, char *);
extern void execute_511(char*, char *);
extern void execute_516(char*, char *);
extern void execute_521(char*, char *);
extern void execute_525(char*, char *);
extern void execute_533(char*, char *);
extern void execute_538(char*, char *);
extern void execute_542(char*, char *);
extern void execute_554(char*, char *);
extern void execute_558(char*, char *);
extern void execute_580(char*, char *);
extern void execute_585(char*, char *);
extern void execute_608(char*, char *);
extern void execute_612(char*, char *);
extern void execute_616(char*, char *);
extern void execute_621(char*, char *);
extern void execute_625(char*, char *);
extern void execute_633(char*, char *);
extern void execute_637(char*, char *);
extern void execute_687(char*, char *);
extern void execute_710(char*, char *);
extern void execute_734(char*, char *);
extern void execute_747(char*, char *);
extern void execute_775(char*, char *);
extern void execute_797(char*, char *);
extern void execute_821(char*, char *);
extern void execute_838(char*, char *);
extern void execute_866(char*, char *);
extern void execute_895(char*, char *);
extern void execute_904(char*, char *);
extern void execute_969(char*, char *);
extern void execute_999(char*, char *);
extern void execute_1052(char*, char *);
extern void execute_1061(char*, char *);
extern void execute_1178(char*, char *);
extern void execute_1185(char*, char *);
extern void execute_1189(char*, char *);
extern void execute_1221(char*, char *);
extern void execute_1225(char*, char *);
extern void execute_1267(char*, char *);
extern void execute_1310(char*, char *);
extern void execute_1397(char*, char *);
extern void execute_1462(char*, char *);
extern void execute_1525(char*, char *);
extern void execute_1539(char*, char *);
extern void execute_1542(char*, char *);
extern void execute_1553(char*, char *);
extern void execute_1600(char*, char *);
extern void execute_1744(char*, char *);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_45(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_499(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_506(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_513(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_520(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_527(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_533(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_540(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_547(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_554(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_561(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_568(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_575(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_582(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_589(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_596(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_603(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_610(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_618(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_625(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_631(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_638(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_645(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_652(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_659(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_666(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_673(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_680(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_687(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_694(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_701(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_708(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_715(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_722(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_729(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_736(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_743(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_750(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_757(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_764(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_771(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_778(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_785(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_792(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_799(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_806(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_813(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_820(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_827(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_834(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_841(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_848(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_855(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_862(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_869(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_876(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_883(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_890(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_897(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_904(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_911(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_918(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_925(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_932(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_939(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_946(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_953(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_960(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_967(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_974(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_981(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_988(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_995(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1002(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1009(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1016(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1023(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1030(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1037(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1044(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1051(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1058(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1065(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1072(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1079(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[214] = {(funcp)execute_1849, (funcp)execute_1850, (funcp)execute_1851, (funcp)execute_34, (funcp)execute_39, (funcp)execute_42, (funcp)execute_47, (funcp)execute_51, (funcp)execute_56, (funcp)execute_58, (funcp)execute_59, (funcp)execute_60, (funcp)execute_78, (funcp)execute_80, (funcp)execute_81, (funcp)execute_113, (funcp)execute_115, (funcp)execute_121, (funcp)execute_123, (funcp)execute_124, (funcp)execute_171, (funcp)execute_172, (funcp)execute_173, (funcp)execute_189, (funcp)execute_193, (funcp)execute_197, (funcp)execute_203, (funcp)execute_208, (funcp)execute_212, (funcp)execute_216, (funcp)execute_222, (funcp)execute_226, (funcp)execute_229, (funcp)execute_232, (funcp)execute_235, (funcp)execute_239, (funcp)execute_242, (funcp)execute_245, (funcp)execute_250, (funcp)execute_252, (funcp)execute_267, (funcp)execute_270, (funcp)execute_275, (funcp)execute_279, (funcp)execute_283, (funcp)execute_287, (funcp)execute_291, (funcp)execute_297, (funcp)execute_309, (funcp)execute_314, (funcp)execute_335, (funcp)execute_350, (funcp)execute_354, (funcp)execute_357, (funcp)execute_361, (funcp)execute_366, (funcp)execute_374, (funcp)execute_378, (funcp)execute_383, (funcp)execute_391, (funcp)execute_396, (funcp)execute_400, (funcp)execute_404, (funcp)execute_407, (funcp)execute_415, (funcp)execute_423, (funcp)execute_427, (funcp)execute_434, (funcp)execute_438, (funcp)execute_446, (funcp)execute_449, (funcp)execute_452, (funcp)execute_458, (funcp)execute_469, (funcp)execute_476, (funcp)execute_480, (funcp)execute_484, (funcp)execute_498, (funcp)execute_508, (funcp)execute_511, (funcp)execute_516, (funcp)execute_521, (funcp)execute_525, (funcp)execute_533, (funcp)execute_538, (funcp)execute_542, (funcp)execute_554, (funcp)execute_558, (funcp)execute_580, (funcp)execute_585, (funcp)execute_608, (funcp)execute_612, (funcp)execute_616, (funcp)execute_621, (funcp)execute_625, (funcp)execute_633, (funcp)execute_637, (funcp)execute_687, (funcp)execute_710, (funcp)execute_734, (funcp)execute_747, (funcp)execute_775, (funcp)execute_797, (funcp)execute_821, (funcp)execute_838, (funcp)execute_866, (funcp)execute_895, (funcp)execute_904, (funcp)execute_969, (funcp)execute_999, (funcp)execute_1052, (funcp)execute_1061, (funcp)execute_1178, (funcp)execute_1185, (funcp)execute_1189, (funcp)execute_1221, (funcp)execute_1225, (funcp)execute_1267, (funcp)execute_1310, (funcp)execute_1397, (funcp)execute_1462, (funcp)execute_1525, (funcp)execute_1539, (funcp)execute_1542, (funcp)execute_1553, (funcp)execute_1600, (funcp)execute_1744, (funcp)transaction_4, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_45, (funcp)transaction_499, (funcp)transaction_506, (funcp)transaction_513, (funcp)transaction_520, (funcp)transaction_527, (funcp)transaction_533, (funcp)transaction_540, (funcp)transaction_547, (funcp)transaction_554, (funcp)transaction_561, (funcp)transaction_568, (funcp)transaction_575, (funcp)transaction_582, (funcp)transaction_589, (funcp)transaction_596, (funcp)transaction_603, (funcp)transaction_610, (funcp)transaction_618, (funcp)transaction_625, (funcp)transaction_631, (funcp)transaction_638, (funcp)transaction_645, (funcp)transaction_652, (funcp)transaction_659, (funcp)transaction_666, (funcp)transaction_673, (funcp)transaction_680, (funcp)transaction_687, (funcp)transaction_694, (funcp)transaction_701, (funcp)transaction_708, (funcp)transaction_715, (funcp)transaction_722, (funcp)transaction_729, (funcp)transaction_736, (funcp)transaction_743, (funcp)transaction_750, (funcp)transaction_757, (funcp)transaction_764, (funcp)transaction_771, (funcp)transaction_778, (funcp)transaction_785, (funcp)transaction_792, (funcp)transaction_799, (funcp)transaction_806, (funcp)transaction_813, (funcp)transaction_820, (funcp)transaction_827, (funcp)transaction_834, (funcp)transaction_841, (funcp)transaction_848, (funcp)transaction_855, (funcp)transaction_862, (funcp)transaction_869, (funcp)transaction_876, (funcp)transaction_883, (funcp)transaction_890, (funcp)transaction_897, (funcp)transaction_904, (funcp)transaction_911, (funcp)transaction_918, (funcp)transaction_925, (funcp)transaction_932, (funcp)transaction_939, (funcp)transaction_946, (funcp)transaction_953, (funcp)transaction_960, (funcp)transaction_967, (funcp)transaction_974, (funcp)transaction_981, (funcp)transaction_988, (funcp)transaction_995, (funcp)transaction_1002, (funcp)transaction_1009, (funcp)transaction_1016, (funcp)transaction_1023, (funcp)transaction_1030, (funcp)transaction_1037, (funcp)transaction_1044, (funcp)transaction_1051, (funcp)transaction_1058, (funcp)transaction_1065, (funcp)transaction_1072, (funcp)transaction_1079};
const int NumRelocateId= 214;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/project_tb_func_synth/xsim.reloc",  (void **)funcTab, 214);
	iki_vhdl_file_variable_register(dp + 2327416);
	iki_vhdl_file_variable_register(dp + 2327472);


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
