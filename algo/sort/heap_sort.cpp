/*
 * Heap sort:
 *   Iterms are placed in a relation that left child at 2*n and right child 2*n+1.
 *   Where n is the potion of parent(1 based).
 *
 */

#include<iostream>
#include<vector>
using namespace std;
class heapSort{
    public:
        int size;
        vector<int> data;
        heapSort(int arr[], int nsize){
        }
        void buildHeap(void);
        void minHeapify();
        void maxHeapify();
        void print_list(void);
};
void heapSort::print_list(void){
    vector<int>::iterator it;
    for(it=data.begin(); it!=data.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}
void heapSort::maxHeapify(){
}
void heapSort::minHeapify(){
}
void heapSort::buildHeap(void){
    for(int i = data.size()/2; i >=1; i--){
        maxHeapify();
    }
}

int main(){
    int arr[] = {12, 11, 13, 5, 6, 7};
    class heapSort *hp = new heapSort(arr, sizeof(arr)/sizeof(int));
    hp->print_list();
    hp->buildHeap();
    hp->print_list();

}
