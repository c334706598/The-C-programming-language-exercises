#include <iostream>
#include <limits>

using namespace std;

int main(){
	cout << "Smallest char is " << int(numeric_limits<char>::min());
	cin.ignore();

	cout << "Largest char is " << int(numeric_limits<char>::max());
	cin.ignore();

	cout << "Smallest short is " << numeric_limits<short>::min();
	cin.ignore();

	cout << "Largest short is " << numeric_limits<short>::max();
	cin.ignore();

	cout << "Smallest int is " << numeric_limits<int>::min();
	cin.ignore();

	cout << "Largest int is " << numeric_limits<int>::max();
	cin.ignore();

	cout << "Smallest long is " << numeric_limits<long>::min();
	cin.ignore();

	cout << "Largest long is " << numeric_limits<long>::max();
	cin.ignore();

	cout << "Smallest unsigned is " << numeric_limits<unsigned>::min();
	cin.ignore();

	cout << "Largest unsigned is " << numeric_limits<unsigned>::max();
	cin.ignore();

	cout << "Smallest double is " << numeric_limits<double>::min();
	cin.ignore();

	cout << "Largest double is " << numeric_limits<double>::max();
	cin.ignore();
}