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
extern void execute_1883(char*, char *);
extern void execute_1884(char*, char *);
extern void execute_1885(char*, char *);
extern void execute_35(char*, char *);
extern void execute_38(char*, char *);
extern void execute_42(char*, char *);
extern void execute_45(char*, char *);
extern void execute_48(char*, char *);
extern void execute_50(char*, char *);
extern void execute_51(char*, char *);
extern void execute_52(char*, char *);
extern void execute_54(char*, char *);
extern void execute_55(char*, char *);
extern void execute_56(char*, char *);
extern void execute_118(char*, char *);
extern void execute_120(char*, char *);
extern void execute_121(char*, char *);
extern void execute_156(char*, char *);
extern void execute_165(char*, char *);
extern void execute_167(char*, char *);
extern void execute_174(char*, char *);
extern void execute_175(char*, char *);
extern void execute_222(char*, char *);
extern void execute_223(char*, char *);
extern void execute_224(char*, char *);
extern void execute_240(char*, char *);
extern void execute_244(char*, char *);
extern void execute_248(char*, char *);
extern void execute_250(char*, char *);
extern void execute_254(char*, char *);
extern void execute_259(char*, char *);
extern void execute_263(char*, char *);
extern void execute_267(char*, char *);
extern void execute_269(char*, char *);
extern void execute_273(char*, char *);
extern void execute_277(char*, char *);
extern void execute_280(char*, char *);
extern void execute_283(char*, char *);
extern void execute_286(char*, char *);
extern void execute_290(char*, char *);
extern void execute_293(char*, char *);
extern void execute_296(char*, char *);
extern void execute_303(char*, char *);
extern void execute_318(char*, char *);
extern void execute_321(char*, char *);
extern void execute_326(char*, char *);
extern void execute_330(char*, char *);
extern void execute_334(char*, char *);
extern void execute_338(char*, char *);
extern void execute_342(char*, char *);
extern void execute_348(char*, char *);
extern void execute_360(char*, char *);
extern void execute_365(char*, char *);
extern void execute_386(char*, char *);
extern void execute_401(char*, char *);
extern void execute_405(char*, char *);
extern void execute_408(char*, char *);
extern void execute_412(char*, char *);
extern void execute_417(char*, char *);
extern void execute_425(char*, char *);
extern void execute_429(char*, char *);
extern void execute_434(char*, char *);
extern void execute_442(char*, char *);
extern void execute_447(char*, char *);
extern void execute_451(char*, char *);
extern void execute_455(char*, char *);
extern void execute_458(char*, char *);
extern void execute_466(char*, char *);
extern void execute_474(char*, char *);
extern void execute_478(char*, char *);
extern void execute_485(char*, char *);
extern void execute_489(char*, char *);
extern void execute_497(char*, char *);
extern void execute_500(char*, char *);
extern void execute_503(char*, char *);
extern void execute_509(char*, char *);
extern void execute_520(char*, char *);
extern void execute_527(char*, char *);
extern void execute_531(char*, char *);
extern void execute_535(char*, char *);
extern void execute_549(char*, char *);
extern void execute_559(char*, char *);
extern void execute_562(char*, char *);
extern void execute_567(char*, char *);
extern void execute_572(char*, char *);
extern void execute_576(char*, char *);
extern void execute_584(char*, char *);
extern void execute_589(char*, char *);
extern void execute_593(char*, char *);
extern void execute_605(char*, char *);
extern void execute_609(char*, char *);
extern void execute_631(char*, char *);
extern void execute_636(char*, char *);
extern void execute_659(char*, char *);
extern void execute_663(char*, char *);
extern void execute_667(char*, char *);
extern void execute_669(char*, char *);
extern void execute_672(char*, char *);
extern void execute_676(char*, char *);
extern void execute_684(char*, char *);
extern void execute_688(char*, char *);
extern void execute_738(char*, char *);
extern void execute_761(char*, char *);
extern void execute_785(char*, char *);
extern void execute_798(char*, char *);
extern void execute_826(char*, char *);
extern void execute_848(char*, char *);
extern void execute_872(char*, char *);
extern void execute_889(char*, char *);
extern void execute_917(char*, char *);
extern void execute_946(char*, char *);
extern void execute_955(char*, char *);
extern void execute_1020(char*, char *);
extern void execute_1103(char*, char *);
extern void execute_1112(char*, char *);
extern void execute_1234(char*, char *);
extern void execute_1238(char*, char *);
extern void execute_1270(char*, char *);
extern void execute_1274(char*, char *);
extern void execute_1316(char*, char *);
extern void execute_1359(char*, char *);
extern void execute_1511(char*, char *);
extern void execute_1602(char*, char *);
extern void execute_1606(char*, char *);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_54(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_518(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_526(char*, char*, unsigned, unsigned, unsigned);
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
extern void transaction_617(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_624(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_631(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_637(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_644(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_651(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_658(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_665(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_672(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_679(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_686(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_693(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_700(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_707(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_714(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_722(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_729(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_735(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_742(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_749(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_756(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_763(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_770(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_777(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_784(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_791(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_798(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_805(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_812(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_819(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_826(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_833(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_840(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_847(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_854(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_861(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_868(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_875(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_882(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_889(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_896(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_903(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_910(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_917(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_924(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_931(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_938(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_945(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_952(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_959(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_966(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_973(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_980(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_987(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_994(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1001(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1008(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1015(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1022(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1029(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1036(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1043(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1050(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1057(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1064(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1071(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1078(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1085(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1092(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1099(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1106(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1113(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1120(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1127(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1134(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1141(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1148(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1155(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1162(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1169(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1176(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1183(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[223] = {(funcp)execute_1883, (funcp)execute_1884, (funcp)execute_1885, (funcp)execute_35, (funcp)execute_38, (funcp)execute_42, (funcp)execute_45, (funcp)execute_48, (funcp)execute_50, (funcp)execute_51, (funcp)execute_52, (funcp)execute_54, (funcp)execute_55, (funcp)execute_56, (funcp)execute_118, (funcp)execute_120, (funcp)execute_121, (funcp)execute_156, (funcp)execute_165, (funcp)execute_167, (funcp)execute_174, (funcp)execute_175, (funcp)execute_222, (funcp)execute_223, (funcp)execute_224, (funcp)execute_240, (funcp)execute_244, (funcp)execute_248, (funcp)execute_250, (funcp)execute_254, (funcp)execute_259, (funcp)execute_263, (funcp)execute_267, (funcp)execute_269, (funcp)execute_273, (funcp)execute_277, (funcp)execute_280, (funcp)execute_283, (funcp)execute_286, (funcp)execute_290, (funcp)execute_293, (funcp)execute_296, (funcp)execute_303, (funcp)execute_318, (funcp)execute_321, (funcp)execute_326, (funcp)execute_330, (funcp)execute_334, (funcp)execute_338, (funcp)execute_342, (funcp)execute_348, (funcp)execute_360, (funcp)execute_365, (funcp)execute_386, (funcp)execute_401, (funcp)execute_405, (funcp)execute_408, (funcp)execute_412, (funcp)execute_417, (funcp)execute_425, (funcp)execute_429, (funcp)execute_434, (funcp)execute_442, (funcp)execute_447, (funcp)execute_451, (funcp)execute_455, (funcp)execute_458, (funcp)execute_466, (funcp)execute_474, (funcp)execute_478, (funcp)execute_485, (funcp)execute_489, (funcp)execute_497, (funcp)execute_500, (funcp)execute_503, (funcp)execute_509, (funcp)execute_520, (funcp)execute_527, (funcp)execute_531, (funcp)execute_535, (funcp)execute_549, (funcp)execute_559, (funcp)execute_562, (funcp)execute_567, (funcp)execute_572, (funcp)execute_576, (funcp)execute_584, (funcp)execute_589, (funcp)execute_593, (funcp)execute_605, (funcp)execute_609, (funcp)execute_631, (funcp)execute_636, (funcp)execute_659, (funcp)execute_663, (funcp)execute_667, (funcp)execute_669, (funcp)execute_672, (funcp)execute_676, (funcp)execute_684, (funcp)execute_688, (funcp)execute_738, (funcp)execute_761, (funcp)execute_785, (funcp)execute_798, (funcp)execute_826, (funcp)execute_848, (funcp)execute_872, (funcp)execute_889, (funcp)execute_917, (funcp)execute_946, (funcp)execute_955, (funcp)execute_1020, (funcp)execute_1103, (funcp)execute_1112, (funcp)execute_1234, (funcp)execute_1238, (funcp)execute_1270, (funcp)execute_1274, (funcp)execute_1316, (funcp)execute_1359, (funcp)execute_1511, (funcp)execute_1602, (funcp)execute_1606, (funcp)transaction_4, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_54, (funcp)transaction_518, (funcp)transaction_526, (funcp)transaction_533, (funcp)transaction_540, (funcp)transaction_547, (funcp)transaction_554, (funcp)transaction_561, (funcp)transaction_568, (funcp)transaction_575, (funcp)transaction_582, (funcp)transaction_589, (funcp)transaction_596, (funcp)transaction_603, (funcp)transaction_610, (funcp)transaction_617, (funcp)transaction_624, (funcp)transaction_631, (funcp)transaction_637, (funcp)transaction_644, (funcp)transaction_651, (funcp)transaction_658, (funcp)transaction_665, (funcp)transaction_672, (funcp)transaction_679, (funcp)transaction_686, (funcp)transaction_693, (funcp)transaction_700, (funcp)transaction_707, (funcp)transaction_714, (funcp)transaction_722, (funcp)transaction_729, (funcp)transaction_735, (funcp)transaction_742, (funcp)transaction_749, (funcp)transaction_756, (funcp)transaction_763, (funcp)transaction_770, (funcp)transaction_777, (funcp)transaction_784, (funcp)transaction_791, (funcp)transaction_798, (funcp)transaction_805, (funcp)transaction_812, (funcp)transaction_819, (funcp)transaction_826, (funcp)transaction_833, (funcp)transaction_840, (funcp)transaction_847, (funcp)transaction_854, (funcp)transaction_861, (funcp)transaction_868, (funcp)transaction_875, (funcp)transaction_882, (funcp)transaction_889, (funcp)transaction_896, (funcp)transaction_903, (funcp)transaction_910, (funcp)transaction_917, (funcp)transaction_924, (funcp)transaction_931, (funcp)transaction_938, (funcp)transaction_945, (funcp)transaction_952, (funcp)transaction_959, (funcp)transaction_966, (funcp)transaction_973, (funcp)transaction_980, (funcp)transaction_987, (funcp)transaction_994, (funcp)transaction_1001, (funcp)transaction_1008, (funcp)transaction_1015, (funcp)transaction_1022, (funcp)transaction_1029, (funcp)transaction_1036, (funcp)transaction_1043, (funcp)transaction_1050, (funcp)transaction_1057, (funcp)transaction_1064, (funcp)transaction_1071, (funcp)transaction_1078, (funcp)transaction_1085, (funcp)transaction_1092, (funcp)transaction_1099, (funcp)transaction_1106, (funcp)transaction_1113, (funcp)transaction_1120, (funcp)transaction_1127, (funcp)transaction_1134, (funcp)transaction_1141, (funcp)transaction_1148, (funcp)transaction_1155, (funcp)transaction_1162, (funcp)transaction_1169, (funcp)transaction_1176, (funcp)transaction_1183};
const int NumRelocateId= 223;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/project_tb_func_synth/xsim.reloc",  (void **)funcTab, 223);
	iki_vhdl_file_variable_register(dp + 2348360);
	iki_vhdl_file_variable_register(dp + 2348416);


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
