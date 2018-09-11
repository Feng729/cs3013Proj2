//Yaofeng Wang -ywang15
//Yihan Lin - ylin7


struct processinfo{
	long state; //current state of the process
	pid_t pid; //process ID of this process
	pid_t parent_pid; //process ID of parent
	pid_t youngest_child; //process ID of youngest child
	pid_t younger_sibling; //process ID of next younger sibling
	pid_t older_sibling; //process ID of next older sibling
	uid_t uid; //user ID of process owner
	long long start_time; //process start time in nanoseconds since boot time
	long long user_time; //CPU time in user mode (microseconds)
	long long sys_time; //CPU time in system mode (microseconds)
	long long cutime; //user time of children (microseconds)
	long long cstime; //system time of children (microsrconds)
}; //struct processinfo


