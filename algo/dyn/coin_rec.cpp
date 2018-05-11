#include<iostream>
using namespace std;
int count(int S[]/*Array of numbers*/, int m/*selected m th element*/, int n /*sum*/){
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    if(m <= 0 && n >= 1) {
        return 0;
    }
    return count(S, m-1, n) + count(S, m , n - S[m-1]);
}

int main()
{
    int arr[] = {1,2,3};
    int m = sizeof(arr)/sizeof(arr[0]);
    cout << "count is" << count(arr, m, 4) << endl;
    return 0;
}
