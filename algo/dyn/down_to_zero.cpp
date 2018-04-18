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
#include<queue>
#include<math.h>
//#include<bits/stdc++.h>
using namespace std;
int min_steps_bfs(int n)
{
    map<int, int> steps;
    queue<int>  Q;
    steps[1] = 1;
    steps[2] = 2;
    steps[3] = 3;
    if(steps.count(n) != 0)
        return steps[n];
    int curr = 0;
    // Initial Q element
    Q.push(n);
    // Initial number of steps
    steps[n] = 0;
    while(!Q.empty()){
        curr = Q.front();
        Q.pop();
        cout << "front:" << curr << endl;
        // if curr reached zeros means we are down to zero
        if(curr == 0)
            return steps[curr];
        for(int i =2 ; i <= sqrt(curr); i++){
            cout << "curr:" << curr << "i: "<<  i <<endl;
            // Check if number has factors
            if((curr%i == 0)) { 
                   if (steps.count(curr/i) != 0){
                       return(steps[curr/i] + steps[curr] + 1);
                   } else {
                    //increment the step
                    steps[curr/i] =  steps[curr]+1;
                    curr = curr/i;
                    Q.push(curr);
                    cout << "In curr:" << curr << "i: "<<  i <<endl;
                }
            }
        }
        // If number doesn't have factors
        if(steps.count(curr-1) == 0) {
            steps[curr-1] = steps[curr]+1;
            Q.push(curr-1);
        }
        if(curr < 4) {
            cout << "steps 1 and 2 " << steps[curr-1] << " " << steps[curr] << " curr:" << curr << endl;
            return (steps[curr-1] + steps[curr]);
        }
    }
    return -1;
}
map<int, int> minA;
int minVal(int x){
    int minV = INT_MAX;
    if(minA.count(x) == 1){
        return minA[x];
    }
    if(x <= 3){
        return x;
    }
    for(int i=2; i <= sqrt(x); i++){
        
        if(x%i == 0){
            int factor = x/i;
            minV = min(minV, 1+minVal(factor));
            cout << "min " << minV << " factor " << factor << endl;
            return minV;
        }
    }
    minV = min(minV, 1+minVal(x-1));
    minA[x] = minV;
    return minV;
}
int non_dp_down_to_zero(int n)
{
    int moves = 0;
    int tmp = n;
    int fact_cound = 0;
    if(n <= 3)
        return 3;
    while(tmp != 0) {
        /* find largest factor*/
        cout << "1 moves " << moves << "tmp:" << tmp << endl;
        for(int j=2; j <= sqrt(tmp); j++){
            if(tmp%j == 0) {
                tmp = tmp/j;/*We are taking max*/
                moves +=1;
                fact_cound = 1;
                cout << "fact: " << tmp << endl;
                break;
            }
        }
        if(tmp <= 2) {
            cout << "2 moves " << moves << "tmp:" << tmp << endl;
            moves +=tmp;
            break;
        }
        if(fact_cound) {
            fact_cound = 0;
            continue;
        } else {
            tmp -=1;
            moves +=1;
        }
    }
    return moves;
}
int downToZero(int n) {
    /*
     * Write your code here.
     */
    minA[n] = minVal(n);
        cout << "result is:"<<  minA[n] << endl;
   return minA[n];
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
        //int result = downToZero(n);
        //int result = non_dp_down_to_zero(n);
        int result = min_steps_bfs(n);
        cout << "In main:" << result << "\n";
    }

    fout.close();

    return 0;
}

