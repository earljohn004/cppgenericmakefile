#ifndef _INC_COMMON_DEBUG_H_
#define _INC_COMMON_DEBUG_H_

#include <iostream>

#define GEN_DEBUG(var)\
	std::cout << #var << "[" << var << "]" << std::endl;

#endif //_INC_COMMON_DEBUG_H_
