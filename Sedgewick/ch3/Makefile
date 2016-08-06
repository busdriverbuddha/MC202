CC = gcc
CFLAGS = -Wall -std=c99 -pedantic
DEPS = gcd.h
OBJ = ex1.o gcd.o
RM = rm -f

all: ex1 clean

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<
	
ex1: $(OBJ)
	$(CC) $(CFLAGS) -lm -o $@ $^

clean:
	$(RM) *.o