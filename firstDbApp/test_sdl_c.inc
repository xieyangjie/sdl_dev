#ifndef __SDL_C_TEST_SDL_C_INC_H__
#define __SDL_C_TEST_SDL_C_INC_H__

#if defined(SDL_USE_TEST_SDL_C_ALL)
#ifndef SDL_USE_MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD
#define SDL_USE_MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD
#endif

#ifndef SDL_USE_MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA
#define SDL_USE_MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA
#endif

#ifndef SDL_USE_MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA
#define SDL_USE_MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA
#endif

#endif // defined(SDL_USE_TEST_SDL_C_ALL)

#ifdef SDL_USE_MTESTDEF_SCYCLERUNINFOLIST
	#ifndef SDL_USE_MTESTDEF_SCYCLERUNINFO
	#define SDL_USE_MTESTDEF_SCYCLERUNINFO
	#endif
#endif

#ifdef SDL_USE_MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA
	#ifndef SDL_USE_MTESTDEF_SCYCLERUNINFO
	#define SDL_USE_MTESTDEF_SCYCLERUNINFO
	#endif
#endif

#endif // define __SDL_C_TEST_SDL_C_INC_H__