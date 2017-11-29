//g++ binCoff.cpp  -o binCoff
#include <iostream>
using namespace std;


class binCoff{
    public:
        int recurBCoff(int n, int k);
        int bottomUpBCoff(int n, int k);
        int spsaceOptBCoff(int n, int k);
};
/* Recursive coff compute*/
int binCoff::recurBCoff(int n, int k){
    if(k==0 | k==n )
        return 1;

    return recurBCoff(n-1,k-1) + recurBCoff(n-1,k);
}
/* Bottom up computing */
int binCoff::bottomUpBCoff(int n, int k) {
    int c[n+1][k+1];
    int i, j;

    for(i = 0; i <= n; i++){
        for(j=0; j <= min(i,k); j++ ){
            if(j==0 || i == j)
                c[i][j] = 1;
            else 
                c[i][j] = c[i-1][j-1] + c[i-1][j];
        }
    }
    return c[n][k];
}
/* Space optimized*/
int binCoff::spsaceOptBCoff(int n, int k){
    int C[k+1];

    C[0] = 1;

    for(int i = 1; i < n; i++){
        for(int j = min(i,k); j > 0; j--)
            C[i] = C[j] + C[j-1];
    }
    return C[k];
}
int main()
{
    int n = 5, k = 2;
    binCoff bc;
    cout << "value of C(" << n << "," <<  k << ")" << "is" << bc.recurBCoff(n,k) << endl;

    cout << "bottom up value of C(" << n << "," <<  k << ")" << "is" << bc.bottomUpBCoff(n,k) << endl;
    n = 4; k = 3;
    cout << "space optimized value of C(" << n << "," <<  k << ")" << "is" << bc.bottomUpBCoff(n,k) << endl;
}
