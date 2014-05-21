//******************************************************************
//* Copyright (c) 2003-2009, Asiainfo HangZhou. All rights reserved.
//* SDL generated C++ client skeleton cpp file.
//* Source filename: ./idl/test_db.sdl
//* Generated date:  2014-05-21 04:36:18
//* Note: This is a auto-generated file, DON'T MODIFY IT!
//******************************************************************

#include <string.h>
#include <iterator>
#include "public/common/sdlbuffer/sdl_basic_visitors.h"
#include "public/common/sdlbuffer/sdl_type_factory.h"
#include "test_db_sdl_c.h"
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

#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MCACYCLERUNDB_CCACYCLERUN)
// struct definition for MCaCycleRunDb::CCaCycleRun
static CSdlTypeInfo s_cTypeInfo4MCaCycleRunDb_CCaCycleRun(SDL_STRUCT, "MCaCycleRunDb::CCaCycleRun",
    CSdlTypeInfo::create_typeDescription(__get_sourceFileName().c_str(),
        __LINE__, s_szCompileDate, s_szCompileTime).c_str(),
    sizeof(MCaCycleRunDb::CCaCycleRun), 14,
    "int64", SDL_INT64,
    "int32", SDL_INT32,
    "int32", SDL_INT32,
    "int32", SDL_INT32,
    "int32", SDL_INT32,
    "int32", SDL_INT32,
    "int32", SDL_INT32,
    "CBSDateTime", SDL_DATETIME,
    "CBSDateTime", SDL_DATETIME,
    "int32", SDL_INT32,
    "int16", SDL_INT16,
    "int16", SDL_INT16,
    "int16", SDL_INT16,
    "int16", SDL_INT16);
static CSdlTypeInfoImpl s_cTypeInfoImpl4MCaCycleRunDb_CCaCycleRun(s_cTypeInfo4MCaCycleRunDb_CCaCycleRun);

static SSdlMemberTypeInfo s_MCaCycleRunDb_CCaCycleRun_MemberTypeInfo[14 + 1] =
{
    { SDL_INT64, "ACCT_ID", sizeof(int64), 0, 22, reinterpret_cast<FuncSdlAssign>(sdl_assignInt64),I64(0x1),0,"int64",0},
    { SDL_INT32, "CYCLE_SPEC_ID", sizeof(int32), 0, 22, reinterpret_cast<FuncSdlAssign>(sdl_assignInt32),I64(0x2),1,"int32",0},
    { SDL_INT32, "REAL_CYCLE_SPEC_ID", sizeof(int32), 0, 22, reinterpret_cast<FuncSdlAssign>(sdl_assignInt32),I64(0x4),2,"int32",0},
    { SDL_INT32, "LAST_CYCLE_BEGIN", sizeof(int32), 0, 22, reinterpret_cast<FuncSdlAssign>(sdl_assignInt32),I64(0x8),3,"int32",0},
    { SDL_INT32, "LAST_CYCLE_END", sizeof(int32), 0, 22, reinterpret_cast<FuncSdlAssign>(sdl_assignInt32),I64(0x10),4,"int32",0},
    { SDL_INT32, "CURR_CYCLE_BEGIN", sizeof(int32), 0, 22, reinterpret_cast<FuncSdlAssign>(sdl_assignInt32),I64(0x20),5,"int32",0},
    { SDL_INT32, "CURR_CYCLE_END", sizeof(int32), 0, 22, reinterpret_cast<FuncSdlAssign>(sdl_assignInt32),I64(0x40),6,"int32",0},
    { SDL_DATETIME, "MOD_DATE", sizeof(CBSDateTime), 0, 7, reinterpret_cast<FuncSdlAssign>(sdl_assignDateTime),I64(0x80),7,"CBSDateTime",0},
    { SDL_DATETIME, "CREATE_DATE", sizeof(CBSDateTime), 0, 7, reinterpret_cast<FuncSdlAssign>(sdl_assignDateTime),I64(0x100),8,"CBSDateTime",0},
    { SDL_INT32, "BILL_DATE", sizeof(int32), 0, 22, reinterpret_cast<FuncSdlAssign>(sdl_assignInt32),I64(0x200),9,"int32",0},
    { SDL_INT16, "CYCLE_STS", sizeof(int16), 0, 22, reinterpret_cast<FuncSdlAssign>(sdl_assignInt16),I64(0x400),10,"int16",0},
    { SDL_INT16, "BILL_RUN_STS", sizeof(int16), 0, 22, reinterpret_cast<FuncSdlAssign>(sdl_assignInt16),I64(0x800),11,"int16",0},
    { SDL_INT16, "BILL_DATA_STS", sizeof(int16), 0, 22, reinterpret_cast<FuncSdlAssign>(sdl_assignInt16),I64(0x1000),12,"int16",0},
    { SDL_INT16, "CONFIRM_BILL_STS", sizeof(int16), 0, 22, reinterpret_cast<FuncSdlAssign>(sdl_assignInt16),I64(0x2000),13,"int16",0},
    { -1, 0, 0, 0, 0, 0 ,0}
};

