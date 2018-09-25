# include <iostream>

using namespace std;

int atoi(const char* str)
{
	int res = 0;
	int base = 10;
	int start = 0;

	if (*str == '0')
	{
		if (*(str + 1) == 'x')
		{
			base = 16;
			start = 2;
		}
		else
		{
			base = 8;
			start = 1;
		}
	}

	while (*(str + start) != '\0')
	{
		int digit;
		res *= base;
		switch (*(str + start)) {
		case '0': digit = 0; break;
		case '1': digit = 1; break;
		case '2': digit = 2; break;
		case '3': digit = 3; break;
		case '4': digit = 4; break;
		case '5': digit = 5; break;
		case '6': digit = 6; break;
		case '7': digit = 7; break;
		case '8': digit = 8; break;
		case '9': digit = 9; break;
		case 'A':case 'a': digit = 10; break;
		case 'B':case 'b': digit = 11; break;
		case 'C':case 'c': digit = 12; break;
		case 'D':case 'd': digit = 13; break;
		case 'E':case 'e': digit = 14; break;
		case 'F':case 'f': digit = 15; break; 
		default: cerr << "Error, invalid character" << end; // exit(1);
		}
		if (digit >= base)
		{
			cerr << "Error, digit larger than the current base" << endl;
			// exit(1);
		}
		res += digit;
		++start;
	}
	return res;
}

int main() 
{
	char str[10];
	cout << "Please input number, no longer than 9 chars" << endl;
	cin >> str;
	cout << atoi(str) << endl;
	cin.ignore();
	cin.ignore();
}