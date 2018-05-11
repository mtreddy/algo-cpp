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
int lcs_rec(char *X, char *Y, int m, int n)
{
    if(m==0 || n==0)
        return 0;
    if(X[m-1] == Y[n-1])
        return 1 + lcs_rec(X,Y,m-1,n-1);
    else
        return max(lcs_rec(X,Y,m-1,n), lcs_rec(X,Y,m,n-1));
}
/*
 * Bottom up DP way of solving the problem
 */

int lcs_dp(char *X, char *Y, int m, int n)
{
    int LCS[m+1][n+1];
    int i=0, j=0;

    for(i=0; i<=m; i++){
        for(j=0;j<=n;j++) {
            LCS[i][j] = 0;
        }
    }
    for(i=0; i<=m; i++){
        for(j=0;j<=n;j++) {
            if(i == 0 || j == 0) {
                LCS[i][j]=0;
             } else if(X[i-1] == Y[j-1]){
                LCS[i][j] = LCS[i-1][j-1] + 1;
                //cout << "1 i,j" << i << "," << j << " LCS[i][j]= " << LCS[i][j] << endl;
            }else{
                LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]); 
                //cout << "2 i,j=" << i << "," << j << " LCS[i][j]= " << LCS[i][j] << endl;
            }
        }
    }
    /* Print LCS*/
    i = m; j = n;
    string str1= "";
    while(i >0 || j > 0){
        /* if upper diagonal is incremented then we have new charecter */
        if(LCS[i][j] == LCS[i-1][j-1]+1) {
            str1 = str1 + X[i-1];
                j--;
                i--;
            /* Move to the side that gave us eht maximum*/
        } else if(LCS[i][j] == LCS[i-1][j]){
            i--;
        } else {
            j--;
        }
    }
    reverse(str1.begin(), str1.end());
    cout << endl;
    cout << " Longest str: " << str1 << endl;
    return LCS[m][n];
}

int main()
{
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";
    int m = strlen(X);
    int n = strlen(Y);

    cout<< "REC: longest common subseq between  "<< X << " and " << Y << "is: "  << lcs_rec( X, Y, m, n ) << endl;
    cout<< " DP: longest common subseq between  "<< X << " and " << Y << "is: "  << lcs_dp( X, Y, m, n ) << endl;
}
