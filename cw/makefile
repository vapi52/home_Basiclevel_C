TARGET = report\report.exe
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRCS = src\report.c src\temp_functions.c 
INCS = -Iinclude
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ 

%.o: %.c
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@	

clean:
	del .\$(TARGET) 
	del $(OBJS)
	