//******************************************************************
//* Copyright (c) 2003-2009, Asiainfo HangZhou. All rights reserved.
//* SDL generated C++ client skeleton cpp file.
//* Source filename: ./idl/test_def.sdl
//* Generated date:  2014-05-21 04:36:18
//* Note: This is a auto-generated file, DON'T MODIFY IT!
//******************************************************************

#include <string.h>
#include <iterator>
#include "public/common/sdlbuffer/sdl_basic_visitors.h"
#include "public/common/sdlbuffer/sdl_type_factory.h"
#include "test_def_sdl_c.h"
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

#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MTESTDEF_SCYCLERUNINFO)
// struct definition for MTestDef::SCycleRunInfo
static CSdlTypeInfo s_cTypeInfo4MTestDef_SCycleRunInfo(SDL_STRUCT, "MTestDef::SCycleRunInfo",
    CSdlTypeInfo::create_typeDescription(__get_sourceFileName().c_str(),
        __LINE__, s_szCompileDate, s_szCompileTime).c_str(),
    sizeof(MTestDef::SCycleRunInfo), 10,
    "int64", SDL_INT64,
    "int32", SDL_INT32,
    "int32", SDL_INT32,
    "int32", SDL_INT32,
    "int32", SDL_INT32,
    "int32", SDL_INT32,
    "int32", SDL_INT32,
    "CBSDateTime", SDL_DATETIME,
    "CBSDateTime", SDL_DATETIME,
    "int32", SDL_INT32);
static CSdlTypeInfoImpl s_cTypeInfoImpl4MTestDef_SCycleRunInfo(s_cTypeInfo4MTestDef_SCycleRunInfo);

static SSdlMemberTypeInfo s_MTestDef_SCycleRunInfo_MemberTypeInfo[10 + 1] =
{
    { SDL_INT64, "ACCT_ID", sizeof(int64), -1, 0, reinterpret_cast<FuncSdlAssign>(sdl_assignInt64),I64(0x1),0,"int64",0},
    { SDL_INT32, "CYCLE_SPEC_ID", sizeof(int32), -1, 0, reinterpret_cast<FuncSdlAssign>(sdl_assignInt32),I64(0x2),1,"int32",0},
    { SDL_INT32, "REAL_CYCLE_SPEC_ID", sizeof(int32), -1, 0, reinterpret_cast<FuncSdlAssign>(sdl_assignInt32),I64(0x4),2,"int32",0},
    { SDL_INT32, "LAST_CYCLE_BEGIN", sizeof(int32), -1, 0, reinterpret_cast<FuncSdlAssign>(sdl_assignInt32),I64(0x8),3,"int32",0},
    { SDL_INT32, "LAST_CYCLE_END", sizeof(int32), -1, 0, reinterpret_cast<FuncSdlAssign>(sdl_assignInt32),I64(0x10),4,"int32",0},
    { SDL_INT32, "CURR_CYCLE_BEGIN", sizeof(int32), -1, 0, reinterpret_cast<FuncSdlAssign>(sdl_assignInt32),I64(0x20),5,"int32",0},
    { SDL_INT32, "CURR_CYCLE_END", sizeof(int32), -1, 0, reinterpret_cast<FuncSdlAssign>(sdl_assignInt32),I64(0x40),6,"int32",0},
    { SDL_DATETIME, "MOD_DATE", sizeof(CBSDateTime), -1, 0, reinterpret_cast<FuncSdlAssign>(sdl_assignDateTime),I64(0x80),7,"CBSDateTime",0},
    { SDL_DATETIME, "CREATE_DATE", sizeof(CBSDateTime), -1, 0, reinterpret_cast<FuncSdlAssign>(sdl_assignDateTime),I64(0x100),8,"CBSDateTime",0},
    { SDL_INT32, "CYCLE_STS", sizeof(int32), -1, 0, reinterpret_cast<FuncSdlAssign>(sdl_assignInt32),I64(0x200),9,"int32",0},
    { -1, 0, 0, 0, 0, 0 ,0}
};

