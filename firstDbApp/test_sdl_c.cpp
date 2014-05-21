//******************************************************************
//* Copyright (c) 2003-2009, Asiainfo HangZhou. All rights reserved.
//* SDL generated C++ client skeleton cpp file.
//* Source filename: ./idl/test.sdl
//* Generated date:  2014-05-21 04:36:18
//* Note: This is a auto-generated file, DON'T MODIFY IT!
//******************************************************************

#include <string.h>
#include <iterator>
#include "public/common/sdlbuffer/sdl_basic_visitors.h"
#include "public/common/sdlbuffer/sdl_type_factory.h"
#include "test_sdl_c.h"
static const char* s_szCompilePath = "/data01/zcgrp/xieyj/work/test/firstDbApp";
static const char* s_szSourceFileName = __FILE__;
static const char* s_szCompileDate = __DATE__;
static const char* s_szCompileTime = __TIME__;

static aistring __get_sourceFileName()
{
    aistring s = s_szCompilePath;
#ifdef _Windows
    if ( s.length() > 0 ) s += "\\";
#else
    if ( s.length() > 0 ) s += '/';
#endif
    s += s_szSourceFileName;
    return s;
}

// static variables for pseudo class: MFirstTest::ITestHelloWorld::CParamIn4out_helloWorld
#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD)
static CSdlTypeInfo s_cTypeInfo4MFirstTestITestHelloWorldout_helloWorldIn(SDL_PARAM_IN, "MFirstTest::ITestHelloWorld::CParamIn4out_helloWorld",
    CSdlTypeInfo::create_typeDescription(__get_sourceFileName().c_str(),
        __LINE__, s_szCompileDate, s_szCompileTime).c_str(),
    0, 1,
    "OBSession", OB_SESSION);
static CSdlTypeInfoImpl s_cTypeInfoImpl4MFirstTestITestHelloWorldout_helloWorldIn(s_cTypeInfo4MFirstTestITestHelloWorldout_helloWorldIn);

static SSdlMemberTypeInfo s_aMemberTypeInfo4MFirstTestITestHelloWorldout_helloWorldIn[1 + 1] =
{
    { OB_SESSION, "session", 0, 0, 0 },
    { -1, 0, 0, 0, 0 }
};
#endif

// static variables for pseudo class: MFirstTest::ITestHelloWorld::CParamOut4out_helloWorld
#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD)
static CSdlTypeInfo s_cTypeInfo4MFirstTestITestHelloWorldout_helloWorldOut(SDL_PARAM_OUT, "MFirstTest::ITestHelloWorld::CParamOut4out_helloWorld",
    CSdlTypeInfo::create_typeDescription(__get_sourceFileName().c_str(),
        __LINE__, s_szCompileDate, s_szCompileTime).c_str(),
    0, 1,
    "CBSErrorMsg", CBS_ERROR_MSG);
static CSdlTypeInfoImpl s_cTypeInfoImpl4MFirstTestITestHelloWorldout_helloWorldOut(s_cTypeInfo4MFirstTestITestHelloWorldout_helloWorldOut);

static SSdlMemberTypeInfo s_aMemberTypeInfo4MFirstTestITestHelloWorldout_helloWorldOut[1 + 1] =
{
    { CBS_ERROR_MSG, "cErrorMsg", 0, 0, 0 },
    { -1, 0, 0, 0, 0 }
};
#endif

