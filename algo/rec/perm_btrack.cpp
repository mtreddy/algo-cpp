#include<iostream>

using namespace std;

void RecPermute(string soFar, string rest)
{
     if (rest.empty()) {
        cout << soFar << endl;
     } else {
         for (int i = 0; i < rest.length(); i++) {
             string remaining = rest.substr(0, i)
             + rest.substr(i+1);
             //cout << soFar << endl;
             RecPermute(soFar + rest[i], remaining);
         }
     }
}

int main(){
    string str = "1234";
    string sdr;
    RecPermute(sdr, str);
}
