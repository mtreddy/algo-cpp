#include <iostream>
#include <vector>
using namespace std;

vector<int> obj;

class object {
	public:
		object() {
			// Create head of the object;
			cout << " Initilizing obhject struct\n";
		}
	void insert_obj(int val);
};

void object::insert_obj(int val) {
	obj.push_back(val);
}

int main() {
	class object obja;
	obja.insert_obj(100);
	if(obj.empty() == true) 
		cout << " obja is empty\n";
	else {
		cout << "Top element:" << obj.back() << "\n";
	}
}
