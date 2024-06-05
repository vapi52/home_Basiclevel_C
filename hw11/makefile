CC = gcc

all: prog.exe

prog.exe: main.o temp_api.o
	$(CC) -o prog.exe main.o temp_api.o

main.o: main.c 
	$(CC) -c -o main.o main.c

temp_api.o: temp_api.c
	$(CC) -c -o temp_api.o temp_api.c

clean:
	del *.o
	del prog.exe