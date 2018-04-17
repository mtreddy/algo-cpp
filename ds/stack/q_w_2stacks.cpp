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
        int top(){
            int val = q1.top();
            return val;
        }
};

int main()
{
    class queWS qs;
    int Q;
    int type;
    int val = 0;
//    qs.queue(100);
//    qs.queue(200);
//    qs.queue(300);
//    qs.queue(400);
    cout << "size of the queue:" << qs.q1.size() << endl;
    cout << "Enter no of elements" << endl;
    cin >> Q;
    while(Q--){
        cin >> type;
        if(type == 1) {
            cin >> val;
            qs.queue(val);
        } else if(type == 2){
            qs.dequeue();
        }else if(type == 3) {
            cout << qs.top() << endl;
        }
    } 
    cout << "top element is:" << qs.top() << endl;
    cout << "popping :" << qs.dequeue() << endl;
    cout << "top element is:" << qs.top() << endl;

    
}
