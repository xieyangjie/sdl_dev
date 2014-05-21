//******************************************************************
//* Copyright (c) 2003-2009, Asiainfo HangZhou. All rights reserved.
//* SDL generated C++ implementation cpp file for OpenBOSS.
//* Source filename: ./idl/test.sdl
//* Generated date:  2014-05-21 04:36:17
//* Note: This is a auto-generated file, DON'T MODIFY IT!
//******************************************************************

#include "public/common/base/thread_value.h"
#include "public/common/sdlbuffer/dynamic_load.h"
#include "public/common/sdlbuffer/sdl_svr_objs.h"
#include "public/common/sdlbuffer/obb_stream_visitors.h"
#include "public/common/sdlbuffer/sdl_basic_def.h"
#include "public/common/sdlbuffer/sdl_basic_objs.h"
#include "public/common/log/oderr.h"
#include "public/common/sdlbuffer/obb_marshaller.h"
#include "public/common/sdlbuffer/obb_codec.h"
#include "test_sdl_c.h"
#include "test_sdl_i.h"
#include "test_imp.h"

static const char* SZ_FUNCTION_NOT_FOUND 	= "Implementation function not found";
static const char* SZ_SERVICE_EXCEPTION 	= "Unknow exception on service implementation";

static const SObAppDesc _data_get_appDesc[] = {
    { 0, 0, SDLE_SDL_FILENAME, "test.sdl", 0, 0 },
    { 1, 0, SDLE_SERVER_MODULE_NAME, "MFirstTest", 0, 0,0,0,0,0,0},
    { 2, 1, SDLE_SERVER_INTERFACE_NAME, "ITestHelloWorld", 0, 0,0,0,0,0,0},
    { 3, 2, SDLE_SERVER_FUNCTION_NAME, "out_helloWorld", MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD, LOCAL_MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD,
       MFirstTest::ITestHelloWorld::out_helloWorld_in_param,MFirstTest::ITestHelloWorld::out_helloWorld_in_from_out,MFirstTest::ITestHelloWorld::out_helloWorld_out_param,0,0},
    { 4, 2, SDLE_SERVER_DEPOLY_NAME, "MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD", MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD, LOCAL_MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD,
       MFirstTest::ITestHelloWorld::out_helloWorld_in_param,MFirstTest::ITestHelloWorld::out_helloWorld_in_from_out,MFirstTest::ITestHelloWorld::out_helloWorld_out_param,0,0},
    { 5, 1, SDLE_SERVER_INTERFACE_NAME, "IGetCycleRunData", 0, 0,0,0,0,0,0},
    { 6, 5, SDLE_SERVER_FUNCTION_NAME, "query_cycleRunData", MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA, LOCAL_MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA,
       MFirstTest::IGetCycleRunData::query_cycleRunData_in_param,MFirstTest::IGetCycleRunData::query_cycleRunData_in_from_out,MFirstTest::IGetCycleRunData::query_cycleRunData_out_param,0,0},
    { 7, 5, SDLE_SERVER_DEPOLY_NAME, "MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA", MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA, LOCAL_MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA,
       MFirstTest::IGetCycleRunData::query_cycleRunData_in_param,MFirstTest::IGetCycleRunData::query_cycleRunData_in_from_out,MFirstTest::IGetCycleRunData::query_cycleRunData_out_param,0,0},
    { 8, 1, SDLE_SERVER_INTERFACE_NAME, "IInsertCycleRunData", 0, 0,0,0,0,0,0},
    { 9, 8, SDLE_SERVER_FUNCTION_NAME, "insert_cycleRunData", MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA, LOCAL_MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA,
       MFirstTest::IInsertCycleRunData::insert_cycleRunData_in_param,MFirstTest::IInsertCycleRunData::insert_cycleRunData_in_from_out,MFirstTest::IInsertCycleRunData::insert_cycleRunData_out_param,0,0},
    { 10, 8, SDLE_SERVER_DEPOLY_NAME, "MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA", MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA, LOCAL_MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA,
       MFirstTest::IInsertCycleRunData::insert_cycleRunData_in_param,MFirstTest::IInsertCycleRunData::insert_cycleRunData_in_from_out,MFirstTest::IInsertCycleRunData::insert_cycleRunData_out_param,0,0},
    { -1, 0, 0, 0, 0, 0, 0, 0 }
};

