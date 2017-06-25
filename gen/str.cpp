#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class stairs{
    public:
    void print_stairs(int n){
        int i =0 , j = 0, k = 0;
        for(i=0;i<n;i++){
            for(j=0;j<(n-i-1);j++){
                printf(" ");
            }
            for(k=0;k<=i; k++){
                printf("#");    
            }
            printf("\n");
        }
    }
};

int main(){
    int n;
    class stairs str;
    cin >> n;
    str.print_stairs(n);
    return 0;
}
