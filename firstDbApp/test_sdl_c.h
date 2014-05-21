//******************************************************************
//* Copyright (c) 2003-2009, Asiainfo HangZhou. All rights reserved.
//* SDL generated C++ client skeleton header file.
//* Source filename: ./idl/test.sdl
//* Generated date:  2014-05-21 04:36:18
//* Note: This is a auto-generated file, DON'T MODIFY IT!
//******************************************************************

#ifndef __SDL_C_TEST_SDL_C__
#define __SDL_C_TEST_SDL_C__

// list include files
#include "public/common/base/aivector.h"
#include "public/common/base/aiset.h"
#include "public/common/base/aimap.h"
#include "public/common/sdlbuffer/sdl_basic_objs.h"
#include "public/common/sdlbuffer/sdl_basic_visitors.h"
#include "public/common/sdlbuffer/sdl_type_factory.h"
// client side include files
#include "base_class.h"
#include "public/common/sdlbuffer/ob_session.h"
#include "public/common/sdlbuffer/sdl_client_objs.h"
#include "3rd/lua/lua.h"
#ifdef SDL_MESSAGE_CALL
    #include "openmessage/ob_message.h"
#endif
// other included SDL files
#include "test_def_sdl_c.h"

#ifdef SDL_SELECTED_API
#include "OpenBossApp.h"
#endif

class CBSErrorMsg;

// main body

namespace MFirstTest
{
    class ITestHelloWorld : public CSdlClientObject
    {
    public:
        #if defined(__SDL_TEST_SDL_C_IMPL__) || !defined(__OPENBOSS_NGMAKE__)
        static bool get_paramInfo(const char* szFunctionName, const CSdlTypeInfo*& pTypeInfo4In,
            const CSdlTypeInfo*& pTypeInfo4Out, const SSdlMemberTypeInfo*& pMemberTypeInfo4In,
            const SSdlMemberTypeInfo*& pMemberTypeInfo4Out);
        #endif

        #if !defined(SDL_SELECTED_API) || defined(SDL_USE_MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD)
        int32 out_helloWorld(
            CBSErrorMsg& cErrorMsg,
            SOBSession* pSession = 0
        );

        int32 out_helloWorld_upload(
            CBSErrorMsg& cErrorMsg,
            SOBSession* pSession = 0
        );

        static int out_helloWorld_lua(lua_State* L);
        static int out_helloWorld_upload_lua(lua_State* L);

        static int32 out_helloWorld_in_param(CSdlBasicParamObject&);
        static int32 out_helloWorld_in_from_out(CSdlBasicParamObject&);
        static int32 out_helloWorld_out_param(CSdlBasicParamObject&, CSdlBasicParamObject&);

        #endif

    };

    class IGetCycleRunData : public CSdlClientObject
    {
    public:
        #if defined(__SDL_TEST_SDL_C_IMPL__) || !defined(__OPENBOSS_NGMAKE__)
        static bool get_paramInfo(const char* szFunctionName, const CSdlTypeInfo*& pTypeInfo4In,
            const CSdlTypeInfo*& pTypeInfo4Out, const SSdlMemberTypeInfo*& pMemberTypeInfo4In,
            const SSdlMemberTypeInfo*& pMemberTypeInfo4Out);
        #endif

        #if !defined(SDL_SELECTED_API) || defined(SDL_USE_MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA)
        int32 query_cycleRunData(
            int32& iListSize,
            CBSErrorMsg& cErrorMsg,
            SOBSession* pSession = 0
        );

        int32 query_cycleRunData_upload(
            int32& iListSize,
            CBSErrorMsg& cErrorMsg,
            SOBSession* pSession = 0
        );

        static int query_cycleRunData_lua(lua_State* L);
        static int query_cycleRunData_upload_lua(lua_State* L);

        static int32 query_cycleRunData_in_param(CSdlBasicParamObject&);
        static int32 query_cycleRunData_in_from_out(CSdlBasicParamObject&);
        static int32 query_cycleRunData_out_param(CSdlBasicParamObject&, CSdlBasicParamObject&);

        #endif

    };

    class IInsertCycleRunData : public CSdlClientObject
    {
    public:
        #if defined(__SDL_TEST_SDL_C_IMPL__) || !defined(__OPENBOSS_NGMAKE__)
        static bool get_paramInfo(const char* szFunctionName, const CSdlTypeInfo*& pTypeInfo4In,
            const CSdlTypeInfo*& pTypeInfo4Out, const SSdlMemberTypeInfo*& pMemberTypeInfo4In,
            const SSdlMemberTypeInfo*& pMemberTypeInfo4Out);
        #endif

        #if !defined(SDL_SELECTED_API) || defined(SDL_USE_MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA)
        int32 insert_cycleRunData(
            const MTestDef::SCycleRunInfo& sCycleRunInfo,
            CBSErrorMsg& cErrorMsg,
            SOBSession* pSession = 0
        );

        int32 insert_cycleRunData_upload(
            const MTestDef::SCycleRunInfo& sCycleRunInfo,
            CBSErrorMsg& cErrorMsg,
            SOBSession* pSession = 0
        );

        static int insert_cycleRunData_lua(lua_State* L);
        static int insert_cycleRunData_upload_lua(lua_State* L);

        static int32 insert_cycleRunData_in_param(CSdlBasicParamObject&);
        static int32 insert_cycleRunData_in_from_out(CSdlBasicParamObject&);
        static int32 insert_cycleRunData_out_param(CSdlBasicParamObject&, CSdlBasicParamObject&);

        #endif

    };
}

#endif

