#ifndef __CYCLE_TEST_DB__
#define __CYCLE_TEST_DB__

#include "ob_kernel.h"
#include "test_db_sdl_c.h"
#include "test_def_sdl_c.h"

namespace test
{
	class CTestDb
	{
	public:
	
			static void insert_caCycleRun
			(
				const ::MTestDef::SCycleRunInfo& sCycleRunInfo,
				SOBSession *pSession
			);
			static void query_caCycleRun(int32 &listSize);

	};
}

//MAbmNotificationScanDb


#endif

