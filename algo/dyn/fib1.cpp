#include<iostream>
#define MAX 100
#define NIL -1
using namespace std;
class fib1{
    public:
        int lookup[MAX];
        fib1(){
            for(int i = 0; i<MAX; i++) {
                lookup[i] = NIL;
            }
        }
        int fib(int n);
};
int fib1::fib(int n){
    if(lookup[n] == NIL) {
        if( n <= 1) {
            lookup[n] = n;
        } else {
            lookup[n] = fib(n - 1) + fib(n - 2);
        }
    }
    return lookup[n];
}

int main(){
    int n = 10;
    class fib1 fb;
    cout << "\n" << fb.fib(6) << "\n";
}
