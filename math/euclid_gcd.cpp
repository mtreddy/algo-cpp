#include<iostream>
#include<math.h>

using namespace std;

int gcd(int x, int y)
{
    int r = 0;
    while(y !=0 ) {
        r =x%y;
        x = y;
        y = r;
    }
    return x;
}
int main()
{
    int x = 662;
    int y = 414;
    cout << "gcd for " << x << " and " << y << " is " << gcd(x,y) <<endl;
    return 0;
}
