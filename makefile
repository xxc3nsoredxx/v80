OBJS = v80.o test.o
CC = gcc
CFLAGS = -Wall -Wextra --pedantic-errors -std=c89 -c

system: $(OBJS)
	$(CC) $(OBJS) -o system

v80.o: v80.c v80.h
	$(CC) $(CFLAGS) v80.c

test.o: test.c v80.h
	$(CC) $(CFLAGS) test.c
