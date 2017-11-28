#include<iostream>

using namespace std;


class bigInt{
    public:
    void addnum(int a[20], int b[20], int sum[20]);
    void add_str_as_int(string &s1, string &s2, string sum);
    string add (string &s1, string &s2);

};
void bigInt::addnum(int a[20], int b[20], int sum[20])
{
    int carry=0;
    int temp;
    int i;
    for(i=0; i<20; i++) {
        temp=a[i]+b[i]+carry;
        sum[i]=temp%10;
        carry=temp/10;
    }
}
string bigInt::add (string &s1, string &s2){
    int carry=0,sum,i;

    string  min=s1,
    max=s2,
    result = "";

    if (s1.length()>s2.length()){
        max = s1;
        min = s2;
    } else {
        max = s2;
        min = s1;
    }

    for (i = min.length()-1; i>=0; i--){
        sum = min[i] + max[i + max.length() - min.length()] + carry - 2*'0';

        carry = sum/10;
        sum %=10;

        result = (char)(sum + '0') + result;
    }

    i = max.length() - min.length()-1;

    while (i>=0){
        sum = max[i] + carry - '0';
        carry = sum/10;
        sum%=10;

        result = (char)(sum + '0') + result;
        i--;
    }

    if (carry!=0){
        result = (char)(carry + '0') + result;
    }       

    return result;
}
void bigInt::add_str_as_int(string &s1, string &s2, string sum)
{
    int carry = 0;
    int temp;
    int add = 0;
    int i = 0;
    int len = s1.length() < s2.length()? s1.length(): s2.length();
    cout << "\n" << len << "\n";
    for(i=len - 1; i >= 0; i--){
        temp = s1[i] + s2[i] + carry - 2*'0';
        sum.insert(sum.begin(), temp%10 + '0');
        carry = temp/10; 
        cout << s1[i] << " " << s2[i] << " " << temp << " " << carry << " " << sum << "\n";
    }
    cout << "\n" << sum << "\n";
}
int main(){
    class bigInt bint;
    string a = "123456";
    string b = "23456";
    string sum;
    sum = bint.add(a,b); 
    cout << "\n";
    cout << sum;
    cout << "\n";
}
