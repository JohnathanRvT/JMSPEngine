#pragma once

#ifdef JMSP_PLATFORM_WINDOWS
#define WIN32_LEAN_AND_MEAN      // Exclude rarely-used stuff from Windows headers
#include <Windows.h>
#include <Windowsx.h>
#include <wingdi.h>
#endif // JMSP_PLATFORM_WINDOWS

#define JMSP_ENABLE_ASSERTS

#ifdef JMSP_ENABLE_ASSERTS
#define JMSP_ASSERT(type, msg) { if(!(type)) { JMSP_ERROR(msg); __debugbreak(); } }
#else	
#define JMSP_ASSERT(...)
#endif