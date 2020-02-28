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
extern void execute_1878(char*, char *);
extern void execute_1879(char*, char *);
extern void execute_1880(char*, char *);
extern void execute_42(char*, char *);
extern void execute_46(char*, char *);
extern void execute_50(char*, char *);
extern void execute_53(char*, char *);
extern void execute_55(char*, char *);
extern void execute_56(char*, char *);
extern void execute_57(char*, char *);
extern void execute_59(char*, char *);
extern void execute_60(char*, char *);
extern void execute_61(char*, char *);
extern void execute_119(char*, char *);
extern void execute_121(char*, char *);
extern void execute_122(char*, char *);
extern void execute_157(char*, char *);
extern void execute_166(char*, char *);
extern void execute_175(char*, char *);
extern void execute_176(char*, char *);
extern void execute_223(char*, char *);
extern void execute_224(char*, char *);
extern void execute_225(char*, char *);
extern void execute_241(char*, char *);
extern void execute_245(char*, char *);
extern void execute_249(char*, char *);
extern void execute_251(char*, char *);
extern void execute_255(char*, char *);
extern void execute_260(char*, char *);
extern void execute_264(char*, char *);
extern void execute_268(char*, char *);
extern void execute_270(char*, char *);
extern void execute_274(char*, char *);
extern void execute_278(char*, char *);
extern void execute_281(char*, char *);
extern void execute_284(char*, char *);
extern void execute_287(char*, char *);
extern void execute_291(char*, char *);
extern void execute_294(char*, char *);
extern void execute_297(char*, char *);
extern void execute_304(char*, char *);
extern void execute_319(char*, char *);
extern void execute_322(char*, char *);
extern void execute_327(char*, char *);
extern void execute_331(char*, char *);
extern void execute_335(char*, char *);
extern void execute_339(char*, char *);
extern void execute_343(char*, char *);
extern void execute_349(char*, char *);
extern void execute_361(char*, char *);
extern void execute_366(char*, char *);
extern void execute_387(char*, char *);
extern void execute_402(char*, char *);
extern void execute_406(char*, char *);
extern void execute_409(char*, char *);
extern void execute_413(char*, char *);
extern void execute_418(char*, char *);
extern void execute_426(char*, char *);
extern void execute_430(char*, char *);
extern void execute_435(char*, char *);
extern void execute_443(char*, char *);
extern void execute_448(char*, char *);
extern void execute_452(char*, char *);
extern void execute_456(char*, char *);
extern void execute_459(char*, char *);
extern void execute_467(char*, char *);
extern void execute_475(char*, char *);
extern void execute_479(char*, char *);
extern void execute_486(char*, char *);
extern void execute_490(char*, char *);
extern void execute_498(char*, char *);
extern void execute_501(char*, char *);
extern void execute_504(char*, char *);
extern void execute_510(char*, char *);
extern void execute_521(char*, char *);
extern void execute_528(char*, char *);
extern void execute_532(char*, char *);
extern void execute_536(char*, char *);
extern void execute_550(char*, char *);
extern void execute_560(char*, char *);
extern void execute_563(char*, char *);
extern void execute_568(char*, char *);
extern void execute_573(char*, char *);
extern void execute_577(char*, char *);
extern void execute_585(char*, char *);
extern void execute_590(char*, char *);
extern void execute_594(char*, char *);
extern void execute_606(char*, char *);
extern void execute_610(char*, char *);
extern void execute_632(char*, char *);
extern void execute_637(char*, char *);
extern void execute_660(char*, char *);
extern void execute_664(char*, char *);
extern void execute_668(char*, char *);
extern void execute_670(char*, char *);
extern void execute_673(char*, char *);
extern void execute_677(char*, char *);
extern void execute_685(char*, char *);
extern void execute_689(char*, char *);
extern void execute_739(char*, char *);
extern void execute_762(char*, char *);
extern void execute_786(char*, char *);
extern void execute_799(char*, char *);
extern void execute_827(char*, char *);
extern void execute_849(char*, char *);
extern void execute_873(char*, char *);
extern void execute_890(char*, char *);
extern void execute_918(char*, char *);
extern void execute_947(char*, char *);
extern void execute_956(char*, char *);
extern void execute_1021(char*, char *);
extern void execute_1104(char*, char *);
extern void execute_1113(char*, char *);
extern void execute_1235(char*, char *);
extern void execute_1239(char*, char *);
extern void execute_1271(char*, char *);
extern void execute_1275(char*, char *);
extern void execute_1317(char*, char *);
extern void execute_1360(char*, char *);
extern void execute_1512(char*, char *);
extern void execute_1574(char*, char *);
extern void execute_1577(char*, char *);
extern void execute_1590(char*, char *);
extern void execute_1601(char*, char *);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_53(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_516(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_524(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_531(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_538(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_545(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_552(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_559(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_566(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_573(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_580(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_587(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_594(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_601(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_608(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_615(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_622(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_628(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_635(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_642(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_649(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_656(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_663(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_670(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_677(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_684(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_691(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_698(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_705(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_713(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_720(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_726(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_733(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_740(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_747(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_754(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_761(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_768(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_775(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_782(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_789(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_796(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_803(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_810(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_817(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_824(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_831(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_838(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_845(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_852(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_859(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_866(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_873(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_880(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_887(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_894(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_901(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_908(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_915(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_922(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_929(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_936(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_943(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_950(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_957(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_964(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_971(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_978(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_985(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_992(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_999(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1006(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1013(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1020(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1027(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1034(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1041(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1048(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1055(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1062(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1069(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1076(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1083(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1090(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1097(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1104(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1111(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1118(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1125(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1132(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1139(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1146(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1153(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1160(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1167(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1174(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[222] = {(funcp)execute_1878, (funcp)execute_1879, (funcp)execute_1880, (funcp)execute_42, (funcp)execute_46, (funcp)execute_50, (funcp)execute_53, (funcp)execute_55, (funcp)execute_56, (funcp)execute_57, (funcp)execute_59, (funcp)execute_60, (funcp)execute_61, (funcp)execute_119, (funcp)execute_121, (funcp)execute_122, (funcp)execute_157, (funcp)execute_166, (funcp)execute_175, (funcp)execute_176, (funcp)execute_223, (funcp)execute_224, (funcp)execute_225, (funcp)execute_241, (funcp)execute_245, (funcp)execute_249, (funcp)execute_251, (funcp)execute_255, (funcp)execute_260, (funcp)execute_264, (funcp)execute_268, (funcp)execute_270, (funcp)execute_274, (funcp)execute_278, (funcp)execute_281, (funcp)execute_284, (funcp)execute_287, (funcp)execute_291, (funcp)execute_294, (funcp)execute_297, (funcp)execute_304, (funcp)execute_319, (funcp)execute_322, (funcp)execute_327, (funcp)execute_331, (funcp)execute_335, (funcp)execute_339, (funcp)execute_343, (funcp)execute_349, (funcp)execute_361, (funcp)execute_366, (funcp)execute_387, (funcp)execute_402, (funcp)execute_406, (funcp)execute_409, (funcp)execute_413, (funcp)execute_418, (funcp)execute_426, (funcp)execute_430, (funcp)execute_435, (funcp)execute_443, (funcp)execute_448, (funcp)execute_452, (funcp)execute_456, (funcp)execute_459, (funcp)execute_467, (funcp)execute_475, (funcp)execute_479, (funcp)execute_486, (funcp)execute_490, (funcp)execute_498, (funcp)execute_501, (funcp)execute_504, (funcp)execute_510, (funcp)execute_521, (funcp)execute_528, (funcp)execute_532, (funcp)execute_536, (funcp)execute_550, (funcp)execute_560, (funcp)execute_563, (funcp)execute_568, (funcp)execute_573, (funcp)execute_577, (funcp)execute_585, (funcp)execute_590, (funcp)execute_594, (funcp)execute_606, (funcp)execute_610, (funcp)execute_632, (funcp)execute_637, (funcp)execute_660, (funcp)execute_664, (funcp)execute_668, (funcp)execute_670, (funcp)execute_673, (funcp)execute_677, (funcp)execute_685, (funcp)execute_689, (funcp)execute_739, (funcp)execute_762, (funcp)execute_786, (funcp)execute_799, (funcp)execute_827, (funcp)execute_849, (funcp)execute_873, (funcp)execute_890, (funcp)execute_918, (funcp)execute_947, (funcp)execute_956, (funcp)execute_1021, (funcp)execute_1104, (funcp)execute_1113, (funcp)execute_1235, (funcp)execute_1239, (funcp)execute_1271, (funcp)execute_1275, (funcp)execute_1317, (funcp)execute_1360, (funcp)execute_1512, (funcp)execute_1574, (funcp)execute_1577, (funcp)execute_1590, (funcp)execute_1601, (funcp)transaction_4, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_53, (funcp)transaction_516, (funcp)transaction_524, (funcp)transaction_531, (funcp)transaction_538, (funcp)transaction_545, (funcp)transaction_552, (funcp)transaction_559, (funcp)transaction_566, (funcp)transaction_573, (funcp)transaction_580, (funcp)transaction_587, (funcp)transaction_594, (funcp)transaction_601, (funcp)transaction_608, (funcp)transaction_615, (funcp)transaction_622, (funcp)transaction_628, (funcp)transaction_635, (funcp)transaction_642, (funcp)transaction_649, (funcp)transaction_656, (funcp)transaction_663, (funcp)transaction_670, (funcp)transaction_677, (funcp)transaction_684, (funcp)transaction_691, (funcp)transaction_698, (funcp)transaction_705, (funcp)transaction_713, (funcp)transaction_720, (funcp)transaction_726, (funcp)transaction_733, (funcp)transaction_740, (funcp)transaction_747, (funcp)transaction_754, (funcp)transaction_761, (funcp)transaction_768, (funcp)transaction_775, (funcp)transaction_782, (funcp)transaction_789, (funcp)transaction_796, (funcp)transaction_803, (funcp)transaction_810, (funcp)transaction_817, (funcp)transaction_824, (funcp)transaction_831, (funcp)transaction_838, (funcp)transaction_845, (funcp)transaction_852, (funcp)transaction_859, (funcp)transaction_866, (funcp)transaction_873, (funcp)transaction_880, (funcp)transaction_887, (funcp)transaction_894, (funcp)transaction_901, (funcp)transaction_908, (funcp)transaction_915, (funcp)transaction_922, (funcp)transaction_929, (funcp)transaction_936, (funcp)transaction_943, (funcp)transaction_950, (funcp)transaction_957, (funcp)transaction_964, (funcp)transaction_971, (funcp)transaction_978, (funcp)transaction_985, (funcp)transaction_992, (funcp)transaction_999, (funcp)transaction_1006, (funcp)transaction_1013, (funcp)transaction_1020, (funcp)transaction_1027, (funcp)transaction_1034, (funcp)transaction_1041, (funcp)transaction_1048, (funcp)transaction_1055, (funcp)transaction_1062, (funcp)transaction_1069, (funcp)transaction_1076, (funcp)transaction_1083, (funcp)transaction_1090, (funcp)transaction_1097, (funcp)transaction_1104, (funcp)transaction_1111, (funcp)transaction_1118, (funcp)transaction_1125, (funcp)transaction_1132, (funcp)transaction_1139, (funcp)transaction_1146, (funcp)transaction_1153, (funcp)transaction_1160, (funcp)transaction_1167, (funcp)transaction_1174};
const int NumRelocateId= 222;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/project_tb_func_synth/xsim.reloc",  (void **)funcTab, 222);
	iki_vhdl_file_variable_register(dp + 1298000);
	iki_vhdl_file_variable_register(dp + 1298056);
	iki_vhdl_file_variable_register(dp + 1309520);
	iki_vhdl_file_variable_register(dp + 1834024);
	iki_vhdl_file_variable_register(dp + 1834112);


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
