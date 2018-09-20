#include <iostream>
#include <limits>

using namespace std;

int main() {
	char current_letter = 'a';
	char current_digit = '0';
	char current_char;

	while (current_letter <= 'z') {
		cout << current_letter;
		current_letter += 1;
	}
	cin.ignore();

	while (current_digit <= '9') {
		cout << current_digit;
		current_digit += 1;
	}
	cin.ignore();

	current_char = numeric_limits<char>::min();
	cout << current_char;
	while (current_char < numeric_limits<char>::max()) {
		current_char += 1;
		cout << current_char;
	}
	cin.ignore();

}