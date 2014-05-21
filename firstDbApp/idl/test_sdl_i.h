//******************************************************************
//* Copyright (c) 2003-2009, Asiainfo HangZhou. All rights reserved.
//* SDL generated C++ server skeleton implementation header file.
//* Source filename: test.sdl
//* Generated date:  2014-05-19 10:46:35
//* Note: This is a auto-generated file, DON'T MODIFY IT!
//******************************************************************

#ifndef __SDL_S_TEST_SDL_I__
#define __SDL_S_TEST_SDL_I__

#include "test_sdl_s.h"

namespace MFirstTest
{
    class CITestHelloWorldImp : public ITestHelloWorldImp
    {
    public:
        int32 out_helloWorld(
            SOBSession* pSession,

            CBSErrorMsg& cErrorMsg	/* Error message */
        );
    };

    class CIGetCycleRunDataImp : public IGetCycleRunDataImp
    {
    public:
        int32 query_cycleRunData(
            SOBSession* pSession,
            int32& iListSize,	/* OUT */
            CBSErrorMsg& cErrorMsg	/* Error message */
        );
    };

    class CIInsertCycleRunDataImp : public IInsertCycleRunDataImp
    {
    public:
        int32 insert_cycleRunData(
            SOBSession* pSession,
            const ::MTestDef::SCycleRunInfo& sCycleRunInfo,	/* IN */
            CBSErrorMsg& cErrorMsg	/* Error message */
        );
    };
};

#endif