#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD)
int32 MFirstTest::ITestHelloWorld::out_helloWorld_in_param(CSdlBasicParamObject& cParamIn)
{
    cParamIn.SetParamInfo(true, 1,&s_cTypeInfo4MFirstTestITestHelloWorldout_helloWorldIn,s_aMemberTypeInfo4MFirstTestITestHelloWorldout_helloWorldIn,cParamIn.GetSession());
    return 0;
}
int32 MFirstTest::ITestHelloWorld::out_helloWorld_in_from_out(CSdlBasicParamObject& cParamIn)
{
    cParamIn.SwitchParamOut2In(&s_cTypeInfo4MFirstTestITestHelloWorldout_helloWorldIn,s_aMemberTypeInfo4MFirstTestITestHelloWorldout_helloWorldIn);
    return 0;
}
int32 MFirstTest::ITestHelloWorld::out_helloWorld_out_param(CSdlBasicParamObject& cParamIn, CSdlBasicParamObject& cParamOut)
{
    cParamIn.SetClearInOutParamFlag(false);
    cParamOut.SetParamInfo(false, 1,&s_cTypeInfo4MFirstTestITestHelloWorldout_helloWorldOut,s_aMemberTypeInfo4MFirstTestITestHelloWorldout_helloWorldOut,cParamOut.GetErrorMsg());
    return 0;
}
// function definition for MFirstTest::ITestHelloWorld::out_helloWorld()
int32 MFirstTest::ITestHelloWorld::out_helloWorld(
    CBSErrorMsg& cErrorMsg,
    SOBSession* pSession)
{
	static const char* SZ_MD5SUM_IN = "d41d8cd98f00b204e9800998ecf8427e";
	static const char* SZ_MD5SUM_OUT = "d41d8cd98f00b204e9800998ecf8427e";
    SOBSession & session = *pSession;
    CSdlBasicParamObject cParamIn(true, 1, &s_cTypeInfo4MFirstTestITestHelloWorldout_helloWorldIn, s_aMemberTypeInfo4MFirstTestITestHelloWorldout_helloWorldIn,
        &session);
    CSdlBasicParamObject cParamOut(false, 1, &s_cTypeInfo4MFirstTestITestHelloWorldout_helloWorldOut, s_aMemberTypeInfo4MFirstTestITestHelloWorldout_helloWorldOut,
        &cErrorMsg);
    return invoke_server("MFirstTest_ITestHelloWorld", "out_helloWorld", pSession, cParamIn, cParamOut, cErrorMsg);
}
//#ifdef OBB_UPLOAD_TB//function fro upload in to tb
int32 MFirstTest::ITestHelloWorld::out_helloWorld_upload(
	 CBSErrorMsg& cErrorMsg,
	 SOBSession* pSession)
{
	static const char* SZ_MD5SUM_IN = "d41d8cd98f00b204e9800998ecf8427e";
	static const char* SZ_MD5SUM_OUT = "d41d8cd98f00b204e9800998ecf8427e";
    SOBSession & session = *pSession;
    CSdlBasicParamObject cParamIn(true, 1, &s_cTypeInfo4MFirstTestITestHelloWorldout_helloWorldIn, s_aMemberTypeInfo4MFirstTestITestHelloWorldout_helloWorldIn,
        &session);
    CSdlBasicParamObject cParamOut(false, 1, &s_cTypeInfo4MFirstTestITestHelloWorldout_helloWorldOut, s_aMemberTypeInfo4MFirstTestITestHelloWorldout_helloWorldOut,
        &cErrorMsg);
    return invoke_server("MFirstTest_ITestHelloWorld", "out_helloWorld", pSession, cParamIn, cParamOut, cErrorMsg,true);
}
int MFirstTest::ITestHelloWorld::out_helloWorld_lua(lua_State* L)
{
    MFirstTest::ITestHelloWorld* iApp = reinterpret_cast< MFirstTest::ITestHelloWorld* >(lua_touserdata(L, 1));
    CBSErrorMsg* cErrorMsg = reinterpret_cast< CBSErrorMsg* >(lua_touserdata(L, 2));
    SOBSession* pSession = reinterpret_cast<SOBSession*>(lua_touserdata(L, 3));
    int ret = iApp->out_helloWorld(*cErrorMsg, pSession);
    lua_pushinteger(L, ret);
    return 1;
}
int MFirstTest::ITestHelloWorld::out_helloWorld_upload_lua(lua_State* L)
{
    MFirstTest::ITestHelloWorld* iApp = reinterpret_cast< MFirstTest::ITestHelloWorld* >(lua_touserdata(L, 1));
    CBSErrorMsg* cErrorMsg = reinterpret_cast< CBSErrorMsg* >(lua_touserdata(L, 2));
    SOBSession* pSession = reinterpret_cast<SOBSession*>(lua_touserdata(L, 3));
    int ret = iApp->out_helloWorld_upload(*cErrorMsg, pSession);
    lua_pushinteger(L, ret);
    return 1;
}
//#endif
#endif

