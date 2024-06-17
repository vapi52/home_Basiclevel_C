TARGET = sensor.exe
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRCS = main.c temp_api.c
INCS = -Iinc
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

clean:
	del $(OBJS) $(TARGET)

