#include<iostream>
#define MAX 100
#define NIL -1
using namespace std;
/*
 * F[n] = F[n-1] + F[n-2]
 */


class fib1{
    public:
        int lookup[MAX];
        fib1(){
            for(int i = 0; i<MAX; i++) {
                lookup[i] = NIL;
            }
        }
        int fibBUp(int n);
        int fibTDown(int n);
};
int fib1::fibBUp(int n){
    if(lookup[n] == NIL) {
        if( n <= 1) {
            lookup[n] = n;
        } else {
            lookup[n] = fibBUp(n - 1) + fibBUp(n - 2);
        }
    }
    return lookup[n];
}
int fib1::fibTDown(int n){
    lookup[0] = 0;
    lookup[1] = 1;
    for(int i=2; i<=n; i++) {
        lookup[i] = lookup[i-1] + lookup[i-2];
    }
    return lookup[n];
}

int main(){
    int n = 10;
    class fib1 fb;
    cout << "\n" << fb.fibBUp(6) << "\n";
    cout << "\n" << fb.fibTDown(7) << "\n";
}