static CObSvrDynamicLoader s_cLoader(_data_get_appDesc);

int32 MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD(SOBSession* pSession, obb_stream& in, obb_stream& out)
{
    static const char* SZ_FUNCTION_INFO = "out_helloWorld(test.sdl,MFirstTest::ITestHelloWorld::out_helloWorld())";
	static const char* SZ_MD5SUM_IN = "d41d8cd98f00b204e9800998ecf8427e";
	static const char* SZ_MD5SUM_OUT = "d41d8cd98f00b204e9800998ecf8427e";
   CSdlSvcImplRunInfo cRunInfo(pSession, in, SZ_FUNCTION_INFO);
   int32 iRetValue = SDL_FAIL, rc;
   CBSErrorMsg cErrorMsg;
	if(in.marshaller().encoder() == NULL)
	{
		cErrorMsg.set_all(iRetValue, "Input param obb_stream is invalid", SZ_FUNCTION_INFO);
		cRunInfo.report_failure(iRetValue, &cErrorMsg);
		return iRetValue;
	}
	if(NULL == pSession)
	{
		cErrorMsg.set_all(iRetValue, "Input param pSession is null", SZ_FUNCTION_INFO);
		cRunInfo.report_failure(iRetValue, &cErrorMsg);
		return iRetValue;
	}
    pSession->add_property(SDL_MODULE_NAME, "MFirstTest");
    pSession->add_property(SDL_INTERFACE_NAME, "ITestHelloWorld");
    pSession->add_property(SDL_FUNCTION_NAME, "out_helloWorld");
    pSession->add_property(SDL_FILE_NAME, "test.sdl");
    CObbMarshallingVisitor cMarshaller(out);
    CObbUnmarshallingVisitor cUnmarshaller(in);
    const CSdlTypeInfo* pTypeInfo4In, * pTypeInfo4Out;
    const SSdlMemberTypeInfo* pMemberTypeInfo4In, * pMemberTypeInfo4Out;
    if ( !MFirstTest::ITestHelloWorld::get_paramInfo("out_helloWorld", pTypeInfo4In, pTypeInfo4Out,
        pMemberTypeInfo4In, pMemberTypeInfo4Out) )
    {
        iRetValue = OBE_SVR_NO_IMPLEMENT;
        cErrorMsg.set_all(iRetValue, SZ_FUNCTION_NOT_FOUND, SZ_FUNCTION_INFO);
        cRunInfo.report_failure(iRetValue, &cErrorMsg);
        return iRetValue;
    }
    CSdlBasicParamObject cParamIn(true, 0 + 1, pTypeInfo4In, pMemberTypeInfo4In, pSession);
    CSdlBasicParamObject cParamOut(false, 0 + 1, pTypeInfo4Out, pMemberTypeInfo4Out, &cErrorMsg);
    try {
        if ( (rc = cUnmarshaller.visit(cParamIn)) < 0 )
        {
            iRetValue = rc;
            cErrorMsg.set_all(rc, cUnmarshaller.get_errorMsg().c_str(), SZ_FUNCTION_INFO);
            CAIException e(4001);
            e << "Unmarshaller error, code=" << rc << ", msg=" << cUnmarshaller.get_errorMsg();
            throw e;
        }
        if ( before_callServer("MFirstTest::ITestHelloWorld", "out_helloWorld",
                        in, out, &cErrorMsg, pSession, cRunInfo) )  

        {
          ::MFirstTest::CITestHelloWorldImp cITestHelloWorldImp;
          try {
	          iRetValue = cITestHelloWorldImp.out_helloWorld(pSession, cErrorMsg);
	       }
          catch( CBSErrorMsg &e ) {
		     cErrorMsg.set_all(e.get_errorCode(), e.get_errorMsg().c_str(), e.get_hint().c_str(),
                  e.get_minErrorCode());
          }
        }
        if ( (rc = cMarshaller.visit(cParamOut)) < 0 )
        {
            iRetValue = rc;
            cErrorMsg.set_all(rc, cMarshaller.get_errorMsg().c_str(), SZ_FUNCTION_INFO);
            goto lblError4out_helloWorld;
        }
    }
    catch(CBSErrorMsg &e) {
        iRetValue = OBE_SVR_CALL_APP;
        cErrorMsg.set_all(e.get_errorCode(), e.get_errorMsg().c_str(), e.get_hint().c_str(), e.get_minErrorCode());
    }
    catch(CAIException &e) {
        iRetValue = OBE_SVR_CALL_APP;
        cErrorMsg.set_all(e.get_code(), e.get_message().c_str(), e.get_logrecord().c_str(), 0);
        after_callServer("MFirstTest::ITestHelloWorld", "out_helloWorld",
                        in, out, &cErrorMsg, pSession, cRunInfo, iRetValue);
        throw e;
    }
    catch(...){
        iRetValue = OBE_SVR_UNCAUGHT_EXCEPTION;
        cErrorMsg.set_all(iRetValue, SZ_SERVICE_EXCEPTION, SZ_FUNCTION_INFO);
    }
    lblError4out_helloWorld:
        after_callServer("MFirstTest::ITestHelloWorld", "out_helloWorld",
                        in, out, &cErrorMsg, pSession, cRunInfo, iRetValue);
    return iRetValue;
}

