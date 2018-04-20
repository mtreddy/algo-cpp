
CC = g++

all: dfs bfs

dfs: dfs.o
	$(CC)  -g3 -o dfs dfs.o

dfs.o: dfs.cpp
	$(CC) -g3 -c dfs.cpp

bfs: bfs.o
	$(CC)  -g3 -o bfs bfs.o

bfs.o: bfs.cpp
	$(CC) -g3 -c bfs.cpp
clean:
	rm lcs.o  dfs dfs.o bfs bfs.o
