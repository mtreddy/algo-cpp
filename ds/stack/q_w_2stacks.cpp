#include<iostream>
#include<stack>
using namespace std;


class queWS{
    public:
        stack <int > q1;
        void queue(int data){
            stack <int> tmp;
            /*First element*/
            while(!q1.empty()){
                tmp.push(q1.top());
                q1.pop();
            }
            q1.push(data);
            while(!tmp.empty()){
                q1.push(tmp.top());
                tmp.pop();
            }
        }
        int dequeue(){
            if(!q1.empty()) {
                int val = q1.top();
                q1.pop();
                return val;
            } else {
                return 0;
            }
        }
};

int main()
{
    class queWS qs;
    qs.queue(100);
    qs.queue(200);
    qs.queue(300);
    qs.queue(400);
    cout << "size of the queue:" << qs.q1.size() << endl;
    /*
    while(!qs.q1.empty()){
        cout << qs.q1.top() << endl;
        qs.q1.pop();
    } */
    cout << "top element is:" << qs.dequeue() << endl;

    
}
