#include <iostream>
#include <string>

using namespace std;

//You should not invoke sizeof on the argument of the function, because the argument is not truly an array, 
//but merely a pointer to its beginning(64 - bit = 8 bytes)

void LOG(string Arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << Arr[i] << endl;
	}
}
int main() {
	string Months[12] = { "JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC" };

	for (int i = 0; i < 12; i++) {
		cout << Months[i] << endl;
	}

	int size = sizeof(Months) / sizeof(*Months);
	LOG(Months, size);
	cin.ignore();
}