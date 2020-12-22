############################
# 内置变量
#CROSS_COMPILE=aaa
#CC=$(CROSS_COMPILE)gcc
# all: 
# 	echo "no prefix"
# 	@echo "with @"
# 	-echo "with -"
# 	@echo $(RM)
# 	@echo $(AR)
# 	@echo $(CC)
# 	@echo $(CXX)
# 	@echo $(CROSS_COMPILE)

############################
# 条件判断
foo = helloworld
ifdef foo 
aa = yes 
else 
aa = no 
endif 

foo = 
ifndef foo 
aa = yes 
else 
aa = no 
endif 

bar = 
foo = $(bar)
ifdef foo 
aa = yes 
else 
aa = no 
endif 

############################
# 内置函数
# aa = $(subst foo,bar,foot on the street)
# aa = $(dir src/foo.c bar.c)
# aa = $(notdir src/foo.c bar.c)
# aa = $(suffix src/foo.c bar.o myfile)
# aa = $(basename src/foo.c bar.o myfile)
# aa = $(addsuffix .c, src/foo bar myfile)
# aa = $(addprefix src/, foo bar myfile)

# names = a b c d  
# aa = $(foreach n,$(names),$(n).o)
# aa = $(if $(SRC_DIR) $(SRC_DIR),/usr/src)

# reverse = $(2) $(1)
# aa = $(call reverse,a,b)

all: 
	@echo $(aa)
	@echo $(foo)
############################
# 实例
# No 1
# a.out: main.c foo.c bar.c 
# 	gcc main.c foo.c bar.c -o a.out

# No 2
# a.out: main.o foo.o bar.o 
# 	gcc main.o foo.o bar.o -o a.out

# main.o: main.c
# 	gcc -c main.c
  
# foo.o: foo.c
# 	gcc -c foo.c
  
# bar.o: bar.c
# 	gcc -c bar.c

# No 3
# target=a.out
# SRCS=main.c foo.c bar.c 
# OBJS=main.o foo.o bar.o 

# $(target):$(OBJS)
# 	$(CC) $^ -o $@

# No 4
# target=a.out
# SRCS=$(wildcard ./*.c)
# OBJS=$(patsubst ./%.c, ./%.o, $(SRCS))

# $(target):$(OBJS)
# 	$(CC) $^ -o $@

# %.o: %.c
# 	$(CC) -c $< -o $@