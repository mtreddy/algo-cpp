#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000 /*1000 integers depth*/
class Stack{
    int top ; /*This indicates no elements in stac*/
    public:
    int arr[MAX];
    Stack(){ top = -1;};
    bool push(int val);
    int pop(void);
    bool isEmpty();
};

bool Stack::push(int val){
    if(top > MAX) {
        cout << "stack overflow" << endl;
        return false;
    } else {
        arr[++top] = val;
    }
    return true;
}
int Stack::pop(void) {
    if(top < 0) {
        cout << "stack underflow" << endl;
        return 0;
    } else {
        return arr[top--];
    }
}

bool Stack::isEmpty(void){
    if(top < 0)
        true;
    else
        false;
}

int main() {
    class Stack st;
    st.push(1);
    st.push(11);
    st.push(2);
    st.push(22);
    cout << st.pop() << " " << endl;
    cout << st.pop() << " " << endl;
    cout << st.pop() << " " << endl;
    cout << st.pop() << " " << endl;
    cout << st.pop() << " " << endl;
}
