#include<iostream>
#include<stack>
using namespace std;

void show_stack(stack <int> st)
{
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
}
int main(void )
{
    stack <int> st;
    int val = 0;
    st.push(1);
    st.push(11);
    st.push(21);
    st.push(31);

    cout << "Stack size:" << st.size() << endl;

    while(cin){
        cin >> val;
        st.push(val);
    }
    cout << "Stack size:" << st.size() << endl;
    show_stack(st);
    return 0;
}
