#include <iostream>
#include <vector>
using namespace std;

class testObject{
private:
   int someInt;
public:
   testObject(int a){ someInt=a; }
   void show() { cout<<someInt<<endl; }
};

int main()
{
    vector<testObject> testVector;
    cout << "Initial size: " << testVector.size() <<endl;

    for ( int i = 0; i < 3; i++ )
        testVector.push_back(testObject(i));
    cout << "New size: " << testVector.size() << endl;

    for ( int j = 0; j < 3; j++ )
        testVector[ j ].show();

}    
