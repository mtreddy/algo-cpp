
CC = g++

all: rsa gcd

gcd: euclid_gcd.o 
	$(CC)  -g3 -o gcd  euclid_gcd.o 
euclid_gcd.o: euclid_gcd.cpp
	$(CC) -g3 -c euclid_gcd.cpp 
rsa: rsa_encr.o rsa_mod.o
	$(CC)  -g3 -o rsa rsa_encr.o rsa_mod.o

rsa_encr.o: rsa_encr.cpp rsa_mod.cpp
	$(CC) -g3 -c rsa_encr.cpp rsa_mod.cpp
clean:
	rm  rsa_encr.o rsa_mod.o rsa gcd euclid_gcd.o 
