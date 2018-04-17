#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<math.h>
//#include<algorithm>

using namespace std;
int main()
{
    map <int, int> fact;
    int n;
    cout << "Enter number to find factors" << endl;
    cin >> n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) {
            fact[i] = n/i; 
        }
    }
    int min = INT_MAX;
    for(map<int, int>::iterator  st=fact.begin(); st != fact.end(); st++){
       cout << "key " << st->first << " Val "  << st->second << endl;
       if (min  > st->second)
           min = st->second;
    }

    cout << "smalles is " << min << endl;
    
}