int32 LOCAL_MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD(SOBSession* pSession, CSdlBasicParamObject& in, CSdlBasicParamObject& out)
{
    static const char* SZ_FUNCTION_INFO = "local_out_helloWorld(test.sdl,MFirstTest::ITestHelloWorld::out_helloWorld())";
	static const char* SZ_MD5SUM_IN = "d41d8cd98f00b204e9800998ecf8427e";
	static const char* SZ_MD5SUM_OUT = "d41d8cd98f00b204e9800998ecf8427e";
   obb_stream in_stream, out_stream;
   CSdlSvcImplRunInfo cRunInfo(pSession, in_stream, SZ_FUNCTION_INFO);
   int32 iRetValue = SDL_FAIL, rc;
	CBSErrorMsg errorMsg;
	if(NULL == pSession)
	{
		errorMsg.set_all(iRetValue, "Input param pSession is null", SZ_FUNCTION_INFO);
		cRunInfo.report_failure(iRetValue, &errorMsg);
		return iRetValue;
	}
    pSession->add_property(SDL_MODULE_NAME, "MFirstTest");
    pSession->add_property(SDL_INTERFACE_NAME, "ITestHelloWorld");
    pSession->add_property(SDL_FUNCTION_NAME, "out_helloWorld");
    pSession->add_property(SDL_FILE_NAME, "test.sdl");
    CBSErrorMsg* cErrorMsg = 0;

    cErrorMsg = (CBSErrorMsg*) out.get_memberAddr(0);
	 if(cErrorMsg == NULL)
	 {
		errorMsg.set_all(iRetValue, "cErrorMsg is null", SZ_FUNCTION_INFO);
		cRunInfo.report_failure(iRetValue, &errorMsg);
		return iRetValue;
	 }
    try {
        if ( before_callServer("MFirstTest::ITestHelloWorld", "out_helloWorld",
                        in_stream, out_stream, cErrorMsg, pSession, cRunInfo) )  
        {
          ::MFirstTest::CITestHelloWorldImp cITestHelloWorldImp;
          try {
	          iRetValue = cITestHelloWorldImp.out_helloWorld(pSession, *cErrorMsg);
	       }
          catch( CBSErrorMsg &e ) {
		     cErrorMsg->set_all(e.get_errorCode(), e.get_errorMsg().c_str(), e.get_hint().c_str(),
                  e.get_minErrorCode());
          }
        }
    }
    catch(CBSErrorMsg &e) {
        iRetValue = OBE_SVR_CALL_APP;
        cErrorMsg->set_all(e.get_errorCode(), e.get_errorMsg().c_str(), e.get_hint().c_str(), e.get_minErrorCode());
    }
    catch(CAIException &e) {
        iRetValue = OBE_SVR_CALL_APP;
        cErrorMsg->set_all(e.get_code(), e.get_message().c_str(), e.get_logrecord().c_str(), 0);
        after_callServer("MFirstTest::ITestHelloWorld", "out_helloWorld",
                        in_stream, out_stream, cErrorMsg, pSession, cRunInfo, iRetValue);
        throw e;
    }
    catch(...){
        iRetValue = OBE_SVR_UNCAUGHT_EXCEPTION;
        cErrorMsg->set_all(iRetValue, SZ_SERVICE_EXCEPTION, SZ_FUNCTION_INFO);
    }
    lblError4out_helloWorld:
        after_callServer("MFirstTest::ITestHelloWorld", "out_helloWorld",
                        in_stream, out_stream, cErrorMsg, pSession, cRunInfo, iRetValue);
    return iRetValue;
}

