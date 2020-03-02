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
extern void execute_1870(char*, char *);
extern void execute_1871(char*, char *);
extern void execute_1872(char*, char *);
extern void execute_34(char*, char *);
extern void execute_38(char*, char *);
extern void execute_42(char*, char *);
extern void execute_45(char*, char *);
extern void execute_47(char*, char *);
extern void execute_48(char*, char *);
extern void execute_49(char*, char *);
extern void execute_51(char*, char *);
extern void execute_52(char*, char *);
extern void execute_53(char*, char *);
extern void execute_111(char*, char *);
extern void execute_113(char*, char *);
extern void execute_114(char*, char *);
extern void execute_149(char*, char *);
extern void execute_158(char*, char *);
extern void execute_167(char*, char *);
extern void execute_168(char*, char *);
extern void execute_215(char*, char *);
extern void execute_216(char*, char *);
extern void execute_217(char*, char *);
extern void execute_233(char*, char *);
extern void execute_237(char*, char *);
extern void execute_241(char*, char *);
extern void execute_243(char*, char *);
extern void execute_247(char*, char *);
extern void execute_252(char*, char *);
extern void execute_256(char*, char *);
extern void execute_260(char*, char *);
extern void execute_262(char*, char *);
extern void execute_266(char*, char *);
extern void execute_270(char*, char *);
extern void execute_273(char*, char *);
extern void execute_276(char*, char *);
extern void execute_279(char*, char *);
extern void execute_283(char*, char *);
extern void execute_286(char*, char *);
extern void execute_289(char*, char *);
extern void execute_296(char*, char *);
extern void execute_311(char*, char *);
extern void execute_314(char*, char *);
extern void execute_319(char*, char *);
extern void execute_323(char*, char *);
extern void execute_327(char*, char *);
extern void execute_331(char*, char *);
extern void execute_335(char*, char *);
extern void execute_341(char*, char *);
extern void execute_353(char*, char *);
extern void execute_358(char*, char *);
extern void execute_379(char*, char *);
extern void execute_394(char*, char *);
extern void execute_398(char*, char *);
extern void execute_401(char*, char *);
extern void execute_405(char*, char *);
extern void execute_410(char*, char *);
extern void execute_418(char*, char *);
extern void execute_422(char*, char *);
extern void execute_427(char*, char *);
extern void execute_435(char*, char *);
extern void execute_440(char*, char *);
extern void execute_444(char*, char *);
extern void execute_448(char*, char *);
extern void execute_451(char*, char *);
extern void execute_459(char*, char *);
extern void execute_467(char*, char *);
extern void execute_471(char*, char *);
extern void execute_478(char*, char *);
extern void execute_482(char*, char *);
extern void execute_490(char*, char *);
extern void execute_493(char*, char *);
extern void execute_496(char*, char *);
extern void execute_502(char*, char *);
extern void execute_513(char*, char *);
extern void execute_520(char*, char *);
extern void execute_524(char*, char *);
extern void execute_528(char*, char *);
extern void execute_542(char*, char *);
extern void execute_552(char*, char *);
extern void execute_555(char*, char *);
extern void execute_560(char*, char *);
extern void execute_565(char*, char *);
extern void execute_569(char*, char *);
extern void execute_577(char*, char *);
extern void execute_582(char*, char *);
extern void execute_586(char*, char *);
extern void execute_598(char*, char *);
extern void execute_602(char*, char *);
extern void execute_624(char*, char *);
extern void execute_629(char*, char *);
extern void execute_652(char*, char *);
extern void execute_656(char*, char *);
extern void execute_660(char*, char *);
extern void execute_662(char*, char *);
extern void execute_665(char*, char *);
extern void execute_669(char*, char *);
extern void execute_677(char*, char *);
extern void execute_681(char*, char *);
extern void execute_731(char*, char *);
extern void execute_754(char*, char *);
extern void execute_778(char*, char *);
extern void execute_791(char*, char *);
extern void execute_819(char*, char *);
extern void execute_841(char*, char *);
extern void execute_865(char*, char *);
extern void execute_882(char*, char *);
extern void execute_910(char*, char *);
extern void execute_939(char*, char *);
extern void execute_948(char*, char *);
extern void execute_1013(char*, char *);
extern void execute_1096(char*, char *);
extern void execute_1105(char*, char *);
extern void execute_1227(char*, char *);
extern void execute_1231(char*, char *);
extern void execute_1263(char*, char *);
extern void execute_1267(char*, char *);
extern void execute_1309(char*, char *);
extern void execute_1352(char*, char *);
extern void execute_1504(char*, char *);
extern void execute_1566(char*, char *);
extern void execute_1569(char*, char *);
extern void execute_1582(char*, char *);
extern void execute_1593(char*, char *);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_51(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_514(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_522(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_529(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_536(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_543(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_550(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_557(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_564(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_571(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_578(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_585(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_592(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_599(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_606(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_613(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_620(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_626(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_633(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_640(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_647(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_654(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_661(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_668(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_675(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_682(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_689(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_696(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_703(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_711(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_718(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_724(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_731(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_738(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_745(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_752(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_759(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_766(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_773(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_780(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_787(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_794(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_801(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_808(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_815(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_822(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_829(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_836(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_843(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_850(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_857(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_864(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_871(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_878(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_885(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_892(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_899(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_906(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_913(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_920(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_927(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_934(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_941(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_948(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_955(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_962(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_969(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_976(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_983(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_990(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_997(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1004(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1011(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1018(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1025(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1032(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1039(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1046(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1053(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1060(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1067(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1074(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1081(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1088(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1095(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1102(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1109(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1116(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1123(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1130(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1137(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1144(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1151(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1158(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1165(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1172(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[222] = {(funcp)execute_1870, (funcp)execute_1871, (funcp)execute_1872, (funcp)execute_34, (funcp)execute_38, (funcp)execute_42, (funcp)execute_45, (funcp)execute_47, (funcp)execute_48, (funcp)execute_49, (funcp)execute_51, (funcp)execute_52, (funcp)execute_53, (funcp)execute_111, (funcp)execute_113, (funcp)execute_114, (funcp)execute_149, (funcp)execute_158, (funcp)execute_167, (funcp)execute_168, (funcp)execute_215, (funcp)execute_216, (funcp)execute_217, (funcp)execute_233, (funcp)execute_237, (funcp)execute_241, (funcp)execute_243, (funcp)execute_247, (funcp)execute_252, (funcp)execute_256, (funcp)execute_260, (funcp)execute_262, (funcp)execute_266, (funcp)execute_270, (funcp)execute_273, (funcp)execute_276, (funcp)execute_279, (funcp)execute_283, (funcp)execute_286, (funcp)execute_289, (funcp)execute_296, (funcp)execute_311, (funcp)execute_314, (funcp)execute_319, (funcp)execute_323, (funcp)execute_327, (funcp)execute_331, (funcp)execute_335, (funcp)execute_341, (funcp)execute_353, (funcp)execute_358, (funcp)execute_379, (funcp)execute_394, (funcp)execute_398, (funcp)execute_401, (funcp)execute_405, (funcp)execute_410, (funcp)execute_418, (funcp)execute_422, (funcp)execute_427, (funcp)execute_435, (funcp)execute_440, (funcp)execute_444, (funcp)execute_448, (funcp)execute_451, (funcp)execute_459, (funcp)execute_467, (funcp)execute_471, (funcp)execute_478, (funcp)execute_482, (funcp)execute_490, (funcp)execute_493, (funcp)execute_496, (funcp)execute_502, (funcp)execute_513, (funcp)execute_520, (funcp)execute_524, (funcp)execute_528, (funcp)execute_542, (funcp)execute_552, (funcp)execute_555, (funcp)execute_560, (funcp)execute_565, (funcp)execute_569, (funcp)execute_577, (funcp)execute_582, (funcp)execute_586, (funcp)execute_598, (funcp)execute_602, (funcp)execute_624, (funcp)execute_629, (funcp)execute_652, (funcp)execute_656, (funcp)execute_660, (funcp)execute_662, (funcp)execute_665, (funcp)execute_669, (funcp)execute_677, (funcp)execute_681, (funcp)execute_731, (funcp)execute_754, (funcp)execute_778, (funcp)execute_791, (funcp)execute_819, (funcp)execute_841, (funcp)execute_865, (funcp)execute_882, (funcp)execute_910, (funcp)execute_939, (funcp)execute_948, (funcp)execute_1013, (funcp)execute_1096, (funcp)execute_1105, (funcp)execute_1227, (funcp)execute_1231, (funcp)execute_1263, (funcp)execute_1267, (funcp)execute_1309, (funcp)execute_1352, (funcp)execute_1504, (funcp)execute_1566, (funcp)execute_1569, (funcp)execute_1582, (funcp)execute_1593, (funcp)transaction_4, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_51, (funcp)transaction_514, (funcp)transaction_522, (funcp)transaction_529, (funcp)transaction_536, (funcp)transaction_543, (funcp)transaction_550, (funcp)transaction_557, (funcp)transaction_564, (funcp)transaction_571, (funcp)transaction_578, (funcp)transaction_585, (funcp)transaction_592, (funcp)transaction_599, (funcp)transaction_606, (funcp)transaction_613, (funcp)transaction_620, (funcp)transaction_626, (funcp)transaction_633, (funcp)transaction_640, (funcp)transaction_647, (funcp)transaction_654, (funcp)transaction_661, (funcp)transaction_668, (funcp)transaction_675, (funcp)transaction_682, (funcp)transaction_689, (funcp)transaction_696, (funcp)transaction_703, (funcp)transaction_711, (funcp)transaction_718, (funcp)transaction_724, (funcp)transaction_731, (funcp)transaction_738, (funcp)transaction_745, (funcp)transaction_752, (funcp)transaction_759, (funcp)transaction_766, (funcp)transaction_773, (funcp)transaction_780, (funcp)transaction_787, (funcp)transaction_794, (funcp)transaction_801, (funcp)transaction_808, (funcp)transaction_815, (funcp)transaction_822, (funcp)transaction_829, (funcp)transaction_836, (funcp)transaction_843, (funcp)transaction_850, (funcp)transaction_857, (funcp)transaction_864, (funcp)transaction_871, (funcp)transaction_878, (funcp)transaction_885, (funcp)transaction_892, (funcp)transaction_899, (funcp)transaction_906, (funcp)transaction_913, (funcp)transaction_920, (funcp)transaction_927, (funcp)transaction_934, (funcp)transaction_941, (funcp)transaction_948, (funcp)transaction_955, (funcp)transaction_962, (funcp)transaction_969, (funcp)transaction_976, (funcp)transaction_983, (funcp)transaction_990, (funcp)transaction_997, (funcp)transaction_1004, (funcp)transaction_1011, (funcp)transaction_1018, (funcp)transaction_1025, (funcp)transaction_1032, (funcp)transaction_1039, (funcp)transaction_1046, (funcp)transaction_1053, (funcp)transaction_1060, (funcp)transaction_1067, (funcp)transaction_1074, (funcp)transaction_1081, (funcp)transaction_1088, (funcp)transaction_1095, (funcp)transaction_1102, (funcp)transaction_1109, (funcp)transaction_1116, (funcp)transaction_1123, (funcp)transaction_1130, (funcp)transaction_1137, (funcp)transaction_1144, (funcp)transaction_1151, (funcp)transaction_1158, (funcp)transaction_1165, (funcp)transaction_1172};
const int NumRelocateId= 222;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/project_tb_func_synth/xsim.reloc",  (void **)funcTab, 222);
	iki_vhdl_file_variable_register(dp + 1297480);
	iki_vhdl_file_variable_register(dp + 1297536);


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
