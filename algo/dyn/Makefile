
CC = g++

all: down_to_zero binCoff lcs lcs_rep

down_to_zero: down_to_zero.o
	$(CC) -g3 -o down_to_zero down_to_zero.o

down_to_zero.o : down_to_zero.cpp
	$(CC) -c down_to_zero.cpp

binCoff: binCoff.o
	$(CC)  -g3 -o binCoff binCoff.o

binCoff.o: binCoff.cpp
	$(CC) -g3 -c binCoff.cpp

lcs: lcs.o
	$(CC)  -g3 -o lcs lcs.o

lcs.o: lcs.cpp
	$(CC) -g3 -c lcs.cpp

lcs_rep: lcs_rep.o
	$(CC)  -g3 -o lcs_rep lcs_rep.o

lcs_rep.o: lcs_rep.cpp
	$(CC) -g3 -c lcs_rep.cpp

clean:
	rm down_to_zero down_to_zero.o binCoff.o binCoff lcs lcs.o  lcs_rep lcs_rep.o