int32 MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA(SOBSession* pSession, obb_stream& in, obb_stream& out)
{
    static const char* SZ_FUNCTION_INFO = "query_cycleRunData(test.sdl,MFirstTest::IGetCycleRunData::query_cycleRunData())";
	static const char* SZ_MD5SUM_IN = "d41d8cd98f00b204e9800998ecf8427e";
	static const char* SZ_MD5SUM_OUT = "50e7409cc3cba0f0c1b1091279b29dc3";
   CSdlSvcImplRunInfo cRunInfo(pSession, in, SZ_FUNCTION_INFO);
   int32 iRetValue = SDL_FAIL, rc;
   CBSErrorMsg cErrorMsg;
	if(in.marshaller().encoder() == NULL)
	{
		cErrorMsg.set_all(iRetValue, "Input param obb_stream is invalid", SZ_FUNCTION_INFO);
		cRunInfo.report_failure(iRetValue, &cErrorMsg);
		return iRetValue;
	}
	if(NULL == pSession)
	{
		cErrorMsg.set_all(iRetValue, "Input param pSession is null", SZ_FUNCTION_INFO);
		cRunInfo.report_failure(iRetValue, &cErrorMsg);
		return iRetValue;
	}
    pSession->add_property(SDL_MODULE_NAME, "MFirstTest");
    pSession->add_property(SDL_INTERFACE_NAME, "IGetCycleRunData");
    pSession->add_property(SDL_FUNCTION_NAME, "query_cycleRunData");
    pSession->add_property(SDL_FILE_NAME, "test.sdl");
    CObbMarshallingVisitor cMarshaller(out);
    CObbUnmarshallingVisitor cUnmarshaller(in);
    int32 iListSize;
    const CSdlTypeInfo* pTypeInfo4In, * pTypeInfo4Out;
    const SSdlMemberTypeInfo* pMemberTypeInfo4In, * pMemberTypeInfo4Out;
    if ( !MFirstTest::IGetCycleRunData::get_paramInfo("query_cycleRunData", pTypeInfo4In, pTypeInfo4Out,
        pMemberTypeInfo4In, pMemberTypeInfo4Out) )
    {
        iRetValue = OBE_SVR_NO_IMPLEMENT;
        cErrorMsg.set_all(iRetValue, SZ_FUNCTION_NOT_FOUND, SZ_FUNCTION_INFO);
        cRunInfo.report_failure(iRetValue, &cErrorMsg);
        return iRetValue;
    }
    CSdlBasicParamObject cParamIn(true, 0 + 1, pTypeInfo4In, pMemberTypeInfo4In, pSession);
    CSdlBasicParamObject cParamOut(false, 1 + 1, pTypeInfo4Out, pMemberTypeInfo4Out, &iListSize, &cErrorMsg);
    try {
        if ( (rc = cUnmarshaller.visit(cParamIn)) < 0 )
        {
            iRetValue = rc;
            cErrorMsg.set_all(rc, cUnmarshaller.get_errorMsg().c_str(), SZ_FUNCTION_INFO);
            CAIException e(4001);
            e << "Unmarshaller error, code=" << rc << ", msg=" << cUnmarshaller.get_errorMsg();
            throw e;
        }
        if ( before_callServer("MFirstTest::IGetCycleRunData", "query_cycleRunData",
                        in, out, &cErrorMsg, pSession, cRunInfo) )  

        {
          ::MFirstTest::CIGetCycleRunDataImp cIGetCycleRunDataImp;
          try {
	          iRetValue = cIGetCycleRunDataImp.query_cycleRunData(pSession, iListSize, cErrorMsg);
	       }
          catch( CBSErrorMsg &e ) {
		     cErrorMsg.set_all(e.get_errorCode(), e.get_errorMsg().c_str(), e.get_hint().c_str(),
                  e.get_minErrorCode());
          }
        }
        if ( (rc = cMarshaller.visit(cParamOut)) < 0 )
        {
            iRetValue = rc;
            cErrorMsg.set_all(rc, cMarshaller.get_errorMsg().c_str(), SZ_FUNCTION_INFO);
            goto lblError4query_cycleRunData;
        }
    }
    catch(CBSErrorMsg &e) {
        iRetValue = OBE_SVR_CALL_APP;
        cErrorMsg.set_all(e.get_errorCode(), e.get_errorMsg().c_str(), e.get_hint().c_str(), e.get_minErrorCode());
    }
    catch(CAIException &e) {
        iRetValue = OBE_SVR_CALL_APP;
        cErrorMsg.set_all(e.get_code(), e.get_message().c_str(), e.get_logrecord().c_str(), 0);
        after_callServer("MFirstTest::IGetCycleRunData", "query_cycleRunData",
                        in, out, &cErrorMsg, pSession, cRunInfo, iRetValue);
        throw e;
    }
    catch(...){
        iRetValue = OBE_SVR_UNCAUGHT_EXCEPTION;
        cErrorMsg.set_all(iRetValue, SZ_SERVICE_EXCEPTION, SZ_FUNCTION_INFO);
    }
    lblError4query_cycleRunData:
        after_callServer("MFirstTest::IGetCycleRunData", "query_cycleRunData",
                        in, out, &cErrorMsg, pSession, cRunInfo, iRetValue);
    return iRetValue;
}

