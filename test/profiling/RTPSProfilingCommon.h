#ifndef _EPROSIMA_FASTRTPS_PROFILING_COMMON_
#define _EPROSIMA_FASTRTPS_PROFILING_COMMON_


#if defined(_WIN32)
#define GET_PID _getpid
#else
#define GET_PID getpid
#endif

#endif //_EPROSIMA_FASTRTPS_PROFILING_COMMON_