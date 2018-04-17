
CC = g++

all: down_to_zero

down_to_zero: down_to_zero.o
	$(CC) -g3 -o down_to_zero down_to_zero.o

down_to_zero.o : down_to_zero.cpp
	$(CC) -c down_to_zero.cpp


clean:
	rm down_to_zero down_to_zero.o
