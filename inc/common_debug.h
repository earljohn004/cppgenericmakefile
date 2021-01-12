#ifndef _INC_COMMON_DEBUG_H_
#define _INC_COMMON_DEBUG_H_

#include <iostream>

#ifdef DEBUG_TOOL
    #define VAR_LOG(x)std::cout<<"func:"<<__func__<<""<<" (L:"<<__LINE__<<")"<<" [LOG_VAR] "<<#x" = "<<x<<std::endl
    #define MESSAGE_LOG(x)std::cout<<"func:"<<__func__<<""<<" (L:"<<__LINE__<<")"<<" [LOG_MES] "<<x<<std::endl
	#define HEX_DUMP(x)std::cout<<"("<<__func__<<")"<<"[HEX_DUMP] "<<#x" = "<<std::hex<<x<<std::dec<<std::endl
#else
	#define VAR_LOG(x)std::cout << "";
	#define MESSAGE_LOG(x)std::cout<<"";
	#define HEX_DUMP(x)std::cout<<"";
#endif

#endif //_INC_COMMON_DEBUG_H_