extern "C" SSdlMemberTypeAddress get_MCaCycleRunDb_CCaCycleRun_MemberTypeAddress()
{
    SSdlMemberTypeAddress Addr;
    Addr.addr = s_MCaCycleRunDb_CCaCycleRun_MemberTypeInfo;
    Addr.size = 14;
    return Addr;
}
extern "C" const char* get_MCaCycleRunDb_CCaCycleRun_MemberType_IndexString4Lua()
{
    static char MCaCycleRunDb_CCaCycleRun_MemberType_IndexString[] = 
"\
local MCaCycleRunDb_CCaCycleRun_ACCT_ID=0;\n\
local MCaCycleRunDb_CCaCycleRun_CYCLE_SPEC_ID=1;\n\
local MCaCycleRunDb_CCaCycleRun_REAL_CYCLE_SPEC_ID=2;\n\
local MCaCycleRunDb_CCaCycleRun_LAST_CYCLE_BEGIN=3;\n\
local MCaCycleRunDb_CCaCycleRun_LAST_CYCLE_END=4;\n\
local MCaCycleRunDb_CCaCycleRun_CURR_CYCLE_BEGIN=5;\n\
local MCaCycleRunDb_CCaCycleRun_CURR_CYCLE_END=6;\n\
local MCaCycleRunDb_CCaCycleRun_MOD_DATE=7;\n\
local MCaCycleRunDb_CCaCycleRun_CREATE_DATE=8;\n\
local MCaCycleRunDb_CCaCycleRun_BILL_DATE=9;\n\
local MCaCycleRunDb_CCaCycleRun_CYCLE_STS=10;\n\
local MCaCycleRunDb_CCaCycleRun_BILL_RUN_STS=11;\n\
local MCaCycleRunDb_CCaCycleRun_BILL_DATA_STS=12;\n\
local MCaCycleRunDb_CCaCycleRun_CONFIRM_BILL_STS=13;\n\
";
    return MCaCycleRunDb_CCaCycleRun_MemberType_IndexString;
}
//static MapSSdlMemberTypeInfo map_MCaCycleRunDb_CCaCycleRun_MapMemberTypeInfo;
//static SMapSSdlMemberTypeInfo s_MCaCycleRunDb_CCaCycleRun_MapMemberTypeInfo = {map_MCaCycleRunDb_CCaCycleRun_MapMemberTypeInfo};
static SMapSSdlMemberTypeInfo s_MCaCycleRunDb_CCaCycleRun_MapMemberTypeInfo;
static CMapSdlStructMemberTypeInitializer s_MapMCaCycleRunDb_CCaCycleRun(&s_MCaCycleRunDb_CCaCycleRun_MapMemberTypeInfo,s_MCaCycleRunDb_CCaCycleRun_MemberTypeInfo,14);
static CSdlStructMemberTypeInitializer s_MCaCycleRunDb_CCaCycleRun(s_MCaCycleRunDb_CCaCycleRun_MemberTypeInfo,
    MCaCycleRunDb::CCaCycleRun());

