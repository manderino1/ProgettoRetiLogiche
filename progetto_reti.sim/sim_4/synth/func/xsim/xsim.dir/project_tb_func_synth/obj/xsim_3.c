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
extern void execute_1558(char*, char *);
extern void execute_1559(char*, char *);
extern void execute_1560(char*, char *);
extern void execute_45(char*, char *);
extern void execute_50(char*, char *);
extern void execute_53(char*, char *);
extern void execute_55(char*, char *);
extern void execute_56(char*, char *);
extern void execute_57(char*, char *);
extern void execute_59(char*, char *);
extern void execute_60(char*, char *);
extern void execute_61(char*, char *);
extern void execute_96(char*, char *);
extern void execute_99(char*, char *);
extern void execute_104(char*, char *);
extern void execute_107(char*, char *);
extern void execute_121(char*, char *);
extern void execute_123(char*, char *);
extern void execute_124(char*, char *);
extern void execute_155(char*, char *);
extern void execute_159(char*, char *);
extern void execute_168(char*, char *);
extern void execute_170(char*, char *);
extern void execute_172(char*, char *);
extern void execute_173(char*, char *);
extern void execute_220(char*, char *);
extern void execute_221(char*, char *);
extern void execute_222(char*, char *);
extern void execute_239(char*, char *);
extern void execute_241(char*, char *);
extern void execute_243(char*, char *);
extern void execute_247(char*, char *);
extern void execute_250(char*, char *);
extern void execute_254(char*, char *);
extern void execute_259(char*, char *);
extern void execute_263(char*, char *);
extern void execute_267(char*, char *);
extern void execute_271(char*, char *);
extern void execute_281(char*, char *);
extern void execute_287(char*, char *);
extern void execute_291(char*, char *);
extern void execute_294(char*, char *);
extern void execute_298(char*, char *);
extern void execute_302(char*, char *);
extern void execute_307(char*, char *);
extern void execute_311(char*, char *);
extern void execute_315(char*, char *);
extern void execute_323(char*, char *);
extern void execute_336(char*, char *);
extern void execute_339(char*, char *);
extern void execute_349(char*, char *);
extern void execute_353(char*, char *);
extern void execute_356(char*, char *);
extern void execute_360(char*, char *);
extern void execute_368(char*, char *);
extern void execute_372(char*, char *);
extern void execute_376(char*, char *);
extern void execute_380(char*, char *);
extern void execute_384(char*, char *);
extern void execute_388(char*, char *);
extern void execute_392(char*, char *);
extern void execute_395(char*, char *);
extern void execute_398(char*, char *);
extern void execute_402(char*, char *);
extern void execute_406(char*, char *);
extern void execute_409(char*, char *);
extern void execute_413(char*, char *);
extern void execute_417(char*, char *);
extern void execute_420(char*, char *);
extern void execute_424(char*, char *);
extern void execute_429(char*, char *);
extern void execute_453(char*, char *);
extern void execute_456(char*, char *);
extern void execute_460(char*, char *);
extern void execute_463(char*, char *);
extern void execute_465(char*, char *);
extern void execute_468(char*, char *);
extern void execute_473(char*, char *);
extern void execute_477(char*, char *);
extern void execute_486(char*, char *);
extern void execute_494(char*, char *);
extern void execute_497(char*, char *);
extern void execute_505(char*, char *);
extern void execute_517(char*, char *);
extern void execute_521(char*, char *);
extern void execute_524(char*, char *);
extern void execute_528(char*, char *);
extern void execute_531(char*, char *);
extern void execute_536(char*, char *);
extern void execute_541(char*, char *);
extern void execute_548(char*, char *);
extern void execute_552(char*, char *);
extern void execute_557(char*, char *);
extern void execute_561(char*, char *);
extern void execute_565(char*, char *);
extern void execute_574(char*, char *);
extern void execute_577(char*, char *);
extern void execute_581(char*, char *);
extern void execute_589(char*, char *);
extern void execute_593(char*, char *);
extern void execute_600(char*, char *);
extern void execute_612(char*, char *);
extern void execute_626(char*, char *);
extern void execute_640(char*, char *);
extern void execute_644(char*, char *);
extern void execute_647(char*, char *);
extern void execute_652(char*, char *);
extern void execute_656(char*, char *);
extern void execute_661(char*, char *);
extern void execute_665(char*, char *);
extern void execute_678(char*, char *);
extern void execute_682(char*, char *);
extern void execute_686(char*, char *);
extern void execute_691(char*, char *);
extern void execute_695(char*, char *);
extern void execute_701(char*, char *);
extern void execute_718(char*, char *);
extern void execute_721(char*, char *);
extern void execute_725(char*, char *);
extern void execute_730(char*, char *);
extern void execute_734(char*, char *);
extern void execute_738(char*, char *);
extern void execute_744(char*, char *);
extern void execute_748(char*, char *);
extern void execute_752(char*, char *);
extern void execute_756(char*, char *);
extern void execute_760(char*, char *);
extern void execute_764(char*, char *);
extern void execute_773(char*, char *);
extern void execute_777(char*, char *);
extern void execute_782(char*, char *);
extern void execute_788(char*, char *);
extern void execute_792(char*, char *);
extern void execute_796(char*, char *);
extern void execute_801(char*, char *);
extern void execute_808(char*, char *);
extern void execute_815(char*, char *);
extern void execute_826(char*, char *);
extern void execute_830(char*, char *);
extern void execute_834(char*, char *);
extern void execute_839(char*, char *);
extern void execute_843(char*, char *);
extern void execute_847(char*, char *);
extern void execute_851(char*, char *);
extern void execute_856(char*, char *);
extern void execute_863(char*, char *);
extern void execute_867(char*, char *);
extern void execute_881(char*, char *);
extern void execute_890(char*, char *);
extern void execute_894(char*, char *);
extern void execute_898(char*, char *);
extern void execute_917(char*, char *);
extern void execute_926(char*, char *);
extern void execute_930(char*, char *);
extern void execute_934(char*, char *);
extern void execute_939(char*, char *);
extern void execute_944(char*, char *);
extern void execute_952(char*, char *);
extern void execute_956(char*, char *);
extern void execute_960(char*, char *);
extern void execute_964(char*, char *);
extern void execute_968(char*, char *);
extern void execute_972(char*, char *);
extern void execute_976(char*, char *);
extern void execute_980(char*, char *);
extern void execute_984(char*, char *);
extern void execute_998(char*, char *);
extern void execute_1006(char*, char *);
extern void execute_1014(char*, char *);
extern void execute_1018(char*, char *);
extern void execute_1024(char*, char *);
extern void execute_1028(char*, char *);
extern void execute_1031(char*, char *);
extern void execute_1035(char*, char *);
extern void execute_1039(char*, char *);
extern void execute_1043(char*, char *);
extern void execute_1047(char*, char *);
extern void execute_1054(char*, char *);
extern void execute_1058(char*, char *);
extern void execute_1062(char*, char *);
extern void execute_1066(char*, char *);
extern void execute_1070(char*, char *);
extern void execute_1081(char*, char *);
extern void execute_1089(char*, char *);
extern void execute_1093(char*, char *);
extern void execute_1098(char*, char *);
extern void execute_1106(char*, char *);
extern void execute_1117(char*, char *);
extern void execute_1129(char*, char *);
extern void execute_1134(char*, char *);
extern void execute_1147(char*, char *);
extern void execute_1159(char*, char *);
extern void execute_1188(char*, char *);
extern void execute_1192(char*, char *);
extern void execute_1254(char*, char *);
extern void execute_1256(char*, char *);
extern void execute_1271(char*, char *);
extern void execute_1275(char*, char *);
extern void execute_1279(char*, char *);
extern void execute_1289(char*, char *);
extern void execute_1298(char*, char *);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_50(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_437(char*, char*, unsigned, unsigned, unsigned);
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
extern void transaction_528(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_535(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_542(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_549(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_556(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_563(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_570(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_577(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_584(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_591(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_598(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_605(char*, char*, unsigned, unsigned, unsigned);
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
extern void transaction_710(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_717(char*, char*, unsigned, unsigned, unsigned);
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
funcp funcTab[288] = {(funcp)execute_1558, (funcp)execute_1559, (funcp)execute_1560, (funcp)execute_45, (funcp)execute_50, (funcp)execute_53, (funcp)execute_55, (funcp)execute_56, (funcp)execute_57, (funcp)execute_59, (funcp)execute_60, (funcp)execute_61, (funcp)execute_96, (funcp)execute_99, (funcp)execute_104, (funcp)execute_107, (funcp)execute_121, (funcp)execute_123, (funcp)execute_124, (funcp)execute_155, (funcp)execute_159, (funcp)execute_168, (funcp)execute_170, (funcp)execute_172, (funcp)execute_173, (funcp)execute_220, (funcp)execute_221, (funcp)execute_222, (funcp)execute_239, (funcp)execute_241, (funcp)execute_243, (funcp)execute_247, (funcp)execute_250, (funcp)execute_254, (funcp)execute_259, (funcp)execute_263, (funcp)execute_267, (funcp)execute_271, (funcp)execute_281, (funcp)execute_287, (funcp)execute_291, (funcp)execute_294, (funcp)execute_298, (funcp)execute_302, (funcp)execute_307, (funcp)execute_311, (funcp)execute_315, (funcp)execute_323, (funcp)execute_336, (funcp)execute_339, (funcp)execute_349, (funcp)execute_353, (funcp)execute_356, (funcp)execute_360, (funcp)execute_368, (funcp)execute_372, (funcp)execute_376, (funcp)execute_380, (funcp)execute_384, (funcp)execute_388, (funcp)execute_392, (funcp)execute_395, (funcp)execute_398, (funcp)execute_402, (funcp)execute_406, (funcp)execute_409, (funcp)execute_413, (funcp)execute_417, (funcp)execute_420, (funcp)execute_424, (funcp)execute_429, (funcp)execute_453, (funcp)execute_456, (funcp)execute_460, (funcp)execute_463, (funcp)execute_465, (funcp)execute_468, (funcp)execute_473, (funcp)execute_477, (funcp)execute_486, (funcp)execute_494, (funcp)execute_497, (funcp)execute_505, (funcp)execute_517, (funcp)execute_521, (funcp)execute_524, (funcp)execute_528, (funcp)execute_531, (funcp)execute_536, (funcp)execute_541, (funcp)execute_548, (funcp)execute_552, (funcp)execute_557, (funcp)execute_561, (funcp)execute_565, (funcp)execute_574, (funcp)execute_577, (funcp)execute_581, (funcp)execute_589, (funcp)execute_593, (funcp)execute_600, (funcp)execute_612, (funcp)execute_626, (funcp)execute_640, (funcp)execute_644, (funcp)execute_647, (funcp)execute_652, (funcp)execute_656, (funcp)execute_661, (funcp)execute_665, (funcp)execute_678, (funcp)execute_682, (funcp)execute_686, (funcp)execute_691, (funcp)execute_695, (funcp)execute_701, (funcp)execute_718, (funcp)execute_721, (funcp)execute_725, (funcp)execute_730, (funcp)execute_734, (funcp)execute_738, (funcp)execute_744, (funcp)execute_748, (funcp)execute_752, (funcp)execute_756, (funcp)execute_760, (funcp)execute_764, (funcp)execute_773, (funcp)execute_777, (funcp)execute_782, (funcp)execute_788, (funcp)execute_792, (funcp)execute_796, (funcp)execute_801, (funcp)execute_808, (funcp)execute_815, (funcp)execute_826, (funcp)execute_830, (funcp)execute_834, (funcp)execute_839, (funcp)execute_843, (funcp)execute_847, (funcp)execute_851, (funcp)execute_856, (funcp)execute_863, (funcp)execute_867, (funcp)execute_881, (funcp)execute_890, (funcp)execute_894, (funcp)execute_898, (funcp)execute_917, (funcp)execute_926, (funcp)execute_930, (funcp)execute_934, (funcp)execute_939, (funcp)execute_944, (funcp)execute_952, (funcp)execute_956, (funcp)execute_960, (funcp)execute_964, (funcp)execute_968, (funcp)execute_972, (funcp)execute_976, (funcp)execute_980, (funcp)execute_984, (funcp)execute_998, (funcp)execute_1006, (funcp)execute_1014, (funcp)execute_1018, (funcp)execute_1024, (funcp)execute_1028, (funcp)execute_1031, (funcp)execute_1035, (funcp)execute_1039, (funcp)execute_1043, (funcp)execute_1047, (funcp)execute_1054, (funcp)execute_1058, (funcp)execute_1062, (funcp)execute_1066, (funcp)execute_1070, (funcp)execute_1081, (funcp)execute_1089, (funcp)execute_1093, (funcp)execute_1098, (funcp)execute_1106, (funcp)execute_1117, (funcp)execute_1129, (funcp)execute_1134, (funcp)execute_1147, (funcp)execute_1159, (funcp)execute_1188, (funcp)execute_1192, (funcp)execute_1254, (funcp)execute_1256, (funcp)execute_1271, (funcp)execute_1275, (funcp)execute_1279, (funcp)execute_1289, (funcp)execute_1298, (funcp)transaction_4, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_50, (funcp)transaction_437, (funcp)transaction_445, (funcp)transaction_452, (funcp)transaction_459, (funcp)transaction_466, (funcp)transaction_473, (funcp)transaction_480, (funcp)transaction_487, (funcp)transaction_494, (funcp)transaction_501, (funcp)transaction_508, (funcp)transaction_515, (funcp)transaction_522, (funcp)transaction_528, (funcp)transaction_535, (funcp)transaction_542, (funcp)transaction_549, (funcp)transaction_556, (funcp)transaction_563, (funcp)transaction_570, (funcp)transaction_577, (funcp)transaction_584, (funcp)transaction_591, (funcp)transaction_598, (funcp)transaction_605, (funcp)transaction_613, (funcp)transaction_620, (funcp)transaction_626, (funcp)transaction_633, (funcp)transaction_640, (funcp)transaction_647, (funcp)transaction_654, (funcp)transaction_661, (funcp)transaction_668, (funcp)transaction_675, (funcp)transaction_682, (funcp)transaction_689, (funcp)transaction_696, (funcp)transaction_703, (funcp)transaction_710, (funcp)transaction_717, (funcp)transaction_724, (funcp)transaction_731, (funcp)transaction_738, (funcp)transaction_745, (funcp)transaction_752, (funcp)transaction_759, (funcp)transaction_766, (funcp)transaction_773, (funcp)transaction_780, (funcp)transaction_787, (funcp)transaction_794, (funcp)transaction_801, (funcp)transaction_808, (funcp)transaction_815, (funcp)transaction_822, (funcp)transaction_829, (funcp)transaction_836, (funcp)transaction_843, (funcp)transaction_850, (funcp)transaction_857, (funcp)transaction_864, (funcp)transaction_871, (funcp)transaction_878, (funcp)transaction_885, (funcp)transaction_892, (funcp)transaction_899, (funcp)transaction_906, (funcp)transaction_913, (funcp)transaction_920, (funcp)transaction_927, (funcp)transaction_934, (funcp)transaction_941, (funcp)transaction_948, (funcp)transaction_955, (funcp)transaction_962, (funcp)transaction_969, (funcp)transaction_976, (funcp)transaction_983, (funcp)transaction_990, (funcp)transaction_997, (funcp)transaction_1004, (funcp)transaction_1011, (funcp)transaction_1018};
const int NumRelocateId= 288;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/project_tb_func_synth/xsim.reloc",  (void **)funcTab, 288);
	iki_vhdl_file_variable_register(dp + 1264968);
	iki_vhdl_file_variable_register(dp + 1265024);
	iki_vhdl_file_variable_register(dp + 1276488);
	iki_vhdl_file_variable_register(dp + 1800992);
	iki_vhdl_file_variable_register(dp + 1801080);


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
