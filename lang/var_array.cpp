#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n = 0, q = 0, s = 0, val = 0;
    cin >> n >>q;
    vector <int> arr[n];
    for(int i =0; i < n; i++){
        cout << "Enter no of elementes in aray " << i << endl;
        cin >> s;
        for(int j =0; j < s; j++){
            cout << "enter values one by one " << s << endl;
            cin >> val;
            arr[i].push_back(val);         
        }
    }
    for(int i = 0; i < n; i++){
         cout << "arr " << i << endl;
        for(int j =0; j < s; j++){
            cout << "arr vals" << " " <<  i << " " << j << " " << arr[i][j] <<endl;
        }
    }
    int qry[q][2];
    for(int i = 0; i < q; i++){
        cout << "enter query no"  << i << "arry ele" <<endl;
        cin >> qry[i][0];
        cout << "enter query no"  << i << "sub arry ele" <<endl;
        cin >> qry[i][1];
    }
    for(int i = 0; i < q; i++){
        cout << "qry[i][0] " << qry[i][0] << "qry[i][1] " << qry[i][1] << endl;
        cout <<  arr[qry[i][0]][qry[i][1]] <<endl;
    }
    return 0;
}

