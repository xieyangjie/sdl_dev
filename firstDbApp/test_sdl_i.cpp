//******************************************************************
//* Copyright (c) 2003-2009, Asiainfo HangZhou. All rights reserved.
//* SDL generated C++ server skeleton implementation cpp file.
//* Source filename: test.sdl
//* Generated date:  2014-05-15 16:10:00
//* Note: This is a auto-generated file, DON'T MODIFY IT!
//******************************************************************

#include "test_sdl_i.h"
#include "test_db.h"

int32 MFirstTest::CITestHelloWorldImp::out_helloWorld(
    SOBSession* pSession,

    CBSErrorMsg& cErrorMsg  /* Error message */
)
{
    int32 iRetValue = SDL_FAIL;
    /* your codes start here */
    LOG_TRACE("============helloWorld=============");
    /* your codes stop here */
     return iRetValue;
};

int32 MFirstTest::CIGetCycleRunDataImp::query_cycleRunData(
    SOBSession* pSession,
    int32& iListSize,	/* OUT */
    CBSErrorMsg& cErrorMsg  /* Error message */
)
{
    int32 iRetValue = SDL_FAIL;
    /* your codes start here */
    test::CTestDb cTestDb;
    cTestDb.query_caCycleRun(iListSize);
    /* your codes stop here */
     return iRetValue;
};

int32 MFirstTest::CIInsertCycleRunDataImp::insert_cycleRunData(
    SOBSession* pSession,
    const ::MTestDef::SCycleRunInfo& sCycleRunInfo, /* IN */
    CBSErrorMsg& cErrorMsg  /* Error message */
)
{
    int32 iRetValue = SDL_FAIL;
    /* your codes start here */
    test::CTestDb cTestDb;
    cTestDb.insert_caCycleRun(sCycleRunInfo,pSession);
    /* your codes stop here */
     return iRetValue;
};