#if defined(__SDL_TEST_SDL_C_IMPL__) || !defined(__OPENBOSS_NGMAKE__)
bool MFirstTest::ITestHelloWorld::get_paramInfo(const char* szFunctionName, const CSdlTypeInfo*& pTypeInfo4In,
    const CSdlTypeInfo*& pTypeInfo4Out, const SSdlMemberTypeInfo*& pMemberTypeInfo4In,
    const SSdlMemberTypeInfo*& pMemberTypeInfo4Out)
{
    static struct SParamInfo
    {
        const char* m_szFunctionName;
        const CSdlTypeInfo* m_pTypeInfo4In;
        const CSdlTypeInfo* m_pTypeInfo4Out;
        const SSdlMemberTypeInfo* m_pMemberTypeInfo4In;
        const SSdlMemberTypeInfo* m_pMemberTypeInfo4Out;
    } s_aParamInfo[] = {
#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD)
        { "out_helloWorld", &s_cTypeInfo4MFirstTestITestHelloWorldout_helloWorldIn, &s_cTypeInfo4MFirstTestITestHelloWorldout_helloWorldOut, s_aMemberTypeInfo4MFirstTestITestHelloWorldout_helloWorldIn, s_aMemberTypeInfo4MFirstTestITestHelloWorldout_helloWorldOut },
#endif
        { 0, 0, 0, 0, 0 }
    };
    for ( int i = 0; s_aParamInfo[i].m_szFunctionName != 0; ++i )
    {
        if ( strcmp(s_aParamInfo[i].m_szFunctionName, szFunctionName) != 0 ) continue;
        pTypeInfo4In = s_aParamInfo[i].m_pTypeInfo4In;
        pTypeInfo4Out = s_aParamInfo[i].m_pTypeInfo4Out;
        pMemberTypeInfo4In = s_aParamInfo[i].m_pMemberTypeInfo4In;
        pMemberTypeInfo4Out = s_aParamInfo[i].m_pMemberTypeInfo4Out;
        return true;
    }
    return false;
}
#endif

// static variables for pseudo class: MFirstTest::IGetCycleRunData::CParamIn4query_cycleRunData
#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA)
static CSdlTypeInfo s_cTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataIn(SDL_PARAM_IN, "MFirstTest::IGetCycleRunData::CParamIn4query_cycleRunData",
    CSdlTypeInfo::create_typeDescription(__get_sourceFileName().c_str(),
        __LINE__, s_szCompileDate, s_szCompileTime).c_str(),
    0, 1,
    "OBSession", OB_SESSION);
static CSdlTypeInfoImpl s_cTypeInfoImpl4MFirstTestIGetCycleRunDataquery_cycleRunDataIn(s_cTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataIn);

static SSdlMemberTypeInfo s_aMemberTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataIn[1 + 1] =
{
    { OB_SESSION, "session", 0, 0, 0 },
    { -1, 0, 0, 0, 0 }
};
#endif

// static variables for pseudo class: MFirstTest::IGetCycleRunData::CParamOut4query_cycleRunData
#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA)
static CSdlTypeInfo s_cTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataOut(SDL_PARAM_OUT, "MFirstTest::IGetCycleRunData::CParamOut4query_cycleRunData",
    CSdlTypeInfo::create_typeDescription(__get_sourceFileName().c_str(),
        __LINE__, s_szCompileDate, s_szCompileTime).c_str(),
    0, 2,
    "int32", SDL_INT32,
    "CBSErrorMsg", CBS_ERROR_MSG);
