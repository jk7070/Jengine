#pragma once

#ifdef JE_PLATFORM_WINDOWS
	#ifdef JE_BUILD_DLL
		#define JENGINE_API __declspec(dllexport)
	#else
		#define JENGINE_API __declspec(dllimport)
	#endif // JE_BUILD_DLL
#else
	#error Jengine only supports Windows!

#endif // JE_PLATFORM_WINDOWS

