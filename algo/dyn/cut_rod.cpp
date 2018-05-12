#include<iostream>

using namespace std;
int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
int cut_rod(int arr[], int size){
    if(size <= 0)
        return 0;
    int max_val = -1;

    for(int i=0; i<size; i++){
        max_val = max(max_val, arr[i] + cut_rod(arr, size - i -1));
    }
    return max_val;
}
int main()
{
    int size = sizeof(arr)/sizeof(arr[0]);
    size = 4;
    cout<< "max val: " << cut_rod(arr, size) << endl;
}
