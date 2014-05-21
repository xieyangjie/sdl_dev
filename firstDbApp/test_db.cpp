#include "test_db.h"
namespace test
{
    void CTestDb::query_caCycleRun(int32 &listSize)
    {
        
        int64 llAcctId = 14022003;
    	LOG_TRACE( "====================enter query_caCycleRun...=================");    
        try
        {
            MCaCycleRunDb::CCaCycleRunList listCaCycleRun;
            MCaCycleRunDb::CCaCycleRun cCaCyceRun;
            //listCaCycleRun.clear();
    		
            //查询
            //ob_whereCond condAccount;
            
            ob_kernel<MCaCycleRunDb::CCaCycleRunList> cKernel("AD");
            
		    cCaCyceRun.set_acctId(llAcctId);
            //cKernel.AddPartitionKey("ACCT_ID", itoa(llAcctId));
            
        
        //查询caCycleRun表
        //ES_BEGIN_RUN_TIME("查询ca_Cycle_Run表");
        cKernel.select_all(listCaCycleRun,cCaCyceRun);
        listSize = listCaCycleRun.size();
        LOG_TRACE("---------------------------%d---------------------",listSize);
               // ES_END_RUN_TIME;

        // MCaCycleRunDb::CCaProcessErrorListList::const_iterator iterParam = listParams.begin();
        // for(; iterParam != listParams.end(); ++ iterParam)
        // {
        //     //参数名称不为空，参数类型 0默认，1 Char，2 Number，3 Boolean，4 Date，5 Long，6 String，7 Double
        //     if( !iterParam->get_paramName().empty() 
        //          && !iterParam->get_paramValue().empty())
        //     {
        //         LOG_TRACE( "\n====[ABM_NOTI_SCAN]==> ==== paramName = %s,  paramValue = %s ", iterParam->get_paramName().c_str(), iterParam->get_paramValue().c_str());
        //         listCaCycleRun.push_back(iterParam->get_paramValue());
        //         //mapTimingParams.insert(AISTD make_pair(iterParam->get_paramName(), iterParam->get_paramValue()));
        //     }
        // }

        
    }
    catch(err_info_service::CAIException& e)
    {
        LOG_ERROR(0, "\n==[caCyleRun Test]==> ==== caCycleRun exception!========");
        throw;
    }
    
        LOG_TRACE( "leave query_caCycleRun...");
    };
    void CTestDb::insert_caCycleRun(
	   const ::MTestDef::SCycleRunInfo& sCycleRunInfo,
	   SOBSession * pSession)
    {
	   //LOG_TRACE( "enter insert_errorDate...");    
         try
        {
         
            ob_kernel<MCaCycleRunDb::CCaCycleRunList> ckernel("AD");
        
            MCaCycleRunDb::CCaCycleRun cCaCyceRun;
        
            cCaCyceRun.set_acctId(sCycleRunInfo.get_acctId()); 
            cCaCyceRun.set_cycleSpecId(sCycleRunInfo.get_cycleSpecId());
            cCaCyceRun.set_realCycleSpecId(sCycleRunInfo.get_realCycleSpecId());
            cCaCyceRun.set_lastCycleBegin(sCycleRunInfo.get_lastCycleBegin());
            cCaCyceRun.set_lastCycleEnd(sCycleRunInfo.get_lastCycleEnd());
            cCaCyceRun.set_currCycleBegin(sCycleRunInfo.get_currCycleBegin());
            cCaCyceRun.set_currCycleEnd(sCycleRunInfo.get_currCycleEnd());   
            cCaCyceRun.set_modDate(sCycleRunInfo.get_modDate());
            cCaCyceRun.set_createDate(sCycleRunInfo.get_createDate());
            cCaCyceRun.set_cycleSts(sCycleRunInfo.get_cycleSts());
          
            LOG_TRACE( "===================enter =============..."); 
        
                    // ES_BEGIN_RUN_TIME("断点续做:插入CaProcessError表");
            ckernel.insert(cCaCyceRun);
            LOG_TRACE( "++++++++++++++++++++++++++enter insert_errorDate...");
        //ES_END_RUN_TIME;
        
       // pSession->commit();
        }
        catch(err_info_service::CAIException& e)
        {
            LOG_ERROR(0, "\n==[caCyleRun Test]==> ==== insert_caCyleRun exception!========");
            throw;
        }
        LOG_TRACE( "leave insert_caCyleRun...");
    };
}