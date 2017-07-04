#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void print_list(vector<int> &lst)
{
    for(int i=0; i<lst.size() ; i++){
        cout << lst[i] << " ";
    }
}

void insertionSort(vector <int>  &lst) {
    int i = 0, e = lst[lst.size()-1];
    
    for(i=lst.size()-2; i>=0 ; i--){
            if(lst[i] <= e) {
                lst[i+1] = e;
                print_list(lst);
                cout << endl;
                break;
            } else if(i == 0) {
                lst[i+1] = lst[i];
                print_list(lst);
                cout << endl;
               lst[i] = e; 
            } else {
                lst[i+1] = lst[i];
            }     
        print_list(lst);
        cout << endl;
    }
    return;


}
int main(void) {
    vector <int>  _ar;
    //int arr[] = {1,3,5,9,13,22,27,35,46,51,55,83, 87,23};
    int _ar_size = 14;
    _ar_size = 10;
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 1};
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        _ar.push_back(arr[_ar_i]); 
    }

    insertionSort(_ar);
    return 0;
}

