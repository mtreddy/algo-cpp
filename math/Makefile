
CC = g++

all: rsa

rsa: rsa_encr.o rsa_mod.o
	$(CC)  -g3 -o rsa rsa_encr.o rsa_mod.o

bfs.o: rsa_encr.cpp rsa_mod.cpp
	$(CC) -g3 -c rsa_encr.cpp rsa_mod.cpp
clean:
	rm lcs.o  rsa_encr.o rsa_mod.o rsa