const uint64 MCaCycleRunDb::CCaCycleRun::BITS_ALL_MARKER = I64(0x3fff);
const uint64 MCaCycleRunDb::CCaCycleRun::BITS_NOT_NULL_MARKER = I64(0x5ff);
const uint64 MCaCycleRunDb::CCaCycleRun::BITS_DB_MARKER = I64(0x3fff);
const uint64 MCaCycleRunDb::CCaCycleRun::BITS_NOT_NULL_MARKER_ARR[] = {I64(0x5ff)};
const uint64 MCaCycleRunDb::CCaCycleRun::BITS_DB_MARKER_ARR[] = {I64(0x3fff)};
const int MCaCycleRunDb::CCaCycleRun::IMPORT_TABLE_COUNT = 1;
const int MCaCycleRunDb::CCaCycleRun::MEMBER_FIELD_COUNT = 14;
const char* MCaCycleRunDb::CCaCycleRun::SZ_TYPE_NAME = "MCaCycleRunDb::CCaCycleRun";
const SSdlMemberTypeInfo* MCaCycleRunDb::CCaCycleRun::ARRAY_MEMBER_TYPE_INFO = s_MCaCycleRunDb_CCaCycleRun_MemberTypeInfo;
const char* MCaCycleRunDb::CCaCycleRun::ARRAY_IMPORT_TABLES[] = 
{
    "CA_CYCLE_RUN",
    0
};

void inline MCaCycleRunDb::CCaCycleRun::init()
{
    for(int i=0;i<1;i++)
    {
        m_arrllMarker[i] = 0;
        m_arrllUsedMarker[i] = 0;
    }
    m_pllUsedMarker = m_arrllUsedMarker;
    m_pllMarker = m_arrllMarker;
    m_pllNotNullMarker = const_cast<uint64*>(BITS_NOT_NULL_MARKER_ARR);
    m_pllDbMarker = const_cast<uint64*>(BITS_DB_MARKER_ARR);
    m_iMarkerNum = 1;
    m_iFieldNum = 14;
 /* do nothing */ 
}

MCaCycleRunDb::CCaCycleRun::CCaCycleRun() : CSdlBasicStructObject(),
    m_llAcctId(0),
    m_iCycleSpecId(0),
    m_iRealCycleSpecId(0),
    m_iLastCycleBegin(0),
    m_iLastCycleEnd(0),
    m_iCurrCycleBegin(0),
    m_iCurrCycleEnd(0),
    m_dtmModDate(),
    m_dtmCreateDate(),
    m_iBillDate(0),
    m_nCycleSts(0),
    m_nBillRunSts(0),
    m_nBillDataSts(0),
    m_nConfirmBillSts(0)
{
	init();
}

MCaCycleRunDb::CCaCycleRun::CCaCycleRun(obb_stream& stream) : CSdlBasicStructObject() ,
    m_llAcctId(0),
    m_iCycleSpecId(0),
    m_iRealCycleSpecId(0),
    m_iLastCycleBegin(0),
    m_iLastCycleEnd(0),
    m_iCurrCycleBegin(0),
    m_iCurrCycleEnd(0),
    m_dtmModDate(),
    m_dtmCreateDate(),
    m_iBillDate(0),
    m_nCycleSts(0),
    m_nBillRunSts(0),
    m_nBillDataSts(0),
    m_nConfirmBillSts(0)
{ 
	init();
	stream >> *this;
}

