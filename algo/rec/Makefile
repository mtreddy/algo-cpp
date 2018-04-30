
CC = g++

all: power_sum

power_sum: power_sum.o
	$(CC)  -g3 -o power_sum power_sum.o

power_sum.o: power_sum.cpp
	$(CC) -g3 -c power_sum.cpp

clean:
	rm power_sum power_sum.o
