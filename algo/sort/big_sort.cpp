#include <iostream>
#include <string>
#include <vector>
using namespace std;

class bigSort{
    public:
        int strComp(string str1, string str2);
        void bigSort_inserton(vector<string> &lst);
        void bigSort_buble(vector<string> &lst);
        int partition(vector<string> &lst, int p, int q);
        void bigSort_quick(vector<string> &lst, int p, int q);
        void bigSort_heap(vector<string> &lst);
        void bigSort_merge(vector<string> &lst);
        void bigSort_tree(vector<string> &lst);
        void bigSort_selction(vector<string> &lst);
        void print_list(vector<string> &lst);
};
int bigSort::strComp(string str1, string str2)
{
    if(str1.size() > str2.size()) {
                return 1;
    } else if(str1.size() < str2.size()) {
                return 0;
    } else {
        if(str1.compare(str2) < 0) {
            //cout << "Str1 is smaller .." << endl;
                return 0;
        } else {
            //cout << "Str1 is greater .." << endl;
                return 1;
        }
    }
    return 0;
}
void bigSort::bigSort_inserton(vector<string> &lst)
{
    int i = 0, j = 0;
    for(i=0; i<lst.size() ; i++){
        for(j=i; j<lst.size() ; j++){
            if(strComp(lst[i],lst[j]) != 0) {
                //cout << lst[i] << "is smaller than" << lst[j] << endl;
                std::swap(lst[i],lst[j]);
            }
        }
    }
    return;
}
int bigSort::partition(vector<string> &lst, int p, int q)
{
    int i = 0,j = 0;
    string pivot = lst[q];
    j = p;
    for(i = p; i < q; i++){
        if(strComp(lst[i], pivot) > 0) {
            cout << "i = " << i << "j = " <<j << endl;
            std::swap(lst[i],lst[j]);
            j++;
        }
    }
    std::swap(lst[i],lst[j]);
    return j;
}
void bigSort::bigSort_quick(vector<string> &lst, int p, int q)
{
    int pivot = 0;
    if (p < q) {
        pivot = partition(lst, p, q);
        bigSort_quick(lst, p, pivot -1 );
        bigSort_quick(lst, pivot + 1, q);
    }
    return;
}
void bigSort::bigSort_merge(vector<string> &lst)
{
    return;
}
void bigSort::bigSort_heap(vector<string> &lst)
{
    return;
}
void bigSort::bigSort_tree(vector<string> &lst)
{
    return;
}
void bigSort::bigSort_selction(vector<string> &lst)
{
    return;
}
void bigSort::print_list(vector<string> &lst)
{
    for(int i=0; i<lst.size() ; i++){
        cout << lst[i] << endl;
    }
}
int main(void)
{
    class bigSort bsr;
    vector<string> lst;
        lst.push_back("6");
        lst.push_back("31415926535897932384626433832795");
        lst.push_back("1");
        lst.push_back("3");
        lst.push_back("10");
        lst.push_back("3");
        lst.push_back("5");
    string str1 = "123";
    string str2 = "How are you my friend";
    bsr.print_list(lst);
    //bsr.bigSort_inserton(lst);
    bsr.bigSort_quick(lst, 0, lst.size()-1);
    bsr.print_list(lst);
    return 0;
}
