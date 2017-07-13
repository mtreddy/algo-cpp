#include<iostream>
#include<vector>
#include<map>

using namespace std;

class findSecRep{
    private:
        vector<string> seq;
    public:
        findSecRep(){
            seq.push_back( "ccc"); 
            seq.push_back( "aaa");
            seq.push_back( "ccc");
            seq.push_back( "ddd");
            seq.push_back( "aaa");
            seq.push_back( "aaa");
        }
        string find_second_most_repeated_word(void );
};
string findSecRep::find_second_most_repeated_word(void) {
    map<string, int> occ;
    int max = 0, smax = 0;
    for(int i = 0; i < seq.size();i++){
        occ[seq[i]] += 1;
    }
    string str = "111";
    map<string, int>::iterator i;
    for(i = occ.begin(); i != occ.end(); i++){
        cout << i->second << endl;
        if (i->second > max) {
            max = i->second;
        }
        if((i->second < max) && (i->second > smax)){
            smax = i->second;
            str = i->first;
        }
    }
    return str;
}

int main(){
    class findSecRep rep;
    string str = rep.find_second_most_repeated_word();
    cout << str << endl;
}
