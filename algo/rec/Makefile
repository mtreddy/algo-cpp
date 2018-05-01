
CC = g++

all: power_sum perm_btrack

perm_btrack: perm_btrack.o
	$(CC)  -g3 -o perm_btrack perm_btrack.o

perm_btrack.o: perm_btrack.cpp
	$(CC) -g3 -c perm_btrack.cpp
power_sum: power_sum.o
	$(CC)  -g3 -o power_sum power_sum.o

power_sum.o: power_sum.cpp
	$(CC) -g3 -c power_sum.cpp

clean:
	rm power_sum power_sum.o perm_btrack.o perm_btrack
