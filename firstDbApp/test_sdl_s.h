//******************************************************************
//* Copyright (c) 2003-2009, Asiainfo HangZhou. All rights reserved.
//* SDL generated C++ server skeleton header file.
//* Source filename: ./idl/test.sdl
//* Generated date:  2014-05-21 04:36:18
//* Note: This is a auto-generated file, DON'T MODIFY IT!
//******************************************************************

#ifndef __SDL_S_TEST_SDL_S__
#define __SDL_S_TEST_SDL_S__

#include "base_class.h"
#include "public/common/sdlbuffer/ob_session.h"
#include "public/common/sdlbuffer/sdl_svr_objs.h"
#include "test_sdl_c.h"

namespace MFirstTest
{
    class ITestHelloWorldImp : public CSdlServerObject
    {
    public:
        virtual int32 out_helloWorld(
            SOBSession* pSession,
            CBSErrorMsg& cErrorMsg	/* Error message */
        ) = 0;
    };

    class IGetCycleRunDataImp : public CSdlServerObject
    {
    public:
        virtual int32 query_cycleRunData(
            SOBSession* pSession,
            int32& iListSize,	/* OUT */
            CBSErrorMsg& cErrorMsg	/* Error message */
        ) = 0;
    };

    class IInsertCycleRunDataImp : public CSdlServerObject
    {
    public:
        virtual int32 insert_cycleRunData(
            SOBSession* pSession,
            const ::MTestDef::SCycleRunInfo& sCycleRunInfo,	/* IN */
            CBSErrorMsg& cErrorMsg	/* Error message */
        ) = 0;
    };
};

#endif
