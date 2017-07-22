#include<iostream>
using namespace std;


class permut_lex{
    private:
        int len;
    public:
        permut_lex(int alen){
            len = alen;
        }
        void permut(int arr[], int fixed);
        void print_arr(int arr[]);

};
void permut_lex::permut(int arr[], int fixed){
    if(fixed == len) {
        print_arr(arr);
        return;
    }
    for(int i=fixed; i < len; i++){
        swap(arr[fixed], arr[i]);
        permut(arr, fixed+1);
        swap(arr[fixed], arr[i]);
    }
    return;
}
void permut_lex::print_arr(int arr[]){
    for(int i=0; i<= len-1; i++){
        cout << arr[i];
    }
    cout << endl;
}
void printArray(int arr[], int len){
    for(int i=0; i<= len-1; i++){
        cout << arr[i];
    }
    cout << endl;
}
void permute(int *array,int i,int length) { 
    if (length == i){
        printArray(array,length);
        return;
    }
    int j = i;
    for (j = i; j < length; j++) { 
        swap(array[i],array[j]);
        permute(array,i+1,length);
        swap(array[i],array[j]);
    }
    return;
}
int main()
{
    int arr[] = {3,4,5,6};
    class permut_lex   pr(sizeof(arr)/sizeof(int));
    pr.permut(arr, 0);
    //permute(arr, 0, 4);
}
