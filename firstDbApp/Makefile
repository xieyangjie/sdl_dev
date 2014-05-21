#######################################################
#
# 后台动态库 Makefile 的写法
#
########################################################

# 包含基本的系统参数定义【不能更改】
include $(OB_REL)/etc/NGbasedefine.mk

########################################################

# 目标名称，最终的程序文件名是 lib$(DEST)$(DLLTAIL)【必须修改】
DEST = test

# 目标的类型，必须是APP 
DEST_TYPE = DLL


# 编译目标程序需要的源代码文件，可以带路径（但必须是绝对路径）【必须修改】
DEST_SOURCES = test_sdl_i.cpp test_db.cpp test_sdl_init.cpp

# 目标的头文件安装路径，最终目录将是 $OB_REL/include/$(SUBSYSTEM)/$(HEADER_PATH)/ 【可选】
#HEADER_PATH = 

# 需要安装的头文件，文件名需带路径【可选】
#HEADERS = ./*.h

#IMPL_RDL =  abm_mdb_serv_ar.rdl
#USER_RDL_INC_PATH = $(OB_REL)/rdl/balance

IMPL_SDL= test.sdl
CALLED_SDL = test_db.sdl test_def.sdl
# test_xc.cpp
#IMPL_XCD = ./test_xc/test_xc.xcd

USER_SDL_INC_PATH =  ./ $(OB_REL)/idl/balance ./idl/       

#SELFDEF_SDL_INSTALL_PATH = $(OB_REL)/idl/balance
SELFDEF_SDL_INSTALL_PATH = $(OB_REL)/idl/balance/ ./idl/

########################################################
# 用户的宏定义，为编译器添加其它的 -D 参数，注意不要自行添加 -D 【可选】
#USER_DEFS = HAS_NO_MALLINFO DEBUG_REAL_MESSAGE _UNIT_TEST_
USER_DEFS = ENABLE_ESTAT

USER_INC_PATH = . \
    $(OB_REL)/include \
    $(OB_REL)/include/balance \
    $(OB_REL)/include/public/xc \
	$(OB_REL)/include/public/ob_kernel \
	
#需要引用的动态库的路径（非 $(OB_REL)/lib/ 下库文件的连接路径）
USER_LD_PATH = .

# 需要连接的其它库文件，应使用 $(BUILDTYPE) 作为后缀【可选】
USER_LIBRARIES = public_xc$(BUILDTYPE) ob_kernel$(BUILDTYPE) \
#####user_mdb_abmRdl$(BUILDTYPE)


SDL_DBCONN = SHDB_AD

# 定义测试程序的源代码文件【可选】
#TEST_SOURCES = test.cpp

# 其它选项【可选】
#IS_OPENBROKER_SOURCE = 1
NEED_DATABASE = 1

#单元测试相关设置
#UNITTEST_TOTAL_ON = 1
#NEED_UNITTEST = 1
#NEED_COVERTEST = 1
#NEED_AUTO_UNITTEST_SOURCES=0

# 包含基本的 Makefile 规则文件【不能更改】
include $(OB_REL)/etc/NGCmake
