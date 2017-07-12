/*
 * 1. Any charecters or just alphabatics?
 * 2. how many chanrecters?
 * 3. How abt array with each place value represent ascii values
 *
 */
#include<iostream>
using namespace std;

class unqChar{
    string str;
    public:
    bool ustr[256];
    unqChar(string istr) { str = istr; }
    bool find_unique_chars(void);
};

bool unqChar::find_unique_chars(){
    int i = 0;
    int val=0;
    for(int i =0 ; i<str.size(); i++) {
        val = str.at(i);
        if(ustr[val]) return false;
            ustr[val] = true;
        i++;
    }
}

int main(){
    string str = "Hello how are you" ;
    unqChar *uc = new unqChar(str);
    if(!uc->find_unique_chars()) 
        cout << "No unique chars" << endl;
    else
        cout << " unique chars" << endl;

    delete uc;

}
