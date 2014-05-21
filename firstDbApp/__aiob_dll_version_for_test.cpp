
struct SObVersionInfo
{
	const char* m_szSourceName;
	const char* m_szFullPathName;
	const char* m_szModifyDate;
	const char* m_szFileSize;
	const char* m_szCvsVersion;
	const char* m_szMD5;
	const char* m_szSVNLabel;
};

struct SObLibrariesInfo
{	const char* m_szLibName;
	const char* m_szLibVersionNum;
};

#ifdef __cplusplus
extern "C" {
#endif
static const SObVersionInfo __VERSION_INFO[] =
{
	{ "aiallocator.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/aiallocator.h", "2013-11-06 22:59:54", "1096" , "" , "3E7695BDB935B1C0C5F5EC614A2EE620",""},
	{ "ailist.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/ailist.h", "2013-11-06 22:59:54", "1307" , "" , "CAE39A6910708A326AB12253D5048268",""},
	{ "ailog_exception.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/log/ailog_exception.h", "2013-11-06 22:59:43", "2288" , "" , "9B767952AA53980891983C0829BD6ED8",""},
	{ "aimap.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/aimap.h", "2013-11-06 22:59:54", "949" , "" , "B48D24450E4E35B51FEE1FA0B9EF6FE1",""},
	{ "aiset.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/aiset.h", "2013-11-06 22:59:54", "894" , "" , "3E1EEDB8C29B11E3D4C1F5414215A975",""},
	{ "aistring.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/aistring.h", "2013-11-06 22:59:54", "4208" , "" , "49DC7F5E294FC5DE1A9092496FF8AF24",""},
	{ "aitypes.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/aitypes.h", "2013-11-06 22:59:54", "4083" , "" , "BC287635F894023D81E25FD9522CC169",""},
	{ "aivector.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/aivector.h", "2013-11-06 22:59:54", "1443" , "" , "D370F3977F0D0313625CE16956DA7C9F",""},
	{ "app_ruler.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/ruler/app_ruler.h", "2013-11-07 02:58:37", "1161" , "" , "34F60A448FD64FD6BFD63FF6BCABD273",""},
	{ "base_class.h", "/data01/obgrp/zc_public/ob_rel/include/base_class.h", "2013-11-06 22:59:41", "7328" , "" , "3592E823B866E89D78CF162AC651CFF9",""},
	{ "base_define.h", "/data01/obgrp/zc_public/ob_rel/include/base_define.h", "2013-11-06 22:59:41", "2453" , "" , "0CC71603B263D6A975DF921C414A77B8",""},
	{ "base_func.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/base_func.h", "2013-11-06 22:59:54", "35433" , "" , "514A2795D5CF78BD34E5E9395F5EC86C",""},
	{ "cbs_mutex.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/cbs_mutex.h", "2013-11-06 22:59:54", "5010" , "" , "E8FA970514203D19D34E33212501A4BD",""},
	{ "compile.h", "/data01/obgrp/zc_public/ob_rel/include/compile.h", "2013-11-06 22:59:41", "7492" , "" , "A71B6103FC70A9252A926A0BB54CE062",""},
	{ "datetime.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/datetime.h", "2013-11-06 22:59:54", "48573" , "" , "3B14CD2F3E7804FCA4054050B0E2F1F0",""},
	{ "dbapi.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/dbapi/dbapi.h", "2013-11-06 22:59:43", "6197" , "" , "C0C89D517CF0D0C1BA460EA3BFF3B017",""},
	{ "dynamic_load.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/sdlbuffer/dynamic_load.h", "2013-11-06 22:59:44", "2440" , "" , "7AF6FFCE04F897A84121D7AF40C96283",""},
	{ "generic_object_pool.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/generic_object_pool.h", "2013-11-06 22:59:54", "5316" , "" , "26EB29DEE441B2AD27FBBAC9B921594C",""},
	{ "hashmap.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/hashmap.h", "2013-11-06 22:59:54", "9856" , "" , "8D0D1B4AE8FC45CB15324239AAAF1EBB",""},
	{ "kernel_def_sdl_c.h", "/data01/obgrp/zc_public/ob_rel/include/public/ob_kernel/kernel_def_sdl_c.h", "2014-01-23 15:12:19", "7960" , "" , "96B27B50E002210871303E6DDC2B34E6",""},
	{ "lauxlib.h", "/data01/obgrp/zc_public/ob_rel/include/3rd/lua/lauxlib.h", "2012-07-13 15:07:37", "6004" , "" , "B5E4465EB574FF713C84E06D02959C5A",""},
	{ "lua.h", "/data01/obgrp/zc_public/ob_rel/include/3rd/lua/lua.h", "2012-07-13 15:07:37", "11731" , "" , "E9F06F7C600443D9A8E1307E64194F68",""},
	{ "lualib.h", "/data01/obgrp/zc_public/ob_rel/include/3rd/lua/lualib.h", "2012-07-13 15:07:37", "1026" , "" , "03B9F9C3F7A82BEE2F7EAB03315EAE7D",""},
	{ "mapfunc.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/mapfunc.h", "2013-11-06 22:59:54", "4217" , "" , "ADD9BBD95F742D7A9BDE93A9DDA7A08E",""},
	{ "memory_pool.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/memory_pool.h", "2013-11-06 22:59:54", "2400" , "" , "DB315268C792CEB166155CB19C269143",""},
	{ "ob_kernel.h", "/data01/obgrp/zc_public/ob_rel/include/public/ob_kernel/ob_kernel.h", "2013-11-22 02:35:32", "120602" , "" , "FFBDF781CCF6970AEAC0006994A8F4A9",""},
	{ "ob_kernel_impl.h", "/data01/obgrp/zc_public/ob_rel/include/public/ob_kernel/ob_kernel_impl.h", "2013-11-22 02:35:32", "29129" , "" , "20BF145A4FECB866E1D48067A68D9A8F",""},
	{ "ob_session.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/sdlbuffer/ob_session.h", "2013-11-06 22:59:44", "14550" , "" , "8DF827A25CC452F39F833303383A4918",""},
	{ "obb_codec.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/sdlbuffer/obb_codec.h", "2013-11-06 22:59:44", "7520" , "" , "1D503A58754995FDDC160426F84CE18D",""},
	{ "obb_marshaller.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/sdlbuffer/obb_marshaller.h", "2013-11-06 22:59:44", "3623" , "" , "C403DAC8DCB66AC3260F4DF6260EF3B9",""},
	{ "obb_sql_stream.h", "/data01/obgrp/zc_public/ob_rel/include/public/ob_kernel/obb_sql_stream.h", "2013-11-22 02:35:32", "2379" , "" , "18294D7B56D392041F0E4179D004530A",""},
	{ "obb_stream_visitors.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/sdlbuffer/obb_stream_visitors.h", "2013-11-06 22:59:44", "7654" , "" , "183CB7FD6FC6A8C3BFE530A7B86A8A48",""},
	{ "od_system_interface.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/od_system_interface.h", "2013-11-06 22:59:54", "27289" , "" , "E59EAED23212C2A71382391111B2D51B",""},
	{ "oderr.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/log/oderr.h", "2013-11-06 22:59:43", "10650" , "" , "E3A79F845F677EDCB4AD58F336A052C4",""},
	{ "otl.4.0.150.h", "/data01/obgrp/zc_public/ob_rel/include/3rd/otl/otl.4.0.150.h", "2012-08-26 12:59:44", "686871" , "" , "E2F06BC8DD15921AB0EBC78813D58E06",""},
	{ "otl.4.0.254.h", "/data01/obgrp/zc_public/ob_rel/include/3rd/otl/otl.4.0.254.h", "2012-08-26 12:59:44", "925959" , "" , "A9FC96A703022DC6FBAAFEE22D1E8331",""},
	{ "otl.h", "/data01/obgrp/zc_public/ob_rel/include/3rd/otl/otl.h", "2012-08-26 12:59:44", "101" , "" , "581602399E94C4D706C63FA0D68A1667",""},
	{ "otlv4.h", "/data01/obgrp/zc_public/ob_rel/include/3rd/otl/otlv4.h", "2012-08-26 12:59:44", "104" , "" , "745EBEDF35752AD28F2870B6B212D902",""},
	{ "pthread_allocator.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/pthread_allocator.h", "2013-11-06 22:59:54", "4026" , "" , "E448E2FD984B79CED6CF4935FE3D58F5",""},
	{ "sdl_basic_def.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/sdlbuffer/sdl_basic_def.h", "2013-11-06 22:59:44", "19149" , "" , "40C6AAC45DD4C4D97B1A552383B4C089",""},
	{ "sdl_basic_objs.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/sdlbuffer/sdl_basic_objs.h", "2013-11-06 22:59:44", "34032" , "" , "76B0D4C5503337EB3AAF2987A9C0E9C9",""},
	{ "sdl_basic_visitors.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/sdlbuffer/sdl_basic_visitors.h", "2013-11-06 22:59:44", "8569" , "" , "6C8737AA843301E7385A0A85915CB53D",""},
	{ "sdl_client_objs.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/sdlbuffer/sdl_client_objs.h", "2013-11-06 22:59:44", "7123" , "" , "0461363C6F1CAADBF45F7690A0A99AB1",""},
	{ "sdl_svr_objs.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/sdlbuffer/sdl_svr_objs.h", "2013-11-06 22:59:44", "3810" , "" , "F679DEDFEA03BC237CABD7664EBBDFFE",""},
	{ "sdl_type_factory.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/sdlbuffer/sdl_type_factory.h", "2013-11-06 22:59:44", "8429" , "" , "F734E4723FE9FD5A310E4623EA27232A",""},
	{ "sqlite3.h", "/data01/obgrp/zc_public/ob_rel/include/3rd/sqlite/sqlite3.h", "2012-07-13 15:09:41", "155242" , "" , "20D243EC3095ACC4C88AD44C275DF620",""},
	{ "str.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/str.h", "2013-11-06 22:59:54", "6622" , "" , "7333AE8841A3B9C760EC55CC09164B63",""},
	{ "test.sdl", "/data01/zcgrp/xieyj/work/test/firstDbApp/idl/test.sdl", "2014-05-19 10:29:38", "313" , "" , "28D57F73F8A0D795056F79A7BB23C0FB",""},
	{ "test_db.cpp", "/data01/zcgrp/xieyj/work/test/firstDbApp/test_db.cpp", "2014-05-20 01:47:54", "3792" , "" , "3878819FBFE213E5709ECE4B06E61943",""},
	{ "test_db.h", "/data01/zcgrp/xieyj/work/test/firstDbApp/test_db.h", "2014-05-19 14:12:49", "420" , "" , "514E3935C213A8A0860F8FC62B7D89A0",""},
	{ "test_db.sdl", "/data01/zcgrp/xieyj/work/test/firstDbApp/idl/test_db.sdl", "2014-05-15 16:44:47", "128" , "" , "C2EA3CF86F84E704389552A27FE20A83",""},
	{ "test_def.sdl", "/data01/zcgrp/xieyj/work/test/firstDbApp/idl/test_def.sdl", "2014-05-19 10:45:46", "345" , "" , "05BFD60E7BD3422F109E3F633C561C83",""},
	{ "test_sdl_i.cpp", "/data01/zcgrp/xieyj/work/test/firstDbApp/test_sdl_i.cpp", "2014-05-19 14:55:46", "1522" , "" , "6C1FD0F55A64A78B7146F00AE1FF46E2",""},
	{ "test_sdl_i.h", "/data01/zcgrp/xieyj/work/test/firstDbApp/test_sdl_i.h", "2014-05-19 10:45:47", "1291" , "" , "02AA1405B8EFF80C40073B35E2135D68",""},
	{ "test_sdl_init.cpp", "/data01/zcgrp/xieyj/work/test/firstDbApp/test_sdl_init.cpp", "2014-05-16 14:04:53", "1303" , "" , "5F493B091BF83D53BBD804A589C6852D",""},
	{ "test_sdl_init.h", "/data01/zcgrp/xieyj/work/test/firstDbApp/test_sdl_init.h", "2014-05-16 14:04:53", "1288" , "" , "3B4FA8539B0D017707BC349D96B618C2",""},
	{ "thread_value.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/thread_value.h", "2013-11-06 22:59:54", "7397" , "" , "132930B06C211BB5EF9701744CF41F4B",""},
	{ "virtual_time.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/base/virtual_time.h", "2013-11-06 22:59:54", "1976" , "" , "25F9A84B266C8DB2380E48CD4DE99378",""},
	{ "xc.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc.h", "2014-01-22 18:07:49", "16325" , "" , "9CDFF6DB4F5980A54B6CC00DD8A65653",""},
	{ "xc_allocator.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_allocator.h", "2014-01-22 18:07:49", "2018" , "" , "28FAC0B4821F37D332AFBFAE5CD2D9B3",""},
	{ "xc_base_hash_map.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_base_hash_map.h", "2014-01-22 18:07:49", "983" , "" , "9E3A2BEA4B8B98353D08FB86F7941510",""},
	{ "xc_base_hash_multimap.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_base_hash_multimap.h", "2014-01-22 18:07:49", "1023" , "" , "954BEDDF4CF81A0472B64D4FE5D32E67",""},
	{ "xc_base_hash_table.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_base_hash_table.h", "2014-01-22 18:07:49", "9775" , "" , "38D77A283D93EAE3893D2A8459806C54",""},
	{ "xc_base_index.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_base_index.h", "2014-01-22 18:07:49", "10721" , "" , "18984025941A673DFA2893F212613A95",""},
	{ "xc_base_match.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_base_match.h", "2014-01-22 18:07:49", "11216" , "" , "814967E8684C33BA7F02E889457D1A15",""},
	{ "xc_base_mgr.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_base_mgr.h", "2014-01-22 18:07:49", "1929" , "" , "53112B0FD03A3C407C045F03ED308D8A",""},
	{ "xc_basedef.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_basedef.h", "2014-01-22 18:07:49", "5403" , "" , "3E41B0E2DDBC36670C6C930F360E2AFF",""},
	{ "xc_container.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_container.h", "2014-01-22 18:07:49", "5416" , "" , "0C850788A8973914FFABE74614691BC8",""},
	{ "xc_counter_mgr.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_counter_mgr.h", "2014-01-22 18:07:49", "1227" , "" , "39B6F1C89428E7B21910B57AAA770694",""},
	{ "xc_exception.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_exception.h", "2014-01-22 18:07:49", "5112" , "" , "490760A639BDF6B6A7052C150047F511",""},
	{ "xc_fast_find.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_fast_find.h", "2014-01-22 18:07:49", "5812" , "" , "7E5D064A5E5D62519FEE55B040046DC2",""},
	{ "xc_global_mgr.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_global_mgr.h", "2014-01-22 18:07:49", "1566" , "" , "528FC6B0FA5FE3A9343D5628BDAE12F6",""},
	{ "xc_group_mgr.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_group_mgr.h", "2014-01-22 18:07:49", "2941" , "" , "C9D8A20D0A9ABDE9718B69EA8B88E96C",""},
	{ "xc_hash_func.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_hash_func.h", "2014-01-22 18:07:49", "1433" , "" , "9110DFFC9BE4B4C2949C592A389AF650",""},
	{ "xc_load.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_load.h", "2014-01-22 18:07:49", "7278" , "" , "C76DC2E7720F85EC737012FC68F169D5",""},
	{ "xc_lock_mgr.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_lock_mgr.h", "2014-01-22 18:07:49", "1495" , "" , "D28C685AAE21DFEBB7DC35C3FAEDAE0F",""},
	{ "xc_log.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_log.h", "2014-01-22 18:07:49", "1209" , "" , "87E761CAF7524333296AD8BC1F25E1B9",""},
	{ "xc_mem_mgr.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_mem_mgr.h", "2014-01-22 18:07:49", "1200" , "" , "511C074FA4A9BF1CA190BCE11E58BB86",""},
	{ "xc_mem_page_mgr.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_mem_page_mgr.h", "2014-01-22 18:07:49", "1560" , "" , "1FDAC1811D9A2A1DEE3DFD0C5E729F45",""},
	{ "xc_ob_kernel.h", "/data01/obgrp/zc_public/ob_rel/include/public/ob_kernel/xc_ob_kernel.h", "2014-01-23 15:12:10", "9674" , "" , "5B597EFAEC777285FC9D109349CD4435",""},
	{ "xc_param.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_param.h", "2014-01-22 18:07:49", "1747" , "" , "03E671BE0FCB1C7A4D1256F27BFEF42C",""},
	{ "xc_sqlite_wrapper.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_sqlite_wrapper.h", "2014-01-22 18:07:49", "11337" , "" , "57486F92EEE1C57DB5D9453DABA58E94",""},
	{ "xc_trans_mgr.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_trans_mgr.h", "2014-01-22 18:07:49", "2478" , "" , "AAAB33A93882506187429FE56C8FE2EF",""},
	{ "xc_typedef.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_typedef.h", "2014-01-22 18:07:49", "1567" , "" , "15BCDC0C7CBFCCFC58A78A826C90314C",""},
	{ "xc_util.h", "/data01/obgrp/zc_public/ob_rel/include/public/xc/xc_util.h", "2014-01-22 18:07:49", "3238" , "" , "04082DF99A7033D46C35FDC648FB44C1",""},
	{ "xdr.h", "/data01/obgrp/zc_public/ob_rel/include/public/common/xdr/xdr.h", "2013-11-06 22:59:43", "4475" , "" , "3E2FF056EB830EC95B55B7626A33B2F5",""},
	{ 0, 0, 0, 0, 0,0,0 }
};

static const SObLibrariesInfo __LIB_INFO[] = 
{
	{ "libSdlBufferD.so",  "1.7.0.311070" },
	{ "libob_kernelD.so",  "2.6.1.401235" },
	{ "libpublic_xcD.so",  "2.6.1.404255" },
	{ 0, 0 }
};

const SObVersionInfo* get_verOfAIOpenBossBusinessDll()
{
	return __VERSION_INFO;
}

const SObVersionInfo* get_verOflibtestD()
{
	return __VERSION_INFO;
}

const SObLibrariesInfo* get_LibInfoOflibtestD()
{
	return __LIB_INFO;
}

//static CObVersionInfoRegister l_cRegister("./build/libtestD.so", __VERSION_INFO);

#ifdef __cplusplus
}

#endif
