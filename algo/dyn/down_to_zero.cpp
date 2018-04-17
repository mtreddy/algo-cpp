/*
ou are given  queries. Each query consists of a single number . You can perform any of the  operations on  in each move:

1: If we take 2 integers  and  where , , then we can change 

2: Decrease the value of  by .

Determine the minimum number of moves required to reduce the value of  to .

Input Format

The first line contains the integer . 
The next  lines each contain an integer, .

Constraints

 

Output Format

Output  lines. Each line containing the minimum number of moves required to reduce the value of  to .

Sample Input

2
3
4
Sample Output
3
3
Explanation
For test case 1, We only have one option that gives the minimum number of moves. 
Follow  ->  ->  -> . Hence,  moves.

For the case 2, we can either go  ->  ->  ->  ->  or  ->  ->  -> . The 2nd option is more optimal. Hence,  moves.
 *
 */
/*
 * Complete the downToZero function below.
 */
#include<iostream>
#include<fstream>
#include<map>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
map<int, int> minA;
int minVal(int x){
    int minV = INT_MAX;
    if(x <= 3){
        return x;
    }
    if(minA.count(x) == 1){
        return minA[x];
    }
    for(int i=2; i <= sqrt(x); i++){
        
        if(x%i == 0){
            int factor = x/i;
            minV = min(minV, 1+minVal(i));
            cout << "min " << minV << endl;
            return minV;
        }
    }
    minV = min(minV, 1+minVal(x-1));
    minA[x] = minV;
    return minV;
}
int downToZero(int n) {
    /*
     * Write your code here.
     */
    int res = minVal(n);
        cout << "result is"<< res << endl;
   return minVal(n);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int n;
        cin >> n;
        cout << n << " is n " << q << " is q" << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        int result = downToZero(n);
        fout << result << "\n";
    }

    fout.close();

    return 0;
}

