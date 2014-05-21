//******************************************************************
//* Copyright (c) 2003-2009, Asiainfo HangZhou. All rights reserved.
//* SDL generated C++ client skeleton header file.
//* Source filename: ./idl/test_def.sdl
//* Generated date:  2014-05-21 04:36:18
//* Note: This is a auto-generated file, DON'T MODIFY IT!
//******************************************************************

#ifndef __SDL_C_TEST_DEF_SDL_C__
#define __SDL_C_TEST_DEF_SDL_C__

// list include files
#include "public/common/base/aivector.h"
#include "public/common/base/aiset.h"
#include "public/common/base/aimap.h"
#include "public/common/sdlbuffer/sdl_basic_objs.h"
#include "public/common/sdlbuffer/sdl_basic_visitors.h"
#include "public/common/sdlbuffer/sdl_type_factory.h"
#include "public/common/base/datetime.h"

#ifdef SDL_SELECTED_API
#include "OpenBossApp.h"
#endif

class CBSErrorMsg;

// main body

namespace MTestDef
{
    #if !defined(SDL_SELECTED_API) || defined(SDL_USE_MTESTDEF_SCYCLERUNINFO)
    class SCycleRunInfo : public CSdlBasicStructObject
    {
    public: // constant definitions
        enum { // field indexes
            IDX_ACCT_ID,
            IDX_CYCLE_SPEC_ID,
            IDX_REAL_CYCLE_SPEC_ID,
            IDX_LAST_CYCLE_BEGIN,
            IDX_LAST_CYCLE_END,
            IDX_CURR_CYCLE_BEGIN,
            IDX_CURR_CYCLE_END,
            IDX_MOD_DATE,
            IDX_CREATE_DATE,
            IDX_CYCLE_STS,
            MAX_FIELD_INDEX
        };

        enum {
            BIT_ACCT_ID		= 0x1,
            BIT_CYCLE_SPEC_ID		= 0x2,
            BIT_REAL_CYCLE_SPEC_ID		= 0x4,
            BIT_LAST_CYCLE_BEGIN		= 0x8,
            BIT_LAST_CYCLE_END		= 0x10,
            BIT_CURR_CYCLE_BEGIN		= 0x20,
            BIT_CURR_CYCLE_END		= 0x40,
            BIT_MOD_DATE		= 0x80,
            BIT_CREATE_DATE		= 0x100,
            BIT_CYCLE_STS		= 0x200,
            BIT_DUMMY
        };
        static const uint64    BITS_ALL_MARKER;
        static const uint64    BITS_NOT_NULL_MARKER;
        static const uint64    BITS_DB_MARKER;
        static const uint64    BITS_NOT_NULL_MARKER_ARR[];
        static const uint64    BITS_DB_MARKER_ARR[];
        static const int       IMPORT_TABLE_COUNT;
        static const int       MEMBER_FIELD_COUNT;
        static const char*     SZ_TYPE_NAME;
        static const char*     ARRAY_IMPORT_TABLES[];
        static const SSdlMemberTypeInfo* ARRAY_MEMBER_TYPE_INFO;

    private:
    	uint64	m_arrllMarker[1];
    	uint64	m_arrllUsedMarker[1];
    	void	inline init();

    public:
        SCycleRunInfo();
        //SCycleRunInfo(const aiallocator<SCycleRunInfo>& alloc);
        SCycleRunInfo(obb_stream& stream);
        SCycleRunInfo(const SCycleRunInfo& rhs);
        ~SCycleRunInfo();
        SCycleRunInfo& operator=(const SCycleRunInfo& rhs);
        bool operator==(const SCycleRunInfo& rhs) const;

        virtual bool operator<(const SCycleRunInfo& rhs) const;

        const CSdlTypeInfo& get_typeInfo() const;
        const CClassDesc& class_desc() const;
        const void* get_addressTable(const void* pTable[10]) const;

        void Clear();
        void Clear4Pool();
        static CSdlBasicObject* create_object();
    public:
      inline  int64 get_acctId() const
        {
            return m_llAcctId;
        }

      inline int64& acctId()
        {
            m_pllMarker[0] |= BIT_ACCT_ID;
            m_pllUsedMarker[0] |= BIT_ACCT_ID;
            return m_llAcctId;
        }

      inline  int32 get_cycleSpecId() const
        {
            return m_iCycleSpecId;
        }

      inline int32& cycleSpecId()
        {
            m_pllMarker[0] |= BIT_CYCLE_SPEC_ID;
            m_pllUsedMarker[0] |= BIT_CYCLE_SPEC_ID;
            return m_iCycleSpecId;
        }

      inline  int32 get_realCycleSpecId() const
        {
            return m_iRealCycleSpecId;
        }

      inline int32& realCycleSpecId()
        {
            m_pllMarker[0] |= BIT_REAL_CYCLE_SPEC_ID;
            m_pllUsedMarker[0] |= BIT_REAL_CYCLE_SPEC_ID;
            return m_iRealCycleSpecId;
        }

      inline  int32 get_lastCycleBegin() const
        {
            return m_iLastCycleBegin;
        }

      inline int32& lastCycleBegin()
        {
            m_pllMarker[0] |= BIT_LAST_CYCLE_BEGIN;
            m_pllUsedMarker[0] |= BIT_LAST_CYCLE_BEGIN;
            return m_iLastCycleBegin;
        }

      inline  int32 get_lastCycleEnd() const
        {
            return m_iLastCycleEnd;
        }

      inline int32& lastCycleEnd()
        {
            m_pllMarker[0] |= BIT_LAST_CYCLE_END;
            m_pllUsedMarker[0] |= BIT_LAST_CYCLE_END;
            return m_iLastCycleEnd;
        }

