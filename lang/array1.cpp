#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <malloc.h>
using namespace std;

int main(){
    int n = 5;
    int q = 2;
    cout << "Enter number elements in array of pointers" ;
    cin  >> n;
    cout << "Number of queries" << q;
    cin >> q;
    int *arr[n];
    int ele;
    for(int i = 0; i < n; i++){
        cout << "Enter number of elems for array" << i << endl;
        cin >> ele;
        arr[i] = (int *)malloc(sizeof(int) * ele);
        for(int j =0; j < ele; j++){
            cout << "Enter value one by one" << endl;
            cin >>  arr[i][j];
        }
    }
    int qry[q][2];
    for(int i = 0; i <q; i++){
        cout <<"enter array number to look" << endl;
        cin >> qry[i][0];
        cout <<"enter sub array number to look" << endl;
        cin >> qry[i][1];
    }
    for(int i =0; i < q; i++){
        cout << arr[qry[i][0]][0] << " " <<  arr[qry[i][0]][qry[i][1]] << endl;
    }
}