extern "C" SSdlMemberTypeAddress get_MTestDef_SCycleRunInfo_MemberTypeAddress()
{
    SSdlMemberTypeAddress Addr;
    Addr.addr = s_MTestDef_SCycleRunInfo_MemberTypeInfo;
    Addr.size = 10;
    return Addr;
}
extern "C" const char* get_MTestDef_SCycleRunInfo_MemberType_IndexString4Lua()
{
    static char MTestDef_SCycleRunInfo_MemberType_IndexString[] = 
"\
local MTestDef_SCycleRunInfo_ACCT_ID=0;\n\
local MTestDef_SCycleRunInfo_CYCLE_SPEC_ID=1;\n\
local MTestDef_SCycleRunInfo_REAL_CYCLE_SPEC_ID=2;\n\
local MTestDef_SCycleRunInfo_LAST_CYCLE_BEGIN=3;\n\
local MTestDef_SCycleRunInfo_LAST_CYCLE_END=4;\n\
local MTestDef_SCycleRunInfo_CURR_CYCLE_BEGIN=5;\n\
local MTestDef_SCycleRunInfo_CURR_CYCLE_END=6;\n\
local MTestDef_SCycleRunInfo_MOD_DATE=7;\n\
local MTestDef_SCycleRunInfo_CREATE_DATE=8;\n\
local MTestDef_SCycleRunInfo_CYCLE_STS=9;\n\
";
    return MTestDef_SCycleRunInfo_MemberType_IndexString;
}
//static MapSSdlMemberTypeInfo map_MTestDef_SCycleRunInfo_MapMemberTypeInfo;
//static SMapSSdlMemberTypeInfo s_MTestDef_SCycleRunInfo_MapMemberTypeInfo = {map_MTestDef_SCycleRunInfo_MapMemberTypeInfo};
static SMapSSdlMemberTypeInfo s_MTestDef_SCycleRunInfo_MapMemberTypeInfo;
static CMapSdlStructMemberTypeInitializer s_MapMTestDef_SCycleRunInfo(&s_MTestDef_SCycleRunInfo_MapMemberTypeInfo,s_MTestDef_SCycleRunInfo_MemberTypeInfo,10);
static CSdlStructMemberTypeInitializer s_MTestDef_SCycleRunInfo(s_MTestDef_SCycleRunInfo_MemberTypeInfo,
    MTestDef::SCycleRunInfo());

const uint64 MTestDef::SCycleRunInfo::BITS_ALL_MARKER = I64(0x3ff);
const uint64 MTestDef::SCycleRunInfo::BITS_NOT_NULL_MARKER = I64(0x0);
const uint64 MTestDef::SCycleRunInfo::BITS_DB_MARKER = I64(0x0);
const uint64 MTestDef::SCycleRunInfo::BITS_NOT_NULL_MARKER_ARR[] = {I64(0x0)};
const uint64 MTestDef::SCycleRunInfo::BITS_DB_MARKER_ARR[] = {I64(0x0)};
const int MTestDef::SCycleRunInfo::IMPORT_TABLE_COUNT = 0;
const int MTestDef::SCycleRunInfo::MEMBER_FIELD_COUNT = 10;
const char* MTestDef::SCycleRunInfo::SZ_TYPE_NAME = "MTestDef::SCycleRunInfo";
const SSdlMemberTypeInfo* MTestDef::SCycleRunInfo::ARRAY_MEMBER_TYPE_INFO = s_MTestDef_SCycleRunInfo_MemberTypeInfo;
const char* MTestDef::SCycleRunInfo::ARRAY_IMPORT_TABLES[] = 
{
    0
};

void inline MTestDef::SCycleRunInfo::init()
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
    m_iFieldNum = 10;
 /* do nothing */ 
}

MTestDef::SCycleRunInfo::SCycleRunInfo() : CSdlBasicStructObject(),
    m_llAcctId(0),
    m_iCycleSpecId(0),
    m_iRealCycleSpecId(0),
    m_iLastCycleBegin(0),
    m_iLastCycleEnd(0),
    m_iCurrCycleBegin(0),
    m_iCurrCycleEnd(0),
    m_dtmModDate(),
    m_dtmCreateDate(),
    m_iCycleSts(0)
{
	init();
}

MTestDef::SCycleRunInfo::SCycleRunInfo(obb_stream& stream) : CSdlBasicStructObject() ,
    m_llAcctId(0),
    m_iCycleSpecId(0),
    m_iRealCycleSpecId(0),
    m_iLastCycleBegin(0),
    m_iLastCycleEnd(0),
    m_iCurrCycleBegin(0),
    m_iCurrCycleEnd(0),
    m_dtmModDate(),
    m_dtmCreateDate(),
    m_iCycleSts(0)
{ 
	init();
	stream >> *this;
}

MTestDef::SCycleRunInfo::SCycleRunInfo(const SCycleRunInfo& rhs) : CSdlBasicStructObject(rhs),
    m_llAcctId(0),
    m_iCycleSpecId(0),
    m_iRealCycleSpecId(0),
    m_iLastCycleBegin(0),
    m_iLastCycleEnd(0),
    m_iCurrCycleBegin(0),
    m_iCurrCycleEnd(0),
    m_dtmModDate(),
    m_dtmCreateDate(),
    m_iCycleSts(0)
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
    if (rhs.m_pllUsedMarker[0] & BIT_CYCLE_STS)
        m_iCycleSts = rhs.m_iCycleSts;
}

MTestDef::SCycleRunInfo::~SCycleRunInfo()
{ 
}

MTestDef::SCycleRunInfo& MTestDef::SCycleRunInfo::operator=(const MTestDef::SCycleRunInfo& rhs) 
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
        if (rhs.m_pllUsedMarker[0] & BIT_CYCLE_STS)
            m_iCycleSts = rhs.m_iCycleSts;
    }
    return *this;
}