MCaCycleRunDb::CCaCycleRun::CCaCycleRun(const CCaCycleRun& rhs) : CSdlBasicStructObject(rhs),
    m_llAcctId(0),
    m_iCycleSpecId(0),
    m_iRealCycleSpecId(0),
    m_iLastCycleBegin(0),
    m_iLastCycleEnd(0),
    m_iCurrCycleBegin(0),
    m_iCurrCycleEnd(0),
    m_dtmModDate(),
    m_dtmCreateDate(),
    m_iBillDate(0),
    m_nCycleSts(0),
    m_nBillRunSts(0),
    m_nBillDataSts(0),
    m_nConfirmBillSts(0)
{ 
    init();
    m_iMarkerNum = rhs.m_iMarkerNum;
    m_iFieldNum = rhs.m_iFieldNum;
    for(int i=0;i<rhs.get_markerNum();i++)
    {
        m_pllUsedMarker[i] = rhs.m_pllUsedMarker[i];
        m_pllMarker[i] = rhs.m_pllMarker[i];
    }
    if (rhs.m_pllUsedMarker[0] & BIT_ACCT_ID)
        m_llAcctId = rhs.m_llAcctId;
    if (rhs.m_pllUsedMarker[0] & BIT_CYCLE_SPEC_ID)
        m_iCycleSpecId = rhs.m_iCycleSpecId;
    if (rhs.m_pllUsedMarker[0] & BIT_REAL_CYCLE_SPEC_ID)
        m_iRealCycleSpecId = rhs.m_iRealCycleSpecId;
    if (rhs.m_pllUsedMarker[0] & BIT_LAST_CYCLE_BEGIN)
        m_iLastCycleBegin = rhs.m_iLastCycleBegin;
    if (rhs.m_pllUsedMarker[0] & BIT_LAST_CYCLE_END)
        m_iLastCycleEnd = rhs.m_iLastCycleEnd;
    if (rhs.m_pllUsedMarker[0] & BIT_CURR_CYCLE_BEGIN)
        m_iCurrCycleBegin = rhs.m_iCurrCycleBegin;
    if (rhs.m_pllUsedMarker[0] & BIT_CURR_CYCLE_END)
        m_iCurrCycleEnd = rhs.m_iCurrCycleEnd;
    if (rhs.m_pllUsedMarker[0] & BIT_MOD_DATE)
        m_dtmModDate = rhs.m_dtmModDate;
    if (rhs.m_pllUsedMarker[0] & BIT_CREATE_DATE)
        m_dtmCreateDate = rhs.m_dtmCreateDate;
    if (rhs.m_pllUsedMarker[0] & BIT_BILL_DATE)
        m_iBillDate = rhs.m_iBillDate;
    if (rhs.m_pllUsedMarker[0] & BIT_CYCLE_STS)
        m_nCycleSts = rhs.m_nCycleSts;
    if (rhs.m_pllUsedMarker[0] & BIT_BILL_RUN_STS)
        m_nBillRunSts = rhs.m_nBillRunSts;
    if (rhs.m_pllUsedMarker[0] & BIT_BILL_DATA_STS)
        m_nBillDataSts = rhs.m_nBillDataSts;
    if (rhs.m_pllUsedMarker[0] & BIT_CONFIRM_BILL_STS)
        m_nConfirmBillSts = rhs.m_nConfirmBillSts;
}

MCaCycleRunDb::CCaCycleRun::~CCaCycleRun()
{ 
}

