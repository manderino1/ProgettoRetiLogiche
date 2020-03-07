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
extern void execute_1903(char*, char *);
extern void execute_1904(char*, char *);
extern void execute_1905(char*, char *);
extern void execute_37(char*, char *);
extern void execute_42(char*, char *);
extern void execute_45(char*, char *);
extern void execute_47(char*, char *);
extern void execute_48(char*, char *);
extern void execute_49(char*, char *);
extern void execute_51(char*, char *);
extern void execute_52(char*, char *);
extern void execute_53(char*, char *);
extern void execute_88(char*, char *);
extern void execute_91(char*, char *);
extern void execute_96(char*, char *);
extern void execute_99(char*, char *);
extern void execute_113(char*, char *);
extern void execute_115(char*, char *);
extern void execute_116(char*, char *);
extern void execute_150(char*, char *);
extern void execute_154(char*, char *);
extern void execute_163(char*, char *);
extern void execute_165(char*, char *);
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
extern void execute_294(char*, char *);
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
extern void execute_1221(char*, char *);
extern void execute_1228(char*, char *);
extern void execute_1232(char*, char *);
extern void execute_1264(char*, char *);
extern void execute_1268(char*, char *);
extern void execute_1310(char*, char *);
extern void execute_1353(char*, char *);
extern void execute_1505(char*, char *);
extern void execute_1567(char*, char *);
extern void execute_1569(char*, char *);
extern void execute_1579(char*, char *);
extern void execute_1584(char*, char *);
extern void execute_1588(char*, char *);
extern void execute_1592(char*, char *);
extern void execute_1602(char*, char *);
extern void execute_1611(char*, char *);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_48(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_512(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_520(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_527(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_534(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_541(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_548(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_555(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_562(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_569(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_576(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_583(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_590(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_597(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_603(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_610(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_617(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_624(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_631(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_638(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_645(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_652(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_659(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_666(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_673(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_680(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_688(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_695(char*, char*, unsigned, unsigned, unsigned);
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
extern void transaction_1086(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1093(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1100(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1107(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1114(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1121(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1128(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1135(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1142(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1149(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[230] = {(funcp)execute_1903, (funcp)execute_1904, (funcp)execute_1905, (funcp)execute_37, (funcp)execute_42, (funcp)execute_45, (funcp)execute_47, (funcp)execute_48, (funcp)execute_49, (funcp)execute_51, (funcp)execute_52, (funcp)execute_53, (funcp)execute_88, (funcp)execute_91, (funcp)execute_96, (funcp)execute_99, (funcp)execute_113, (funcp)execute_115, (funcp)execute_116, (funcp)execute_150, (funcp)execute_154, (funcp)execute_163, (funcp)execute_165, (funcp)execute_167, (funcp)execute_168, (funcp)execute_215, (funcp)execute_216, (funcp)execute_217, (funcp)execute_233, (funcp)execute_237, (funcp)execute_241, (funcp)execute_243, (funcp)execute_247, (funcp)execute_252, (funcp)execute_256, (funcp)execute_260, (funcp)execute_262, (funcp)execute_266, (funcp)execute_270, (funcp)execute_273, (funcp)execute_276, (funcp)execute_279, (funcp)execute_283, (funcp)execute_286, (funcp)execute_289, (funcp)execute_294, (funcp)execute_296, (funcp)execute_311, (funcp)execute_314, (funcp)execute_319, (funcp)execute_323, (funcp)execute_327, (funcp)execute_331, (funcp)execute_335, (funcp)execute_341, (funcp)execute_353, (funcp)execute_358, (funcp)execute_379, (funcp)execute_394, (funcp)execute_398, (funcp)execute_401, (funcp)execute_405, (funcp)execute_410, (funcp)execute_418, (funcp)execute_422, (funcp)execute_427, (funcp)execute_435, (funcp)execute_440, (funcp)execute_444, (funcp)execute_448, (funcp)execute_451, (funcp)execute_459, (funcp)execute_467, (funcp)execute_471, (funcp)execute_478, (funcp)execute_482, (funcp)execute_490, (funcp)execute_493, (funcp)execute_496, (funcp)execute_502, (funcp)execute_513, (funcp)execute_520, (funcp)execute_524, (funcp)execute_528, (funcp)execute_542, (funcp)execute_552, (funcp)execute_555, (funcp)execute_560, (funcp)execute_565, (funcp)execute_569, (funcp)execute_577, (funcp)execute_582, (funcp)execute_586, (funcp)execute_598, (funcp)execute_602, (funcp)execute_624, (funcp)execute_629, (funcp)execute_652, (funcp)execute_656, (funcp)execute_660, (funcp)execute_662, (funcp)execute_665, (funcp)execute_669, (funcp)execute_677, (funcp)execute_681, (funcp)execute_731, (funcp)execute_754, (funcp)execute_778, (funcp)execute_791, (funcp)execute_819, (funcp)execute_841, (funcp)execute_865, (funcp)execute_882, (funcp)execute_910, (funcp)execute_939, (funcp)execute_948, (funcp)execute_1013, (funcp)execute_1096, (funcp)execute_1105, (funcp)execute_1221, (funcp)execute_1228, (funcp)execute_1232, (funcp)execute_1264, (funcp)execute_1268, (funcp)execute_1310, (funcp)execute_1353, (funcp)execute_1505, (funcp)execute_1567, (funcp)execute_1569, (funcp)execute_1579, (funcp)execute_1584, (funcp)execute_1588, (funcp)execute_1592, (funcp)execute_1602, (funcp)execute_1611, (funcp)transaction_4, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_48, (funcp)transaction_512, (funcp)transaction_520, (funcp)transaction_527, (funcp)transaction_534, (funcp)transaction_541, (funcp)transaction_548, (funcp)transaction_555, (funcp)transaction_562, (funcp)transaction_569, (funcp)transaction_576, (funcp)transaction_583, (funcp)transaction_590, (funcp)transaction_597, (funcp)transaction_603, (funcp)transaction_610, (funcp)transaction_617, (funcp)transaction_624, (funcp)transaction_631, (funcp)transaction_638, (funcp)transaction_645, (funcp)transaction_652, (funcp)transaction_659, (funcp)transaction_666, (funcp)transaction_673, (funcp)transaction_680, (funcp)transaction_688, (funcp)transaction_695, (funcp)transaction_701, (funcp)transaction_708, (funcp)transaction_715, (funcp)transaction_722, (funcp)transaction_729, (funcp)transaction_736, (funcp)transaction_743, (funcp)transaction_750, (funcp)transaction_757, (funcp)transaction_764, (funcp)transaction_771, (funcp)transaction_778, (funcp)transaction_785, (funcp)transaction_792, (funcp)transaction_799, (funcp)transaction_806, (funcp)transaction_813, (funcp)transaction_820, (funcp)transaction_827, (funcp)transaction_834, (funcp)transaction_841, (funcp)transaction_848, (funcp)transaction_855, (funcp)transaction_862, (funcp)transaction_869, (funcp)transaction_876, (funcp)transaction_883, (funcp)transaction_890, (funcp)transaction_897, (funcp)transaction_904, (funcp)transaction_911, (funcp)transaction_918, (funcp)transaction_925, (funcp)transaction_932, (funcp)transaction_939, (funcp)transaction_946, (funcp)transaction_953, (funcp)transaction_960, (funcp)transaction_967, (funcp)transaction_974, (funcp)transaction_981, (funcp)transaction_988, (funcp)transaction_995, (funcp)transaction_1002, (funcp)transaction_1009, (funcp)transaction_1016, (funcp)transaction_1023, (funcp)transaction_1030, (funcp)transaction_1037, (funcp)transaction_1044, (funcp)transaction_1051, (funcp)transaction_1058, (funcp)transaction_1065, (funcp)transaction_1072, (funcp)transaction_1079, (funcp)transaction_1086, (funcp)transaction_1093, (funcp)transaction_1100, (funcp)transaction_1107, (funcp)transaction_1114, (funcp)transaction_1121, (funcp)transaction_1128, (funcp)transaction_1135, (funcp)transaction_1142, (funcp)transaction_1149};
const int NumRelocateId= 230;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/project_tb_func_synth/xsim.reloc",  (void **)funcTab, 230);
	iki_vhdl_file_variable_register(dp + 1292976);
	iki_vhdl_file_variable_register(dp + 1293032);


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