bool MTestDef::SCycleRunInfo::operator==(const MTestDef::SCycleRunInfo& rhs) const
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
    if ((m_pllMarker[0]&BIT_CYCLE_STS) && !(m_iCycleSts == rhs.m_iCycleSts)) return false;
    return true;
}

bool MTestDef::SCycleRunInfo::operator<(const MTestDef::SCycleRunInfo& rhs) const
{
    return !( *this == rhs );
/*
	else
	{
		return m_pComparer->lessThan(this,&rhs);
	}
*/
}

const CSdlTypeInfo& MTestDef::SCycleRunInfo::get_typeInfo() const
{
    return s_cTypeInfo4MTestDef_SCycleRunInfo;
}

const CSdlBasicStructObject::CClassDesc& MTestDef::SCycleRunInfo::class_desc() const
{
    static const CSdlBasicStructObject::CClassDesc cClassDesc(BITS_ALL_MARKER,
        BITS_NOT_NULL_MARKER, BITS_DB_MARKER, IMPORT_TABLE_COUNT, MEMBER_FIELD_COUNT,
        SZ_TYPE_NAME, ARRAY_IMPORT_TABLES, s_MTestDef_SCycleRunInfo_MemberTypeInfo,&s_MTestDef_SCycleRunInfo_MapMemberTypeInfo);
    return cClassDesc;
}

void MTestDef::SCycleRunInfo::Clear()
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
    m_iCycleSts = 0;
}

void MTestDef::SCycleRunInfo::Clear4Pool()
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
    m_iCycleSts = 0;
}

CSdlBasicObject* MTestDef::SCycleRunInfo::create_object()
{
    return new MTestDef::SCycleRunInfo();
}
static CSdlCreateObjectInitializer s_MTestDef_SCycleRunInfo_SdlCreateObjectInitializer("MTestDef::SCycleRunInfo", MTestDef::SCycleRunInfo::create_object);

const void* MTestDef::SCycleRunInfo::get_addressTable(const void* pTable[10]) const
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
        pTable[i++] = &m_iCycleSts;
    }
    return &m_llAcctId;
}
#endif

#if !defined(SDL_SELECTED_API) || defined(SDL_USE_MTESTDEF_SCYCLERUNINFOLIST)
// list definition for MTestDef::SCycleRunInfoList
MTestDef::SCycleRunInfoList::SCycleRunInfoList() : CSdlBasicListObject(),poolvector<MTestDef::SCycleRunInfo>()
{
}
MTestDef::SCycleRunInfoList::SCycleRunInfoList(obb_stream& stream) : CSdlBasicListObject(),poolvector<MTestDef::SCycleRunInfo>()
{
	stream >> *this;
}
void MTestDef::SCycleRunInfoList::Clear()
{
	clear();
}

void* MTestDef::SCycleRunInfoList::append_item()
{
	;
    return &(*(insert(end(), MTestDef::SCycleRunInfo())));
}

void MTestDef::SCycleRunInfoList::change_size(const int iNewSize)
{
    //resize(iNewSize > 0 ? iNewSize : 0 );
    resize(iNewSize > 0 ? iNewSize : 0);
   //if(iNewSize > 0) resize(iNewSize);
   //else clear();
}

const void* MTestDef::SCycleRunInfoList::get_addrOfFirstItem() const
{
    return size() > 0 ? &(*begin()) : 0;
}

int MTestDef::SCycleRunInfoList::get_containerType() const
{
    return LT_POOLVECTOR;
}

int MTestDef::SCycleRunInfoList::get_itemSize() const
{
    return sizeof(MTestDef::SCycleRunInfo);
}

int MTestDef::SCycleRunInfoList::get_size() const
{
    return size();
}

CSdlBasicObject* MTestDef::SCycleRunInfoList::create_object()
{
    return new MTestDef::SCycleRunInfoList();
}
static CSdlCreateObjectInitializer s_MTestDef_SCycleRunInfoList_SdlCreateObjectInitializer("MTestDef::SCycleRunInfoList", MTestDef::SCycleRunInfoList::create_object);

static CSdlTypeInfo s_cTypeInfo4MTestDef_SCycleRunInfoList(SDL_LIST, "MTestDef::SCycleRunInfoList",
    CSdlTypeInfo::create_typeDescription(__get_sourceFileName().c_str(),
        __LINE__, s_szCompileDate, s_szCompileTime).c_str(),
    sizeof(MTestDef::SCycleRunInfoList), 1, "MTestDef::SCycleRunInfo", SDL_STRUCT);
static CSdlTypeInfoImpl s_cTypeInfoImpl4MTestDef_SCycleRunInfoList(s_cTypeInfo4MTestDef_SCycleRunInfoList);

const CSdlTypeInfo& MTestDef::SCycleRunInfoList::get_typeInfo() const
{
    return s_cTypeInfo4MTestDef_SCycleRunInfoList;
}
#endif

