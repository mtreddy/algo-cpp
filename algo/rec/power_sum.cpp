#include <cmath>
#include <iostream>
using namespace std;

//#include <bits/stdc++.h>

using namespace std;

int rec_sum_to_x(int X, int num, int p){
    if(pow(num,p) < X){
        return (rec_sum_to_x(X, num+1, p)+rec_sum_to_x(X-pow(num,p), num+1 , p));
    }else if(pow(num,p) == X){
        return 1;
    } else{
        return 0;
    }
    return 0;
}

int powerSum(int X, int N) {
    // Complete this function
    return rec_sum_to_x(X, 1,N);
}

int main() {
    int X;
    cin >> X;
    int N;
    cin >> N;
    int result = powerSum(X, N);
    cout << result << endl;
    return 0;
}