static CSdlTypeInfoImpl s_cTypeInfoImpl4MFirstTestIGetCycleRunDataquery_cycleRunDataOut(s_cTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataOut);

static SSdlMemberTypeInfo s_aMemberTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataOut[2 + 1] =
{
    { SDL_INT32, "iListSize", 0, 0, 0 },
    { CBS_ERROR_MSG, "cErrorMsg", 0, 0, 0 },
    { -1, 0, 0, 0, 0 }
};
#endif

#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA)
int32 MFirstTest::IGetCycleRunData::query_cycleRunData_in_param(CSdlBasicParamObject& cParamIn)
{
    cParamIn.SetParamInfo(true, 1,&s_cTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataIn,s_aMemberTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataIn,cParamIn.GetSession());
    return 0;
}
int32 MFirstTest::IGetCycleRunData::query_cycleRunData_in_from_out(CSdlBasicParamObject& cParamIn)
{
    cParamIn.SwitchParamOut2In(&s_cTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataIn,s_aMemberTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataIn);
    return 0;
}
int32 MFirstTest::IGetCycleRunData::query_cycleRunData_out_param(CSdlBasicParamObject& cParamIn, CSdlBasicParamObject& cParamOut)
{
    cParamIn.SetClearInOutParamFlag(false);
    int32 *param0 = new int32();
    cParamOut.SetParamInfo(false, 2,&s_cTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataOut,s_aMemberTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataOut,param0,cParamOut.GetErrorMsg());
    return 0;
}
// function definition for MFirstTest::IGetCycleRunData::query_cycleRunData()
int32 MFirstTest::IGetCycleRunData::query_cycleRunData(
    int32& iListSize,
    CBSErrorMsg& cErrorMsg,
    SOBSession* pSession)
{
	static const char* SZ_MD5SUM_IN = "d41d8cd98f00b204e9800998ecf8427e";
	static const char* SZ_MD5SUM_OUT = "50e7409cc3cba0f0c1b1091279b29dc3";
    SOBSession & session = *pSession;
    CSdlBasicParamObject cParamIn(true, 1, &s_cTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataIn, s_aMemberTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataIn,
        &session);
    CSdlBasicParamObject cParamOut(false, 2, &s_cTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataOut, s_aMemberTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataOut,
        &iListSize, &cErrorMsg);
    return invoke_server("MFirstTest_IGetCycleRunData", "query_cycleRunData", pSession, cParamIn, cParamOut, cErrorMsg);
}
//#ifdef OBB_UPLOAD_TB//function fro upload in to tb
int32 MFirstTest::IGetCycleRunData::query_cycleRunData_upload(
	 int32& iListSize,
	 CBSErrorMsg& cErrorMsg,
	 SOBSession* pSession)
{
	static const char* SZ_MD5SUM_IN = "d41d8cd98f00b204e9800998ecf8427e";
	static const char* SZ_MD5SUM_OUT = "50e7409cc3cba0f0c1b1091279b29dc3";
    SOBSession & session = *pSession;
    CSdlBasicParamObject cParamIn(true, 1, &s_cTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataIn, s_aMemberTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataIn,
        &session);
    CSdlBasicParamObject cParamOut(false, 2, &s_cTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataOut, s_aMemberTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataOut,
        &iListSize, &cErrorMsg);
    return invoke_server("MFirstTest_IGetCycleRunData", "query_cycleRunData", pSession, cParamIn, cParamOut, cErrorMsg,true);
}
int MFirstTest::IGetCycleRunData::query_cycleRunData_lua(lua_State* L)
{
    MFirstTest::IGetCycleRunData* iApp = reinterpret_cast< MFirstTest::IGetCycleRunData* >(lua_touserdata(L, 1));
    int32* iListSize = reinterpret_cast< int32* >(lua_touserdata(L, 2));
    CBSErrorMsg* cErrorMsg = reinterpret_cast< CBSErrorMsg* >(lua_touserdata(L, 3));
    SOBSession* pSession = reinterpret_cast<SOBSession*>(lua_touserdata(L, 4));
    int ret = iApp->query_cycleRunData(*iListSize, *cErrorMsg, pSession);
    lua_pushinteger(L, ret);
    return 1;
}
int MFirstTest::IGetCycleRunData::query_cycleRunData_upload_lua(lua_State* L)
{
    MFirstTest::IGetCycleRunData* iApp = reinterpret_cast< MFirstTest::IGetCycleRunData* >(lua_touserdata(L, 1));
    int32* iListSize = reinterpret_cast< int32* >(lua_touserdata(L, 2));
    CBSErrorMsg* cErrorMsg = reinterpret_cast< CBSErrorMsg* >(lua_touserdata(L, 3));
    SOBSession* pSession = reinterpret_cast<SOBSession*>(lua_touserdata(L, 4));
    int ret = iApp->query_cycleRunData_upload(*iListSize, *cErrorMsg, pSession);
    lua_pushinteger(L, ret);
    return 1;
}
//#endif
#endif