MCaCycleRunDb::CCaCycleRun& MCaCycleRunDb::CCaCycleRun::operator=(const MCaCycleRunDb::CCaCycleRun& rhs) 
{
    if ( this != &rhs )
    {
        Clear();
        CSdlBasicStructObject::operator = (rhs);
        m_iMarkerNum = rhs.m_iMarkerNum;
        m_iFieldNum = rhs.m_iFieldNum;
        for(int i=0;i<rhs.get_markerNum();i++)
        {
            m_pllUsedMarker[i] = rhs.m_pllUsedMarker[i];
            m_pllMarker[i] = rhs.m_pllMarker[i];
        }
        if (rhs.m_pllUsedMarker[0] & BIT_ACCT_ID)
            m_llAcctId = rhs.m_llAcctId;
        if (rhs.m_pllUsedMarker[0] & BIT_CYCLE_SPEC_ID)
            m_iCycleSpecId = rhs.m_iCycleSpecId;
        if (rhs.m_pllUsedMarker[0] & BIT_REAL_CYCLE_SPEC_ID)
            m_iRealCycleSpecId = rhs.m_iRealCycleSpecId;
        if (rhs.m_pllUsedMarker[0] & BIT_LAST_CYCLE_BEGIN)
            m_iLastCycleBegin = rhs.m_iLastCycleBegin;
        if (rhs.m_pllUsedMarker[0] & BIT_LAST_CYCLE_END)
            m_iLastCycleEnd = rhs.m_iLastCycleEnd;
        if (rhs.m_pllUsedMarker[0] & BIT_CURR_CYCLE_BEGIN)
            m_iCurrCycleBegin = rhs.m_iCurrCycleBegin;
        if (rhs.m_pllUsedMarker[0] & BIT_CURR_CYCLE_END)
            m_iCurrCycleEnd = rhs.m_iCurrCycleEnd;
        if (rhs.m_pllUsedMarker[0] & BIT_MOD_DATE)
            m_dtmModDate = rhs.m_dtmModDate;
        if (rhs.m_pllUsedMarker[0] & BIT_CREATE_DATE)
            m_dtmCreateDate = rhs.m_dtmCreateDate;
        if (rhs.m_pllUsedMarker[0] & BIT_BILL_DATE)
            m_iBillDate = rhs.m_iBillDate;
        if (rhs.m_pllUsedMarker[0] & BIT_CYCLE_STS)
            m_nCycleSts = rhs.m_nCycleSts;
        if (rhs.m_pllUsedMarker[0] & BIT_BILL_RUN_STS)
            m_nBillRunSts = rhs.m_nBillRunSts;
        if (rhs.m_pllUsedMarker[0] & BIT_BILL_DATA_STS)
            m_nBillDataSts = rhs.m_nBillDataSts;
        if (rhs.m_pllUsedMarker[0] & BIT_CONFIRM_BILL_STS)
            m_nConfirmBillSts = rhs.m_nConfirmBillSts;
    }
    return *this;
}

bool MCaCycleRunDb::CCaCycleRun::operator==(const MCaCycleRunDb::CCaCycleRun& rhs) const
{
    if ( this == &rhs ) return true;
    if(m_iMarkerNum != rhs.m_iMarkerNum) return false;
    if(m_iFieldNum != rhs.m_iFieldNum) return false;
    for(int i=0;i<m_iMarkerNum;i++)
    {
        if ( m_pllUsedMarker[i] != rhs.m_pllUsedMarker[i] || m_pllMarker[i] != rhs.m_pllMarker[i] )
        {
            return false;
        }
    }
    if ((m_pllMarker[0]&BIT_ACCT_ID) && !(m_llAcctId == rhs.m_llAcctId)) return false;
    if ((m_pllMarker[0]&BIT_CYCLE_SPEC_ID) && !(m_iCycleSpecId == rhs.m_iCycleSpecId)) return false;
    if ((m_pllMarker[0]&BIT_REAL_CYCLE_SPEC_ID) && !(m_iRealCycleSpecId == rhs.m_iRealCycleSpecId)) return false;
    if ((m_pllMarker[0]&BIT_LAST_CYCLE_BEGIN) && !(m_iLastCycleBegin == rhs.m_iLastCycleBegin)) return false;
    if ((m_pllMarker[0]&BIT_LAST_CYCLE_END) && !(m_iLastCycleEnd == rhs.m_iLastCycleEnd)) return false;
    if ((m_pllMarker[0]&BIT_CURR_CYCLE_BEGIN) && !(m_iCurrCycleBegin == rhs.m_iCurrCycleBegin)) return false;
    if ((m_pllMarker[0]&BIT_CURR_CYCLE_END) && !(m_iCurrCycleEnd == rhs.m_iCurrCycleEnd)) return false;
    if ((m_pllMarker[0]&BIT_MOD_DATE) && !(m_dtmModDate == rhs.m_dtmModDate)) return false;
    if ((m_pllMarker[0]&BIT_CREATE_DATE) && !(m_dtmCreateDate == rhs.m_dtmCreateDate)) return false;
    if ((m_pllMarker[0]&BIT_BILL_DATE) && !(m_iBillDate == rhs.m_iBillDate)) return false;
    if ((m_pllMarker[0]&BIT_CYCLE_STS) && !(m_nCycleSts == rhs.m_nCycleSts)) return false;
    if ((m_pllMarker[0]&BIT_BILL_RUN_STS) && !(m_nBillRunSts == rhs.m_nBillRunSts)) return false;
    if ((m_pllMarker[0]&BIT_BILL_DATA_STS) && !(m_nBillDataSts == rhs.m_nBillDataSts)) return false;
    if ((m_pllMarker[0]&BIT_CONFIRM_BILL_STS) && !(m_nConfirmBillSts == rhs.m_nConfirmBillSts)) return false;
    return true;
}

