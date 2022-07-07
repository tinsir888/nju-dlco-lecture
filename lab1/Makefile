include $(NVBOARD_HOME)/scripts/nvboard.mk
#生成的可执行文件名称
TOPNAME = mux
#在指定文件夹中按扩展名查找所有源文件
VSRC = $(shell find $(abspath ./vsrc) -name "*.v")
CSRC = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
#nvbroad自动绑定源文件，注意，如果没有$(BUILD_DIR)目录，将无法正确的生成该文件
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
CSRC += $(SRC_AUTO_BIND)
#nvbroad约束文件
CONSTR = constr/top.nxdc

#构建目录、verilator目标目录、可执行文件存放路径
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

#传递给verilator的参数：以c++形式输出调试信息，并自动依据makefile进行构建
VERIARG = -Wall --cc -MMD --build 

#传递给preproject连接器的信息，添加SDL2库信息
LDFLAGS += -lSDL2 -lSDL2_image

#包含文件路径，加前缀-I传递给g++，INC_PATH在nvbroad.mk中定义
INCFLAGS = $(addprefix -I, $(INC_PATH))

#传递给g++的编译参数，包括包含路径和TOP_NAME的定义
CFLAGS += $(INCFLAGS)  -DTOP_NAME="\"V$(TOPNAME)\""

#包含nvbroad.mk
include $(NVBOARD_HOME)/scripts/nvboard.mk
#新建构建目录，防止出现无法新建autobind.cpp的错误
$(shell mkdir -p $(BUILD_DIR))

#默认的构建对象
sim:  $(CSRC) $(VSRC) $(NVBOARD_ARCHIVE)
#提交当前存储区，提交信息为sim RTL
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	
#运行verilator，传递给其编译参数
#指定top模块名称
#添加所有源文件和nvbroad库
#传递所有preproject连接器参数，加前缀
#传递所有编译器参数，加前缀
#指定生成对象目录，生成可执行文件，输出路径为预先指定的可执行文件存储路径
	verilator $(VERIARG) \
		-top $(TOPNAME) \
		$^ \
		$(addprefix -LDFLAGS , $(LDFLAGS)) \
		$(addprefix -CFLAGS , $(CFLAGS)) \
		--Mdir $(OBJ_DIR)  --exe -o $(abspath $(BIN))

clean:
	rm -rf $(BUILD_DIR)

#自动绑定文件，由于其被可执行文件依赖，会先生成该文件。调用python执行nvbroad自带的.py文件，输入约束文件，输出自动绑定文件
$(SRC_AUTO_BIND): $(CONSTR) 
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py  $^ $@