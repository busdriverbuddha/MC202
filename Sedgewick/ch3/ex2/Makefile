CC = gcc
CFLAGS = -Wall -std=c99 -pedantic
DEPS = list.h defs.h
OBJ = main.o list.o
RM = rm -f

all: main clean

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<
	
main: $(OBJ)
	$(CC) $(CFLAGS) -lm -o $@ $^

clean:
	$(RM) *.o