bool MCaCycleRunDb::CCaCycleRun::operator<(const MCaCycleRunDb::CCaCycleRun& rhs) const
{
    return !( *this == rhs );
/*
	else
	{
		return m_pComparer->lessThan(this,&rhs);
	}
*/
}

const CSdlTypeInfo& MCaCycleRunDb::CCaCycleRun::get_typeInfo() const
{
    return s_cTypeInfo4MCaCycleRunDb_CCaCycleRun;
}

const CSdlBasicStructObject::CClassDesc& MCaCycleRunDb::CCaCycleRun::class_desc() const
{
    static const CSdlBasicStructObject::CClassDesc cClassDesc(BITS_ALL_MARKER,
        BITS_NOT_NULL_MARKER, BITS_DB_MARKER, IMPORT_TABLE_COUNT, MEMBER_FIELD_COUNT,
        SZ_TYPE_NAME, ARRAY_IMPORT_TABLES, s_MCaCycleRunDb_CCaCycleRun_MemberTypeInfo,&s_MCaCycleRunDb_CCaCycleRun_MapMemberTypeInfo);
    return cClassDesc;
}

void MCaCycleRunDb::CCaCycleRun::Clear()
{
	for(int i=0;i<1;i++)
	{
		m_arrllMarker[i] = 0;
		m_arrllUsedMarker[i] = 0;
	}
    m_llAcctId = 0;
    m_iCycleSpecId = 0;
    m_iRealCycleSpecId = 0;
    m_iLastCycleBegin = 0;
    m_iLastCycleEnd = 0;
    m_iCurrCycleBegin = 0;
    m_iCurrCycleEnd = 0;
    m_dtmModDate = CBSDateTime();
    m_dtmCreateDate = CBSDateTime();
    m_iBillDate = 0;
    m_nCycleSts = 0;
    m_nBillRunSts = 0;
    m_nBillDataSts = 0;
    m_nConfirmBillSts = 0;
}

void MCaCycleRunDb::CCaCycleRun::Clear4Pool()
{
	for(int i=0;i<1;i++)
	{
		m_arrllMarker[i] = 0;
		m_arrllUsedMarker[i] = 0;
	}
    m_llAcctId = 0;
    m_iCycleSpecId = 0;
    m_iRealCycleSpecId = 0;
    m_iLastCycleBegin = 0;
    m_iLastCycleEnd = 0;
    m_iCurrCycleBegin = 0;
    m_iCurrCycleEnd = 0;
    m_dtmModDate = CBSDateTime();
    m_dtmCreateDate = CBSDateTime();
    m_iBillDate = 0;
    m_nCycleSts = 0;
    m_nBillRunSts = 0;
    m_nBillDataSts = 0;
    m_nConfirmBillSts = 0;
}

CSdlBasicObject* MCaCycleRunDb::CCaCycleRun::create_object()
{
    return new MCaCycleRunDb::CCaCycleRun();
}
static CSdlCreateObjectInitializer s_MCaCycleRunDb_CCaCycleRun_SdlCreateObjectInitializer("MCaCycleRunDb::CCaCycleRun", MCaCycleRunDb::CCaCycleRun::create_object);

