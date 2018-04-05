#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
int main()
{
    int first=0, second=0;
    vector <int> aint;
    aint.assign(20,0);
    for(int i=0; i<20; i++) {
        aint[i] = rand()%100 + 1;
        cout << aint[i] << endl;
    }

    for(int i = 0; i < 20 ; i++) {
        if(aint[i] > first) {
            second = first;
            first = aint[i];
            continue;
        }
        if(second < aint[i])
            second = aint[i];
    }
    cout << "print all" << endl;
    for(int i = 0; i < 20 ; i++) {
        cout << aint[i] << endl;
    }
    cout << first << " " << second << endl;
}
