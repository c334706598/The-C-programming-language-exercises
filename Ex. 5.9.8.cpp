#include <iostream>

using namespace std;

// Basically see no difference in .asm file without optimization
// or O2 optimization.

int main() {
	int Arr[10] = { 1,2,3,4,5,6,7,8 };
	int a;
	for (int i = 0; i < 10; i++) {
		 cout << Arr[i];
	}
	//for (int* p = Arr; p < Arr + 10; p++) {
		//cout << *p;
	//}
	cin.ignore(); 
}