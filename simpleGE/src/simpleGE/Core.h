#pragma once

#ifdef SGE_PLATFORM_WINDOWS
	#ifdef SGE_BUILD_DLL
		#define SGE_API _declspec(dllexport)
	#else	
		#define SGE_API _declspec(dllimport)
	#endif
#else
	#error simpleGE only supports Windows at the Moment.
#endif