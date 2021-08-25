#include <iostream>

using namespace std;

class functions {
	public:
		int func_xor(int a, int b);
};
		
int functions::func_xor(int a, int b){
	return a^b;
}


int main(int argc, char **argv) {
	class functions f1;
	int a = 0x10, b = 0x1;
	printf("%x xor %x \n", a, b);
	cout << "is: " << f1.func_xor(a,b) << "\n";
}
