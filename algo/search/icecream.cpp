#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class IceCream {
    
    public: 
        int flavor; 
        int index;

        IceCream(int flavor, int index) {
            flavor = flavor;
            index = index;
       }
    static bool compare(IceCream ice1, IceCream ice2){
        return(ice1.flavor > ice2.flavor);
    }
    int print_list();
};

    
int binarySearch(int first, int last, vector<IceCream> arr, int search) {
  	for(int i =0; i < arr.size(); i++){
        if(arr[i].flavor == search)
            return arr[i].flavor;
    } 
    return -1;
}
int IceCream::print_list(void)
{
       cout << " " << index << " " << flavor <<endl;
}
int main() {
    int t;
    int n=5, m = 4;
    vector<IceCream> arr;
    arr.reserve(n); 
    int cost [n]= {1, 4, 5, 3, 2};
   for (int i = 0; i < n; i++) {
       //cout << "i " << i << "cost[n] " << cost[i] << endl;
		arr.push_back(IceCream(cost[i], i + 1));
	}
   for (int i = 0; i < arr.size(); i++) {
        arr[i].print_list(); 
   }
   sort(arr.begin(), arr.end(), IceCream::compare);
   for (int i = 0; i < arr.size(); i++) {
    arr[i].print_list(); 
   }
    for(int i = 0; i < n - 1 ; i++) {
        int search = m - arr[i].flavor;
        if(search >= arr[i].flavor) {
            int index = binarySearch( i + 1, n - 1, arr, search);
            if( index != -1 ) {
                cout << min(arr[i].index, index) << " " << max(arr[i].index, index) << endl;
                break;

            }
        }
    }

}


