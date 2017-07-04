#include <iostream>
#include <vector>
using namespace std;

class person{
    public:
        string name;
        int age;
        virtual  void getdata(void) = 0;
        virtual  void putdata(void)  = 0;
};

class professor: public person{
    public:
    int pub;
    int id;
        professor() {static int cur_id = 0;  cur_id += 1; id = cur_id; getdata(); }
        void getdata(void) { cin >> name ; cin >> age; cin >> pub;}
        void putdata(void) { 
            cout << " " << name ;
            cout << " " << age;
            cout << " " << pub;
            cout << " " << id << endl; 
        }
};
class student: public person {
    public:
    int sub[6];
    int id;
        student() {static int cur_id = 0;  cur_id += 1; id=cur_id; getdata();}
        void getdata(void) {
            cin >> name;
            cin >> age;
            cin >> sub[0];
            cin >> sub[1];
            cin >> sub[2];
            cin >> sub[3];
            cin >> sub[4];
            cin >> sub[5];
        }
        void putdata(void) {
            cout << " " << name;
            cout << " " << age;
            cout << " " << sub[0] + sub[1] + sub[2] + sub[3] + sub[4] + sub[5]; 
            cout << " " << id << endl;
        }
};
int main(){
    int nos;
    int type;
    vector<person*> per;
    cout << "enter no of people" << endl ;
    cin >> nos;
    cout << "you are going to enter 4 entries" << endl ;
    for(int i = 0; i < nos; i++) {
        cout << "Enter type of entry" << endl;
        cin >> type;
        if (type == 1) {
            cout << "Enter professor name age pubs one by one" <<  endl;
            person *prf = new professor();
            per.push_back(prf);
        } else if (type == 2) {
            cout << "Enter Student name age 6 subject marks one by one" << endl;
            person *std = new student();
            per.push_back(std);
        } else {
            cout << "Invalid type" << endl;
        }
    }
    for(int i = 0; i < per.size(); i++) {
        per[i]->putdata();
    }
}
