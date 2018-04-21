#include<iostream>
#include<stdio.h>
typedef unsigned long long u64_t;
/*Choose prime numbers usually huge and secret*/
int E = 7; /*This needs to be relatively prime of (P-1)*(Q-1)*/
u64_t P = 11; 
u64_t Q = 17;
u64_t N = P*Q;


uint64_t mul_mod(uint64_t a, uint64_t b, uint64_t m);
uint64_t mul_mod_opt_x86(uint64_t a, uint64_t b, uint64_t m);
uint64_t pow_mod(uint64_t a, uint64_t b, uint64_t m);
