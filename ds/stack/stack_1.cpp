#include<iostream>
#include<stack>
using namespace std;

int main(void )
{
    stack <int> st;
    st.push(1);
    st.push(11);
    st.push(21);
    st.push(31);

    cout << "Stack size:" << st.size() << endl;
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    st.pop();
    cout << st.top() << endl;
    return 0;
}
