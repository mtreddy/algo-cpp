#include <sstream>
#include <vector>
#include <iostream>
#include <stdio.h>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
    int val;
    vector<int> arr;
    string tmp;
	stringstream ss;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == ',') {
            ss << tmp;
            ss >> val;
            cout << ss.str() << endl;
            /*Clear  ss other wise output will be wrong*/
            ss.clear();
            ss.str("");
            cout << val << endl;
            arr.push_back(val);
            tmp.clear();
        }  else {
            tmp.push_back(str[i]);
        }
    }
    if(tmp.size() != 0) {
        ss << tmp;
        ss >> val;
        arr.push_back(val);
        cout << val << endl;
    }

    return arr;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