int32 LOCAL_MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA(SOBSession* pSession, CSdlBasicParamObject& in, CSdlBasicParamObject& out)
{
    static const char* SZ_FUNCTION_INFO = "local_query_cycleRunData(test.sdl,MFirstTest::IGetCycleRunData::query_cycleRunData())";
	static const char* SZ_MD5SUM_IN = "d41d8cd98f00b204e9800998ecf8427e";
	static const char* SZ_MD5SUM_OUT = "50e7409cc3cba0f0c1b1091279b29dc3";
   obb_stream in_stream, out_stream;
   CSdlSvcImplRunInfo cRunInfo(pSession, in_stream, SZ_FUNCTION_INFO);
   int32 iRetValue = SDL_FAIL, rc;
	CBSErrorMsg errorMsg;
	if(NULL == pSession)
	{
		errorMsg.set_all(iRetValue, "Input param pSession is null", SZ_FUNCTION_INFO);
		cRunInfo.report_failure(iRetValue, &errorMsg);
		return iRetValue;
	}
    pSession->add_property(SDL_MODULE_NAME, "MFirstTest");
    pSession->add_property(SDL_INTERFACE_NAME, "IGetCycleRunData");
    pSession->add_property(SDL_FUNCTION_NAME, "query_cycleRunData");
    pSession->add_property(SDL_FILE_NAME, "test.sdl");
    CBSErrorMsg* cErrorMsg = 0;
    int32* iListSize;

    iListSize= (int32*) out.get_memberAddr(0);
	 if(iListSize == NULL)
	 {
		errorMsg.set_all(iRetValue, "iListSize is null", SZ_FUNCTION_INFO);
		cRunInfo.report_failure(iRetValue, &errorMsg);
		return iRetValue;
	 }
    cErrorMsg = (CBSErrorMsg*) out.get_memberAddr(1);
	 if(cErrorMsg == NULL)
	 {
		errorMsg.set_all(iRetValue, "cErrorMsg is null", SZ_FUNCTION_INFO);
		cRunInfo.report_failure(iRetValue, &errorMsg);
		return iRetValue;
	 }
    try {
        if ( before_callServer("MFirstTest::IGetCycleRunData", "query_cycleRunData",
                        in_stream, out_stream, cErrorMsg, pSession, cRunInfo) )  
        {
          ::MFirstTest::CIGetCycleRunDataImp cIGetCycleRunDataImp;
          try {
	          iRetValue = cIGetCycleRunDataImp.query_cycleRunData(pSession, *iListSize, *cErrorMsg);
	       }
          catch( CBSErrorMsg &e ) {
		     cErrorMsg->set_all(e.get_errorCode(), e.get_errorMsg().c_str(), e.get_hint().c_str(),
                  e.get_minErrorCode());
          }
        }
    }
    catch(CBSErrorMsg &e) {
        iRetValue = OBE_SVR_CALL_APP;
        cErrorMsg->set_all(e.get_errorCode(), e.get_errorMsg().c_str(), e.get_hint().c_str(), e.get_minErrorCode());
    }
    catch(CAIException &e) {
        iRetValue = OBE_SVR_CALL_APP;
        cErrorMsg->set_all(e.get_code(), e.get_message().c_str(), e.get_logrecord().c_str(), 0);
        after_callServer("MFirstTest::IGetCycleRunData", "query_cycleRunData",
                        in_stream, out_stream, cErrorMsg, pSession, cRunInfo, iRetValue);
        throw e;
    }
    catch(...){
        iRetValue = OBE_SVR_UNCAUGHT_EXCEPTION;
        cErrorMsg->set_all(iRetValue, SZ_SERVICE_EXCEPTION, SZ_FUNCTION_INFO);
    }
    lblError4query_cycleRunData:
        after_callServer("MFirstTest::IGetCycleRunData", "query_cycleRunData",
                        in_stream, out_stream, cErrorMsg, pSession, cRunInfo, iRetValue);
    return iRetValue;
}