#if defined(__SDL_TEST_SDL_C_IMPL__) || !defined(__OPENBOSS_NGMAKE__)
bool MFirstTest::IGetCycleRunData::get_paramInfo(const char* szFunctionName, const CSdlTypeInfo*& pTypeInfo4In,
    const CSdlTypeInfo*& pTypeInfo4Out, const SSdlMemberTypeInfo*& pMemberTypeInfo4In,
    const SSdlMemberTypeInfo*& pMemberTypeInfo4Out)
{
    static struct SParamInfo
    {
        const char* m_szFunctionName;
        const CSdlTypeInfo* m_pTypeInfo4In;
        const CSdlTypeInfo* m_pTypeInfo4Out;
        const SSdlMemberTypeInfo* m_pMemberTypeInfo4In;
        const SSdlMemberTypeInfo* m_pMemberTypeInfo4Out;
    } s_aParamInfo[] = {
#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA)
        { "query_cycleRunData", &s_cTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataIn, &s_cTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataOut, s_aMemberTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataIn, s_aMemberTypeInfo4MFirstTestIGetCycleRunDataquery_cycleRunDataOut },
#endif
        { 0, 0, 0, 0, 0 }
    };
    for ( int i = 0; s_aParamInfo[i].m_szFunctionName != 0; ++i )
    {
        if ( strcmp(s_aParamInfo[i].m_szFunctionName, szFunctionName) != 0 ) continue;
        pTypeInfo4In = s_aParamInfo[i].m_pTypeInfo4In;
        pTypeInfo4Out = s_aParamInfo[i].m_pTypeInfo4Out;
        pMemberTypeInfo4In = s_aParamInfo[i].m_pMemberTypeInfo4In;
        pMemberTypeInfo4Out = s_aParamInfo[i].m_pMemberTypeInfo4Out;
        return true;
    }
    return false;
}
#endif

// static variables for pseudo class: MFirstTest::IInsertCycleRunData::CParamIn4insert_cycleRunData
#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA)
static CSdlTypeInfo s_cTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataIn(SDL_PARAM_IN, "MFirstTest::IInsertCycleRunData::CParamIn4insert_cycleRunData",
    CSdlTypeInfo::create_typeDescription(__get_sourceFileName().c_str(),
        __LINE__, s_szCompileDate, s_szCompileTime).c_str(),
    0, 2,
    "MTestDef::SCycleRunInfo", SDL_STRUCT,
    "OBSession", OB_SESSION);
static CSdlTypeInfoImpl s_cTypeInfoImpl4MFirstTestIInsertCycleRunDatainsert_cycleRunDataIn(s_cTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataIn);

static SSdlMemberTypeInfo s_aMemberTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataIn[2 + 1] =
{
    { SDL_STRUCT, "sCycleRunInfo", 0, 0, 0 },
    { OB_SESSION, "session", 0, 0, 0 },
    { -1, 0, 0, 0, 0 }
};
#endif