      inline  int32 get_currCycleBegin() const
        {
            return m_iCurrCycleBegin;
        }

      inline int32& currCycleBegin()
        {
            m_pllMarker[0] |= BIT_CURR_CYCLE_BEGIN;
            m_pllUsedMarker[0] |= BIT_CURR_CYCLE_BEGIN;
            return m_iCurrCycleBegin;
        }

      inline  int32 get_currCycleEnd() const
        {
            return m_iCurrCycleEnd;
        }

      inline int32& currCycleEnd()
        {
            m_pllMarker[0] |= BIT_CURR_CYCLE_END;
            m_pllUsedMarker[0] |= BIT_CURR_CYCLE_END;
            return m_iCurrCycleEnd;
        }

      inline  CBSDateTime get_modDate() const
        {
            return m_dtmModDate;
        }

      inline CBSDateTime& modDate()
        {
            m_pllMarker[0] |= BIT_MOD_DATE;
            m_pllUsedMarker[0] |= BIT_MOD_DATE;
            return m_dtmModDate;
        }

      inline  CBSDateTime get_createDate() const
        {
            return m_dtmCreateDate;
        }

      inline CBSDateTime& createDate()
        {
            m_pllMarker[0] |= BIT_CREATE_DATE;
            m_pllUsedMarker[0] |= BIT_CREATE_DATE;
            return m_dtmCreateDate;
        }

      inline  int32 get_cycleSts() const
        {
            return m_iCycleSts;
        }

      inline int32& cycleSts()
        {
            m_pllMarker[0] |= BIT_CYCLE_STS;
            m_pllUsedMarker[0] |= BIT_CYCLE_STS;
            return m_iCycleSts;
        }

    public:
        inline void set_acctId(const int64& value)
        {
            m_llAcctId = value;
            m_pllMarker[0] |= BIT_ACCT_ID;
            m_pllUsedMarker[0] |= BIT_ACCT_ID;
        }

        inline void set_cycleSpecId(const int32& value)
        {
            m_iCycleSpecId = value;
            m_pllMarker[0] |= BIT_CYCLE_SPEC_ID;
            m_pllUsedMarker[0] |= BIT_CYCLE_SPEC_ID;
        }

        inline void set_realCycleSpecId(const int32& value)
        {
            m_iRealCycleSpecId = value;
            m_pllMarker[0] |= BIT_REAL_CYCLE_SPEC_ID;
            m_pllUsedMarker[0] |= BIT_REAL_CYCLE_SPEC_ID;
        }

        inline void set_lastCycleBegin(const int32& value)
        {
            m_iLastCycleBegin = value;
            m_pllMarker[0] |= BIT_LAST_CYCLE_BEGIN;
            m_pllUsedMarker[0] |= BIT_LAST_CYCLE_BEGIN;
        }

        inline void set_lastCycleEnd(const int32& value)
        {
            m_iLastCycleEnd = value;
            m_pllMarker[0] |= BIT_LAST_CYCLE_END;
            m_pllUsedMarker[0] |= BIT_LAST_CYCLE_END;
        }

        inline void set_currCycleBegin(const int32& value)
        {
            m_iCurrCycleBegin = value;
            m_pllMarker[0] |= BIT_CURR_CYCLE_BEGIN;
            m_pllUsedMarker[0] |= BIT_CURR_CYCLE_BEGIN;
        }

        inline void set_currCycleEnd(const int32& value)
        {
            m_iCurrCycleEnd = value;
            m_pllMarker[0] |= BIT_CURR_CYCLE_END;
            m_pllUsedMarker[0] |= BIT_CURR_CYCLE_END;
        }

        inline void set_modDate(const CBSDateTime& value)
        {
            m_dtmModDate = value;
            m_pllMarker[0] |= BIT_MOD_DATE;
            m_pllUsedMarker[0] |= BIT_MOD_DATE;
        }

        inline void set_createDate(const CBSDateTime& value)
        {
            m_dtmCreateDate = value;
            m_pllMarker[0] |= BIT_CREATE_DATE;
            m_pllUsedMarker[0] |= BIT_CREATE_DATE;
        }

        inline void set_cycleSts(const int32& value)
        {
            m_iCycleSts = value;
            m_pllMarker[0] |= BIT_CYCLE_STS;
            m_pllUsedMarker[0] |= BIT_CYCLE_STS;
        }

    private: // data members
        int64		m_llAcctId;
        int32		m_iCycleSpecId;
        int32		m_iRealCycleSpecId;
        int32		m_iLastCycleBegin;
        int32		m_iLastCycleEnd;
        int32		m_iCurrCycleBegin;
        int32		m_iCurrCycleEnd;
        CBSDateTime		m_dtmModDate;
        CBSDateTime		m_dtmCreateDate;
        int32		m_iCycleSts;
    };
    extern "C" SSdlMemberTypeAddress get_MTestDef_SCycleRunInfo_MemberTypeAddress();
    extern "C" const char* get_MTestDef_SCycleRunInfo_MemberType_IndexString4Lua();
    #endif

    #if !defined(SDL_SELECTED_API) || defined(SDL_USE_MTESTDEF_SCYCLERUNINFOLIST)
    // list definition for SCycleRunInfoList
    class SCycleRunInfoList : public CSdlBasicListObject, public poolvector<SCycleRunInfo>
    {
    public:
    	SCycleRunInfoList();
    	SCycleRunInfoList(obb_stream& stream);
        void* append_item();
        void change_size(const int iNewSize);
        const void* get_addrOfFirstItem() const;
        int get_containerType() const;
        int get_itemSize() const;
        int get_size() const;
    	 void Clear();
        const CSdlTypeInfo& get_typeInfo() const;
    	static CSdlBasicObject* create_object();
    };
    #endif
}

#endif

