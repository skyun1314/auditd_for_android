/* This is a generated file, see Makefile.am for its inputs. */
static const char prctl_opt_strings[] = "PR_CAPBSET_DROP\0PR_CAPBSET_READ\0PR_CAP_AMBIENT\0PR_GET_CHILD_SUBREAPER\0PR_GET_DUMPABLE\0PR_GET_ENDIAN\0PR_GET_FPEMU\0PR_GET_FPEXC\0PR_GET_FP_MODE\0PR_GET_KEEPCAPS\0"
	"PR_GET_NAME\0PR_GET_NO_NEW_PRIVS\0PR_GET_PDEATHSIG\0PR_GET_SECCOMP\0PR_GET_SECUREBITS\0PR_GET_THP_DISABLE\0PR_GET_TID_ADDRESS\0PR_GET_TIMERSLACK\0PR_GET_TIMING\0PR_GET_TSC\0"
	"PR_GET_UNALIGN\0PR_MCE_KILL\0PR_MCE_KILL_GET\0PR_MPX_DISABLE_MANAGEMENT\0PR_MPX_ENABLE_MANAGEMENT\0PR_SET_CHILD_SUBREAPER\0PR_SET_DUMPABLE\0PR_SET_ENDIAN\0PR_SET_FPEMU\0PR_SET_FPEXC\0"
	"PR_SET_FP_MODE\0PR_SET_KEEPCAPS\0PR_SET_MM\0PR_SET_NAME\0PR_SET_NO_NEW_PRIVS\0PR_SET_PDEATHSIG\0PR_SET_SECCOMP\0PR_SET_SECUREBITS\0PR_SET_THP_DISABLE\0PR_SET_TIMERSLACK\0"
	"PR_SET_TIMING\0PR_SET_TSC\0PR_SET_UNALIGN\0PR_TASK_PERF_EVENTS_DISABLE\0PR_TASK_PERF_EVENTS_ENABLE";
static const unsigned prctl_opt_i2s_direct[] = {
	566,189,70,437,320,678,141,508,100,467,
	113,480,295,653,534,157,-1u,-1u,86,453,
	206,583,16,0,309,667,221,598,635,277,
	693,721,335,347,524,414,47,546,169,258,
	616,239,389,363,493,126,32,
};
static const char *prctl_opt_i2s(int v) {
	return i2s_direct__(prctl_opt_strings, prctl_opt_i2s_direct, 1, 47, v);
}