const void* MCaCycleRunDb::CCaCycleRun::get_addressTable(const void* pTable[14]) const
{
    if ( pTable != 0 )
    {
        int i = 0;
        pTable[i++] = &m_llAcctId;
        pTable[i++] = &m_iCycleSpecId;
        pTable[i++] = &m_iRealCycleSpecId;
        pTable[i++] = &m_iLastCycleBegin;
        pTable[i++] = &m_iLastCycleEnd;
        pTable[i++] = &m_iCurrCycleBegin;
        pTable[i++] = &m_iCurrCycleEnd;
        pTable[i++] = &m_dtmModDate;
        pTable[i++] = &m_dtmCreateDate;
        pTable[i++] = &m_iBillDate;
        pTable[i++] = &m_nCycleSts;
        pTable[i++] = &m_nBillRunSts;
        pTable[i++] = &m_nBillDataSts;
        pTable[i++] = &m_nConfirmBillSts;
    }
    return &m_llAcctId;
}
#endif

#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MCACYCLERUNDB_CCACYCLERUNLIST)
// list definition for MCaCycleRunDb::CCaCycleRunList
MCaCycleRunDb::CCaCycleRunList::CCaCycleRunList() : CSdlBasicListObject(),poolvector<MCaCycleRunDb::CCaCycleRun>()
{
}
MCaCycleRunDb::CCaCycleRunList::CCaCycleRunList(obb_stream& stream) : CSdlBasicListObject(),poolvector<MCaCycleRunDb::CCaCycleRun>()
{
	stream >> *this;
}
void MCaCycleRunDb::CCaCycleRunList::Clear()
{
	clear();
}

void* MCaCycleRunDb::CCaCycleRunList::append_item()
{
	;
    return &(*(insert(end(), MCaCycleRunDb::CCaCycleRun())));
}

void MCaCycleRunDb::CCaCycleRunList::change_size(const int iNewSize)
{
    //resize(iNewSize > 0 ? iNewSize : 0 );
    resize(iNewSize > 0 ? iNewSize : 0);
   //if(iNewSize > 0) resize(iNewSize);
   //else clear();
}

const void* MCaCycleRunDb::CCaCycleRunList::get_addrOfFirstItem() const
{
    return size() > 0 ? &(*begin()) : 0;
}

int MCaCycleRunDb::CCaCycleRunList::get_containerType() const
{
    return LT_POOLVECTOR;
}

int MCaCycleRunDb::CCaCycleRunList::get_itemSize() const
{
    return sizeof(MCaCycleRunDb::CCaCycleRun);
}

int MCaCycleRunDb::CCaCycleRunList::get_size() const
{
    return size();
}

CSdlBasicObject* MCaCycleRunDb::CCaCycleRunList::create_object()
{
    return new MCaCycleRunDb::CCaCycleRunList();
}
static CSdlCreateObjectInitializer s_MCaCycleRunDb_CCaCycleRunList_SdlCreateObjectInitializer("MCaCycleRunDb::CCaCycleRunList", MCaCycleRunDb::CCaCycleRunList::create_object);

static CSdlTypeInfo s_cTypeInfo4MCaCycleRunDb_CCaCycleRunList(SDL_LIST, "MCaCycleRunDb::CCaCycleRunList",
    CSdlTypeInfo::create_typeDescription(__get_sourceFileName().c_str(),
        __LINE__, s_szCompileDate, s_szCompileTime).c_str(),
    sizeof(MCaCycleRunDb::CCaCycleRunList), 1, "MCaCycleRunDb::CCaCycleRun", SDL_STRUCT);
static CSdlTypeInfoImpl s_cTypeInfoImpl4MCaCycleRunDb_CCaCycleRunList(s_cTypeInfo4MCaCycleRunDb_CCaCycleRunList);

const CSdlTypeInfo& MCaCycleRunDb::CCaCycleRunList::get_typeInfo() const
{
    return s_cTypeInfo4MCaCycleRunDb_CCaCycleRunList;
}
#endif

