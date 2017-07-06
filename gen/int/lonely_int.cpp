#include<iostream>
#include<vector>
using namespace std;


class lonelyInt{
    public:
        int find_lonely_int(vector<int> arr){
            int val = 0;
            for(int i=0; i < arr.size(); i++){
                    val ^= arr[i];
            }
            return val;
        }
};

int main()
{
    class lonelyInt lint;
    vector<int> arr;
    int arr1 [] = {1,2,3,4,1,2,3,4,12};
    for(int i =0 ;i< 9; i++){
        arr.push_back(arr1[i]);
    }
    cout << "lonely intger is" << lint.find_lonely_int(arr) << endl;
}