int32 MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA(SOBSession* pSession, obb_stream& in, obb_stream& out)
{
    static const char* SZ_FUNCTION_INFO = "insert_cycleRunData(test.sdl,MFirstTest::IInsertCycleRunData::insert_cycleRunData())";
	static const char* SZ_MD5SUM_IN = "033b47fa6a0ff9c17c7ba4262937e2cc";
	static const char* SZ_MD5SUM_OUT = "d41d8cd98f00b204e9800998ecf8427e";
   CSdlSvcImplRunInfo cRunInfo(pSession, in, SZ_FUNCTION_INFO);
   int32 iRetValue = SDL_FAIL, rc;
   CBSErrorMsg cErrorMsg;
	if(in.marshaller().encoder() == NULL)
	{
		cErrorMsg.set_all(iRetValue, "Input param obb_stream is invalid", SZ_FUNCTION_INFO);
		cRunInfo.report_failure(iRetValue, &cErrorMsg);
		return iRetValue;
	}
	if(NULL == pSession)
	{
		cErrorMsg.set_all(iRetValue, "Input param pSession is null", SZ_FUNCTION_INFO);
		cRunInfo.report_failure(iRetValue, &cErrorMsg);
		return iRetValue;
	}
    pSession->add_property(SDL_MODULE_NAME, "MFirstTest");
    pSession->add_property(SDL_INTERFACE_NAME, "IInsertCycleRunData");
    pSession->add_property(SDL_FUNCTION_NAME, "insert_cycleRunData");
    pSession->add_property(SDL_FILE_NAME, "test.sdl");
    CObbMarshallingVisitor cMarshaller(out);
    CObbUnmarshallingVisitor cUnmarshaller(in);
    ::MTestDef::SCycleRunInfo sCycleRunInfo;
    const CSdlTypeInfo* pTypeInfo4In, * pTypeInfo4Out;
    const SSdlMemberTypeInfo* pMemberTypeInfo4In, * pMemberTypeInfo4Out;
    if ( !MFirstTest::IInsertCycleRunData::get_paramInfo("insert_cycleRunData", pTypeInfo4In, pTypeInfo4Out,
        pMemberTypeInfo4In, pMemberTypeInfo4Out) )
    {
        iRetValue = OBE_SVR_NO_IMPLEMENT;
        cErrorMsg.set_all(iRetValue, SZ_FUNCTION_NOT_FOUND, SZ_FUNCTION_INFO);
        cRunInfo.report_failure(iRetValue, &cErrorMsg);
        return iRetValue;
    }
    CSdlBasicParamObject cParamIn(true, 1 + 1, pTypeInfo4In, pMemberTypeInfo4In, &sCycleRunInfo, pSession);
    CSdlBasicParamObject cParamOut(false, 0 + 1, pTypeInfo4Out, pMemberTypeInfo4Out, &cErrorMsg);
    try {
        if ( (rc = cUnmarshaller.visit(cParamIn)) < 0 )
        {
            iRetValue = rc;
            cErrorMsg.set_all(rc, cUnmarshaller.get_errorMsg().c_str(), SZ_FUNCTION_INFO);
            CAIException e(4001);
            e << "Unmarshaller error, code=" << rc << ", msg=" << cUnmarshaller.get_errorMsg();
            throw e;
        }
        if ( before_callServer("MFirstTest::IInsertCycleRunData", "insert_cycleRunData",
                        in, out, &cErrorMsg, pSession, cRunInfo) )  

        {
          ::MFirstTest::CIInsertCycleRunDataImp cIInsertCycleRunDataImp;
          try {
	          iRetValue = cIInsertCycleRunDataImp.insert_cycleRunData(pSession, sCycleRunInfo, cErrorMsg);
	       }
          catch( CBSErrorMsg &e ) {
		     cErrorMsg.set_all(e.get_errorCode(), e.get_errorMsg().c_str(), e.get_hint().c_str(),
                  e.get_minErrorCode());
          }
        }
        if ( (rc = cMarshaller.visit(cParamOut)) < 0 )
        {
            iRetValue = rc;
            cErrorMsg.set_all(rc, cMarshaller.get_errorMsg().c_str(), SZ_FUNCTION_INFO);
            goto lblError4insert_cycleRunData;
        }
    }
    catch(CBSErrorMsg &e) {
        iRetValue = OBE_SVR_CALL_APP;
        cErrorMsg.set_all(e.get_errorCode(), e.get_errorMsg().c_str(), e.get_hint().c_str(), e.get_minErrorCode());
    }
    catch(CAIException &e) {
        iRetValue = OBE_SVR_CALL_APP;
        cErrorMsg.set_all(e.get_code(), e.get_message().c_str(), e.get_logrecord().c_str(), 0);
        after_callServer("MFirstTest::IInsertCycleRunData", "insert_cycleRunData",
                        in, out, &cErrorMsg, pSession, cRunInfo, iRetValue);
        throw e;
    }
    catch(...){
        iRetValue = OBE_SVR_UNCAUGHT_EXCEPTION;
        cErrorMsg.set_all(iRetValue, SZ_SERVICE_EXCEPTION, SZ_FUNCTION_INFO);
    }
    lblError4insert_cycleRunData:
        after_callServer("MFirstTest::IInsertCycleRunData", "insert_cycleRunData",
                        in, out, &cErrorMsg, pSession, cRunInfo, iRetValue);
    return iRetValue;
}

