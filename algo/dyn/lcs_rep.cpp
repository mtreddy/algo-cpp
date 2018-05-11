#include<iostream>
#include<math.h>

using namespace std;
/*
 *  given two strings you like to find longest
 *  common sub sequence.
 *  Start with last last charecter of each string .
 *  1. if they match decrement index for both strings and increment lcs(X,Y,m-1,n-1)
 *  2. If they don't match decrement  max(lcs(X,Y,m-1,n),lcs(X,Y, m,n-1))
 */
/*
 * Bottom up DP way of solving the problem
 */

int lcs_rep_dp(string str)
{
    int n = str.length();
    int L[n+1][n+1];
    int i=0, j=0;

    for(i=0; i<=n; i++){
        for(j=0;j<=n;j++) {
            L[i][j] = 0;
        }
    }
    for(i=1; i<=n; i++){
        for(j=1;j<=n;j++) {
             if((str[i-1] == str[j-1]) && (i != j)){
                L[i][j] = L[i-1][j-1] + 1;
                //cout << "1 i,j" << i << "," << j << " L[i][j]= " << L[i][j] << endl;
            }else{
                L[i][j] = max(L[i-1][j], L[i][j-1]); 
                //cout << "2 i,j=" << i << "," << j << " L[i][j]= " << L[i][j] << endl;
            }
        }
    }
    /* Print L*/
    i = n; j = n;
    string str1= "";
    while(i >0 || j > 0){
        /* if upper diagonal is incremented then we have new charecter */
        if(L[i][j] == L[i-1][j-1]+1) {
            str1 = str1 + str[i-1];
                j--;
                i--;
            /* Move to the side that gave us eht maximum*/
        } else if(L[i][j] == L[i-1][j]){
            i--;
        } else {
            j--;
        }
    }
    reverse(str1.begin(), str1.end());
    cout << endl;
    cout << " Longest str: " << str1 << endl;
    return L[n][n];
}

int main()
{
    string X = "AABEBCDD";

    cout<< " DP: longest common subseq between  "<< X  << " "<<  lcs_rep_dp( X) << endl;
}
