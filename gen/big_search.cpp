#include <iostream>
#include <string>
#include <vector>
using namespace std;

class bigSort{
    public:
        int strComp(string str1, string str2);
        void bigSort1(vector<string> &lst);
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
void bigSort::bigSort1(vector<string> &lst)
{
    int i = 0, j = 0;
    string tmp;
    for(i=0; i<lst.size() ; i++){
        for(j=i; j<lst.size() ; j++){
            if(strComp(lst[i],lst[j]) != 0) {
                //cout << lst[i] << "is smaller than" << lst[j] << endl;
                tmp = lst[j];
                lst[j] = lst[i];
                lst[i] = tmp;
            }
        }
    }
    for(i=0; i<lst.size() ; i++){
        cout << lst[i] << endl;
    }
    return;
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
    bsr.strComp(str1, str2);
    bsr.bigSort1(lst);
    return 0;
}