int32 LOCAL_MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA(SOBSession* pSession, CSdlBasicParamObject& in, CSdlBasicParamObject& out)
{
    static const char* SZ_FUNCTION_INFO = "local_insert_cycleRunData(test.sdl,MFirstTest::IInsertCycleRunData::insert_cycleRunData())";
	static const char* SZ_MD5SUM_IN = "033b47fa6a0ff9c17c7ba4262937e2cc";
	static const char* SZ_MD5SUM_OUT = "d41d8cd98f00b204e9800998ecf8427e";
   obb_stream in_stream, out_stream;
   CSdlSvcImplRunInfo cRunInfo(pSession, in_stream, SZ_FUNCTION_INFO);
   int32 iRetValue = SDL_FAIL, rc;
	CBSErrorMsg errorMsg;
	if(NULL == pSession)
	{
		errorMsg.set_all(iRetValue, "Input param pSession is null", SZ_FUNCTION_INFO);
		cRunInfo.report_failure(iRetValue, &errorMsg);
		return iRetValue;
	}
    pSession->add_property(SDL_MODULE_NAME, "MFirstTest");
    pSession->add_property(SDL_INTERFACE_NAME, "IInsertCycleRunData");
    pSession->add_property(SDL_FUNCTION_NAME, "insert_cycleRunData");
    pSession->add_property(SDL_FILE_NAME, "test.sdl");
    CBSErrorMsg* cErrorMsg = 0;
    ::MTestDef::SCycleRunInfo* sCycleRunInfo;

    sCycleRunInfo= (::MTestDef::SCycleRunInfo*) in.get_memberAddr(0);
	 if(sCycleRunInfo == NULL)
	 {
		errorMsg.set_all(iRetValue, "sCycleRunInfo is null", SZ_FUNCTION_INFO);
		cRunInfo.report_failure(iRetValue, &errorMsg);
		return iRetValue;
	 }
    cErrorMsg = (CBSErrorMsg*) out.get_memberAddr(0);
	 if(cErrorMsg == NULL)
	 {
		errorMsg.set_all(iRetValue, "cErrorMsg is null", SZ_FUNCTION_INFO);
		cRunInfo.report_failure(iRetValue, &errorMsg);
		return iRetValue;
	 }
    try {
        if ( before_callServer("MFirstTest::IInsertCycleRunData", "insert_cycleRunData",
                        in_stream, out_stream, cErrorMsg, pSession, cRunInfo) )  
        {
          ::MFirstTest::CIInsertCycleRunDataImp cIInsertCycleRunDataImp;
          try {
	          iRetValue = cIInsertCycleRunDataImp.insert_cycleRunData(pSession, *sCycleRunInfo, *cErrorMsg);
	       }
          catch( CBSErrorMsg &e ) {
		     cErrorMsg->set_all(e.get_errorCode(), e.get_errorMsg().c_str(), e.get_hint().c_str(),
                  e.get_minErrorCode());
          }
        }
    }
    catch(CBSErrorMsg &e) {
        iRetValue = OBE_SVR_CALL_APP;
        cErrorMsg->set_all(e.get_errorCode(), e.get_errorMsg().c_str(), e.get_hint().c_str(), e.get_minErrorCode());
    }
    catch(CAIException &e) {
        iRetValue = OBE_SVR_CALL_APP;
        cErrorMsg->set_all(e.get_code(), e.get_message().c_str(), e.get_logrecord().c_str(), 0);
        after_callServer("MFirstTest::IInsertCycleRunData", "insert_cycleRunData",
                        in_stream, out_stream, cErrorMsg, pSession, cRunInfo, iRetValue);
        throw e;
    }
    catch(...){
        iRetValue = OBE_SVR_UNCAUGHT_EXCEPTION;
        cErrorMsg->set_all(iRetValue, SZ_SERVICE_EXCEPTION, SZ_FUNCTION_INFO);
    }
    lblError4insert_cycleRunData:
        after_callServer("MFirstTest::IInsertCycleRunData", "insert_cycleRunData",
                        in_stream, out_stream, cErrorMsg, pSession, cRunInfo, iRetValue);
    return iRetValue;
}
