CC = g++ 
TARGET = test
SRC = 9.cpp
OBJ = $(SRC:.cpp=.o)
$(TARGET):$(OBJ)
	$(CC) -o  $@ $^  -g 
clean:
	rm -rf $(TARGET) $(OBJS)
# 编译规则 $@代表目标文件 $< 代表第一个依赖文件
%.o:%.cpp
	$(CC) -o $@ -c $<  -g -std=c++11