// static variables for pseudo class: MFirstTest::IInsertCycleRunData::CParamOut4insert_cycleRunData
#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA)
static CSdlTypeInfo s_cTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataOut(SDL_PARAM_OUT, "MFirstTest::IInsertCycleRunData::CParamOut4insert_cycleRunData",
    CSdlTypeInfo::create_typeDescription(__get_sourceFileName().c_str(),
        __LINE__, s_szCompileDate, s_szCompileTime).c_str(),
    0, 1,
    "CBSErrorMsg", CBS_ERROR_MSG);
static CSdlTypeInfoImpl s_cTypeInfoImpl4MFirstTestIInsertCycleRunDatainsert_cycleRunDataOut(s_cTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataOut);

static SSdlMemberTypeInfo s_aMemberTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataOut[1 + 1] =
{
    { CBS_ERROR_MSG, "cErrorMsg", 0, 0, 0 },
    { -1, 0, 0, 0, 0 }
};
#endif

#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA)
int32 MFirstTest::IInsertCycleRunData::insert_cycleRunData_in_param(CSdlBasicParamObject& cParamIn)
{
    MTestDef::SCycleRunInfo *param0 = new MTestDef::SCycleRunInfo();
    cParamIn.SetParamInfo(true, 2,&s_cTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataIn,s_aMemberTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataIn,param0,cParamIn.GetSession());
    return 0;
}
int32 MFirstTest::IInsertCycleRunData::insert_cycleRunData_in_from_out(CSdlBasicParamObject& cParamIn)
{
    cParamIn.SwitchParamOut2In(&s_cTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataIn,s_aMemberTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataIn);
    return 0;
}
int32 MFirstTest::IInsertCycleRunData::insert_cycleRunData_out_param(CSdlBasicParamObject& cParamIn, CSdlBasicParamObject& cParamOut)
{
    cParamIn.SetClearInOutParamFlag(false);
    cParamOut.SetParamInfo(false, 1,&s_cTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataOut,s_aMemberTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataOut,cParamOut.GetErrorMsg());
    return 0;
}
// function definition for MFirstTest::IInsertCycleRunData::insert_cycleRunData()
int32 MFirstTest::IInsertCycleRunData::insert_cycleRunData(
    const MTestDef::SCycleRunInfo& sCycleRunInfo,
    CBSErrorMsg& cErrorMsg,
    SOBSession* pSession)
{
	static const char* SZ_MD5SUM_IN = "033b47fa6a0ff9c17c7ba4262937e2cc";
	static const char* SZ_MD5SUM_OUT = "d41d8cd98f00b204e9800998ecf8427e";
    SOBSession & session = *pSession;
    CSdlBasicParamObject cParamIn(true, 2, &s_cTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataIn, s_aMemberTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataIn,
        &sCycleRunInfo, &session);
    CSdlBasicParamObject cParamOut(false, 1, &s_cTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataOut, s_aMemberTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataOut,
        &cErrorMsg);
    return invoke_server("MFirstTest_IInsertCycleRunData", "insert_cycleRunData", pSession, cParamIn, cParamOut, cErrorMsg);
}
//#ifdef OBB_UPLOAD_TB//function fro upload in to tb
int32 MFirstTest::IInsertCycleRunData::insert_cycleRunData_upload(
	 const MTestDef::SCycleRunInfo& sCycleRunInfo,
	 CBSErrorMsg& cErrorMsg,
	 SOBSession* pSession)
{
	static const char* SZ_MD5SUM_IN = "033b47fa6a0ff9c17c7ba4262937e2cc";
	static const char* SZ_MD5SUM_OUT = "d41d8cd98f00b204e9800998ecf8427e";
    SOBSession & session = *pSession;
    CSdlBasicParamObject cParamIn(true, 2, &s_cTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataIn, s_aMemberTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataIn,
        &sCycleRunInfo, &session);
    CSdlBasicParamObject cParamOut(false, 1, &s_cTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataOut, s_aMemberTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataOut,
        &cErrorMsg);
    return invoke_server("MFirstTest_IInsertCycleRunData", "insert_cycleRunData", pSession, cParamIn, cParamOut, cErrorMsg,true);
}
int MFirstTest::IInsertCycleRunData::insert_cycleRunData_lua(lua_State* L)
{
    MFirstTest::IInsertCycleRunData* iApp = reinterpret_cast< MFirstTest::IInsertCycleRunData* >(lua_touserdata(L, 1));
    MTestDef::SCycleRunInfo* sCycleRunInfo = reinterpret_cast< MTestDef::SCycleRunInfo* >(lua_touserdata(L, 2));
    CBSErrorMsg* cErrorMsg = reinterpret_cast< CBSErrorMsg* >(lua_touserdata(L, 3));
    SOBSession* pSession = reinterpret_cast<SOBSession*>(lua_touserdata(L, 4));
    int ret = iApp->insert_cycleRunData(*sCycleRunInfo, *cErrorMsg, pSession);
    lua_pushinteger(L, ret);
    return 1;
}
int MFirstTest::IInsertCycleRunData::insert_cycleRunData_upload_lua(lua_State* L)
{
    MFirstTest::IInsertCycleRunData* iApp = reinterpret_cast< MFirstTest::IInsertCycleRunData* >(lua_touserdata(L, 1));
    MTestDef::SCycleRunInfo* sCycleRunInfo = reinterpret_cast< MTestDef::SCycleRunInfo* >(lua_touserdata(L, 2));
    CBSErrorMsg* cErrorMsg = reinterpret_cast< CBSErrorMsg* >(lua_touserdata(L, 3));
    SOBSession* pSession = reinterpret_cast<SOBSession*>(lua_touserdata(L, 4));
    int ret = iApp->insert_cycleRunData_upload(*sCycleRunInfo, *cErrorMsg, pSession);
    lua_pushinteger(L, ret);
    return 1;
}
//#endif
#endif

