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
extern void execute_1530(char*, char *);
extern void execute_1531(char*, char *);
extern void execute_1532(char*, char *);
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
extern void execute_153(char*, char *);
extern void execute_162(char*, char *);
extern void execute_164(char*, char *);
extern void execute_171(char*, char *);
extern void execute_172(char*, char *);
extern void execute_219(char*, char *);
extern void execute_220(char*, char *);
extern void execute_221(char*, char *);
extern void execute_238(char*, char *);
extern void execute_240(char*, char *);
extern void execute_242(char*, char *);
extern void execute_246(char*, char *);
extern void execute_249(char*, char *);
extern void execute_253(char*, char *);
extern void execute_258(char*, char *);
extern void execute_262(char*, char *);
extern void execute_266(char*, char *);
extern void execute_270(char*, char *);
extern void execute_280(char*, char *);
extern void execute_286(char*, char *);
extern void execute_290(char*, char *);
extern void execute_293(char*, char *);
extern void execute_297(char*, char *);
extern void execute_301(char*, char *);
extern void execute_306(char*, char *);
extern void execute_310(char*, char *);
extern void execute_314(char*, char *);
extern void execute_322(char*, char *);
extern void execute_335(char*, char *);
extern void execute_338(char*, char *);
extern void execute_348(char*, char *);
extern void execute_352(char*, char *);
extern void execute_355(char*, char *);
extern void execute_359(char*, char *);
extern void execute_367(char*, char *);
extern void execute_371(char*, char *);
extern void execute_375(char*, char *);
extern void execute_379(char*, char *);
extern void execute_383(char*, char *);
extern void execute_387(char*, char *);
extern void execute_391(char*, char *);
extern void execute_394(char*, char *);
extern void execute_401(char*, char *);
extern void execute_405(char*, char *);
extern void execute_408(char*, char *);
extern void execute_412(char*, char *);
extern void execute_416(char*, char *);
extern void execute_419(char*, char *);
extern void execute_423(char*, char *);
extern void execute_428(char*, char *);
extern void execute_452(char*, char *);
extern void execute_455(char*, char *);
extern void execute_459(char*, char *);
extern void execute_462(char*, char *);
extern void execute_464(char*, char *);
extern void execute_467(char*, char *);
extern void execute_472(char*, char *);
extern void execute_476(char*, char *);
extern void execute_485(char*, char *);
extern void execute_493(char*, char *);
extern void execute_496(char*, char *);
extern void execute_504(char*, char *);
extern void execute_516(char*, char *);
extern void execute_520(char*, char *);
extern void execute_523(char*, char *);
extern void execute_527(char*, char *);
extern void execute_530(char*, char *);
extern void execute_535(char*, char *);
extern void execute_540(char*, char *);
extern void execute_547(char*, char *);
extern void execute_551(char*, char *);
extern void execute_556(char*, char *);
extern void execute_560(char*, char *);
extern void execute_564(char*, char *);
extern void execute_573(char*, char *);
extern void execute_576(char*, char *);
extern void execute_580(char*, char *);
extern void execute_588(char*, char *);
extern void execute_592(char*, char *);
extern void execute_599(char*, char *);
extern void execute_611(char*, char *);
extern void execute_625(char*, char *);
extern void execute_639(char*, char *);
extern void execute_643(char*, char *);
extern void execute_646(char*, char *);
extern void execute_651(char*, char *);
extern void execute_655(char*, char *);
extern void execute_660(char*, char *);
extern void execute_664(char*, char *);
extern void execute_677(char*, char *);
extern void execute_681(char*, char *);
extern void execute_685(char*, char *);
extern void execute_690(char*, char *);
extern void execute_694(char*, char *);
extern void execute_700(char*, char *);
extern void execute_717(char*, char *);
extern void execute_720(char*, char *);
extern void execute_724(char*, char *);
extern void execute_729(char*, char *);
extern void execute_733(char*, char *);
extern void execute_737(char*, char *);
extern void execute_743(char*, char *);
extern void execute_747(char*, char *);
extern void execute_751(char*, char *);
extern void execute_755(char*, char *);
extern void execute_759(char*, char *);
extern void execute_763(char*, char *);
extern void execute_772(char*, char *);
extern void execute_776(char*, char *);
extern void execute_781(char*, char *);
extern void execute_790(char*, char *);
extern void execute_794(char*, char *);
extern void execute_799(char*, char *);
extern void execute_806(char*, char *);
extern void execute_813(char*, char *);
extern void execute_824(char*, char *);
extern void execute_828(char*, char *);
extern void execute_832(char*, char *);
extern void execute_837(char*, char *);
extern void execute_841(char*, char *);
extern void execute_845(char*, char *);
extern void execute_849(char*, char *);
extern void execute_854(char*, char *);
extern void execute_861(char*, char *);
extern void execute_865(char*, char *);
extern void execute_879(char*, char *);
extern void execute_888(char*, char *);
extern void execute_892(char*, char *);
extern void execute_896(char*, char *);
extern void execute_915(char*, char *);
extern void execute_924(char*, char *);
extern void execute_928(char*, char *);
extern void execute_932(char*, char *);
extern void execute_937(char*, char *);
extern void execute_942(char*, char *);
extern void execute_950(char*, char *);
extern void execute_954(char*, char *);
extern void execute_958(char*, char *);
extern void execute_962(char*, char *);
extern void execute_966(char*, char *);
extern void execute_970(char*, char *);
extern void execute_974(char*, char *);
extern void execute_978(char*, char *);
extern void execute_982(char*, char *);
extern void execute_996(char*, char *);
extern void execute_1004(char*, char *);
extern void execute_1012(char*, char *);
extern void execute_1016(char*, char *);
extern void execute_1022(char*, char *);
extern void execute_1026(char*, char *);
extern void execute_1029(char*, char *);
extern void execute_1033(char*, char *);
extern void execute_1037(char*, char *);
extern void execute_1041(char*, char *);
extern void execute_1045(char*, char *);
extern void execute_1052(char*, char *);
extern void execute_1056(char*, char *);
extern void execute_1060(char*, char *);
extern void execute_1064(char*, char *);
extern void execute_1068(char*, char *);
extern void execute_1079(char*, char *);
extern void execute_1087(char*, char *);
extern void execute_1091(char*, char *);
extern void execute_1096(char*, char *);
extern void execute_1104(char*, char *);
extern void execute_1115(char*, char *);
extern void execute_1127(char*, char *);
extern void execute_1132(char*, char *);
extern void execute_1145(char*, char *);
extern void execute_1157(char*, char *);
extern void execute_1186(char*, char *);
extern void execute_1190(char*, char *);
extern void execute_1281(char*, char *);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_54(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_441(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_449(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_456(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_463(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_470(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_477(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_484(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_491(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_498(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_505(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_512(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_519(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_526(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_533(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_540(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_547(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_554(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_560(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_567(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_574(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_581(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_588(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_595(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_602(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_609(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_616(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_623(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_630(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_637(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_645(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_652(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_658(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_665(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_672(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_679(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_686(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_693(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_700(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_707(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_714(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_721(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_728(char*, char*, unsigned, unsigned, unsigned);
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
funcp funcTab[281] = {(funcp)execute_1530, (funcp)execute_1531, (funcp)execute_1532, (funcp)execute_35, (funcp)execute_38, (funcp)execute_42, (funcp)execute_45, (funcp)execute_48, (funcp)execute_50, (funcp)execute_51, (funcp)execute_52, (funcp)execute_54, (funcp)execute_55, (funcp)execute_56, (funcp)execute_118, (funcp)execute_120, (funcp)execute_121, (funcp)execute_153, (funcp)execute_162, (funcp)execute_164, (funcp)execute_171, (funcp)execute_172, (funcp)execute_219, (funcp)execute_220, (funcp)execute_221, (funcp)execute_238, (funcp)execute_240, (funcp)execute_242, (funcp)execute_246, (funcp)execute_249, (funcp)execute_253, (funcp)execute_258, (funcp)execute_262, (funcp)execute_266, (funcp)execute_270, (funcp)execute_280, (funcp)execute_286, (funcp)execute_290, (funcp)execute_293, (funcp)execute_297, (funcp)execute_301, (funcp)execute_306, (funcp)execute_310, (funcp)execute_314, (funcp)execute_322, (funcp)execute_335, (funcp)execute_338, (funcp)execute_348, (funcp)execute_352, (funcp)execute_355, (funcp)execute_359, (funcp)execute_367, (funcp)execute_371, (funcp)execute_375, (funcp)execute_379, (funcp)execute_383, (funcp)execute_387, (funcp)execute_391, (funcp)execute_394, (funcp)execute_401, (funcp)execute_405, (funcp)execute_408, (funcp)execute_412, (funcp)execute_416, (funcp)execute_419, (funcp)execute_423, (funcp)execute_428, (funcp)execute_452, (funcp)execute_455, (funcp)execute_459, (funcp)execute_462, (funcp)execute_464, (funcp)execute_467, (funcp)execute_472, (funcp)execute_476, (funcp)execute_485, (funcp)execute_493, (funcp)execute_496, (funcp)execute_504, (funcp)execute_516, (funcp)execute_520, (funcp)execute_523, (funcp)execute_527, (funcp)execute_530, (funcp)execute_535, (funcp)execute_540, (funcp)execute_547, (funcp)execute_551, (funcp)execute_556, (funcp)execute_560, (funcp)execute_564, (funcp)execute_573, (funcp)execute_576, (funcp)execute_580, (funcp)execute_588, (funcp)execute_592, (funcp)execute_599, (funcp)execute_611, (funcp)execute_625, (funcp)execute_639, (funcp)execute_643, (funcp)execute_646, (funcp)execute_651, (funcp)execute_655, (funcp)execute_660, (funcp)execute_664, (funcp)execute_677, (funcp)execute_681, (funcp)execute_685, (funcp)execute_690, (funcp)execute_694, (funcp)execute_700, (funcp)execute_717, (funcp)execute_720, (funcp)execute_724, (funcp)execute_729, (funcp)execute_733, (funcp)execute_737, (funcp)execute_743, (funcp)execute_747, (funcp)execute_751, (funcp)execute_755, (funcp)execute_759, (funcp)execute_763, (funcp)execute_772, (funcp)execute_776, (funcp)execute_781, (funcp)execute_790, (funcp)execute_794, (funcp)execute_799, (funcp)execute_806, (funcp)execute_813, (funcp)execute_824, (funcp)execute_828, (funcp)execute_832, (funcp)execute_837, (funcp)execute_841, (funcp)execute_845, (funcp)execute_849, (funcp)execute_854, (funcp)execute_861, (funcp)execute_865, (funcp)execute_879, (funcp)execute_888, (funcp)execute_892, (funcp)execute_896, (funcp)execute_915, (funcp)execute_924, (funcp)execute_928, (funcp)execute_932, (funcp)execute_937, (funcp)execute_942, (funcp)execute_950, (funcp)execute_954, (funcp)execute_958, (funcp)execute_962, (funcp)execute_966, (funcp)execute_970, (funcp)execute_974, (funcp)execute_978, (funcp)execute_982, (funcp)execute_996, (funcp)execute_1004, (funcp)execute_1012, (funcp)execute_1016, (funcp)execute_1022, (funcp)execute_1026, (funcp)execute_1029, (funcp)execute_1033, (funcp)execute_1037, (funcp)execute_1041, (funcp)execute_1045, (funcp)execute_1052, (funcp)execute_1056, (funcp)execute_1060, (funcp)execute_1064, (funcp)execute_1068, (funcp)execute_1079, (funcp)execute_1087, (funcp)execute_1091, (funcp)execute_1096, (funcp)execute_1104, (funcp)execute_1115, (funcp)execute_1127, (funcp)execute_1132, (funcp)execute_1145, (funcp)execute_1157, (funcp)execute_1186, (funcp)execute_1190, (funcp)execute_1281, (funcp)transaction_4, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_54, (funcp)transaction_441, (funcp)transaction_449, (funcp)transaction_456, (funcp)transaction_463, (funcp)transaction_470, (funcp)transaction_477, (funcp)transaction_484, (funcp)transaction_491, (funcp)transaction_498, (funcp)transaction_505, (funcp)transaction_512, (funcp)transaction_519, (funcp)transaction_526, (funcp)transaction_533, (funcp)transaction_540, (funcp)transaction_547, (funcp)transaction_554, (funcp)transaction_560, (funcp)transaction_567, (funcp)transaction_574, (funcp)transaction_581, (funcp)transaction_588, (funcp)transaction_595, (funcp)transaction_602, (funcp)transaction_609, (funcp)transaction_616, (funcp)transaction_623, (funcp)transaction_630, (funcp)transaction_637, (funcp)transaction_645, (funcp)transaction_652, (funcp)transaction_658, (funcp)transaction_665, (funcp)transaction_672, (funcp)transaction_679, (funcp)transaction_686, (funcp)transaction_693, (funcp)transaction_700, (funcp)transaction_707, (funcp)transaction_714, (funcp)transaction_721, (funcp)transaction_728, (funcp)transaction_735, (funcp)transaction_742, (funcp)transaction_749, (funcp)transaction_756, (funcp)transaction_763, (funcp)transaction_770, (funcp)transaction_777, (funcp)transaction_784, (funcp)transaction_791, (funcp)transaction_798, (funcp)transaction_805, (funcp)transaction_812, (funcp)transaction_819, (funcp)transaction_826, (funcp)transaction_833, (funcp)transaction_840, (funcp)transaction_847, (funcp)transaction_854, (funcp)transaction_861, (funcp)transaction_868, (funcp)transaction_875, (funcp)transaction_882, (funcp)transaction_889, (funcp)transaction_896, (funcp)transaction_903, (funcp)transaction_910, (funcp)transaction_917, (funcp)transaction_924, (funcp)transaction_931, (funcp)transaction_938, (funcp)transaction_945, (funcp)transaction_952, (funcp)transaction_959, (funcp)transaction_966, (funcp)transaction_973, (funcp)transaction_980, (funcp)transaction_987, (funcp)transaction_994, (funcp)transaction_1001, (funcp)transaction_1008, (funcp)transaction_1015, (funcp)transaction_1022, (funcp)transaction_1029, (funcp)transaction_1036, (funcp)transaction_1043, (funcp)transaction_1050};
const int NumRelocateId= 281;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/project_tb_func_synth/xsim.reloc",  (void **)funcTab, 281);
	iki_vhdl_file_variable_register(dp + 2319832);
	iki_vhdl_file_variable_register(dp + 2319888);


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
