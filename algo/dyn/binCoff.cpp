//g++ binCoff.cpp  -o binCoff
#include <iostream>
using namespace std;


class binCoff{
    public:
        int recurBCoff(int n, int k);
};

int binCoff::recurBCoff(int n, int k){
    if(k==0 | k==n )
        return 1;

    return recurBCoff(n-1,k-1) + recurBCoff(n-1,k);
}


int main()
{
    int n = 5, k = 2;
    binCoff bc;
    cout << "value of C(" << n << "," <<  k << ")" << "is" << bc.recurBCoff(n,k) << endl;
}
