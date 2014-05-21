//******************************************************************
//* Copyright (c) 2003-2009, Asiainfo HangZhou. All rights reserved.
//* SDL generated C++ implementation header file for OpenBOSS.
//* Source filename: ./idl/test.sdl
//* Generated date:  2014-05-21 04:36:17
//* Note: This is a auto-generated file, DON'T MODIFY IT!
//******************************************************************

#ifndef __OPEN_BOSS_IMP_TEST_IMP__
#define __OPEN_BOSS_IMP_TEST_IMP__

#include "compile.h"

struct SOBSession;
class obb_stream;
class CSdlBasicParamObject;

extern "C" {

int32 MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD(SOBSession* pSession, obb_stream& in, obb_stream& out);

int32 LOCAL_MFIRSTTEST_ITESTHELLOWORLD_OUT_HELLOWORLD(SOBSession* pSession, CSdlBasicParamObject& in, CSdlBasicParamObject& out);

int32 MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA(SOBSession* pSession, obb_stream& in, obb_stream& out);

int32 LOCAL_MFIRSTTEST_IGETCYCLERUNDATA_QUERY_CYCLERUNDATA(SOBSession* pSession, CSdlBasicParamObject& in, CSdlBasicParamObject& out);

int32 MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA(SOBSession* pSession, obb_stream& in, obb_stream& out);

int32 LOCAL_MFIRSTTEST_IINSERTCYCLERUNDATA_INSERT_CYCLERUNDATA(SOBSession* pSession, CSdlBasicParamObject& in, CSdlBasicParamObject& out);
};

#endif