#if defined(__SDL_TEST_SDL_C_IMPL__) || !defined(__OPENBOSS_NGMAKE__)
bool MFirstTest::IInsertCycleRunData::get_paramInfo(const char* szFunctionName, const CSdlTypeInfo*& pTypeInfo4In,
    const CSdlTypeInfo*& pTypeInfo4Out, const SSdlMemberTypeInfo*& pMemberTypeInfo4In,
    const SSdlMemberTypeInfo*& pMemberTypeInfo4Out)
{
    static struct SParamInfo
    {
        const char* m_szFunctionName;
        const CSdlTypeInfo* m_pTypeInfo4In;
        const CSdlTypeInfo* m_pTypeInfo4Out;
        const SSdlMemberTypeInfo* m_pMemberTypeInfo4In;
        const SSdlMemberTypeInfo* m_pMemberTypeInfo4Out;
    } s_aParamInfo[] = {
#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA)
        { "insert_cycleRunData", &s_cTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataIn, &s_cTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataOut, s_aMemberTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataIn, s_aMemberTypeInfo4MFirstTestIInsertCycleRunDatainsert_cycleRunDataOut },
#endif
        { 0, 0, 0, 0, 0 }
    };
    for ( int i = 0; s_aParamInfo[i].m_szFunctionName != 0; ++i )
    {
        if ( strcmp(s_aParamInfo[i].m_szFunctionName, szFunctionName) != 0 ) continue;
        pTypeInfo4In = s_aParamInfo[i].m_pTypeInfo4In;
        pTypeInfo4Out = s_aParamInfo[i].m_pTypeInfo4Out;
        pMemberTypeInfo4In = s_aParamInfo[i].m_pMemberTypeInfo4In;
        pMemberTypeInfo4Out = s_aParamInfo[i].m_pMemberTypeInfo4Out;
        return true;
    }
    return false;
}
#endif

