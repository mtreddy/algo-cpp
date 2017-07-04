#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
string super_reduced_string(string s){
        int i = 0;
        char c1, c2;
        int found_pairs = 1;
        while((s.size() > 0) && (found_pairs == 1)) {
            found_pairs = 0;
            i = 0;
            while( s.size() >= i ){
            // Complete this function
                if(s[i] == s[i+1]) {
                    s.erase(i,2);
                    found_pairs = 1;
                } else {
                    i++;
                }
            }
        }
        if(s.size() == 0)
            return "Empty String";
        else{
            return s;
        }
}

int main(void)
{
    //string s = "aabbccdd";
    //string s = "aa";
    string s = "baab";
    string result = super_reduced_string(s);
    cout << s <<endl;
    cout << result <<endl;
}
