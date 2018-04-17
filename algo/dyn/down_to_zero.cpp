/*
 * Complete the downToZero function below.
 */
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
            minV = min(minV, 1+minVal(factor));
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
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = downToZero(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

