#include<iostream>
using namespace std;

void rev(char* arg1)
{
	char* ptr1 = arg1;
	char* ptr2 = arg1;
	while (ptr2 && *ptr2) ++ptr2;
	for (--ptr2; ptr2 > ptr1; ++ptr1, --ptr2)
	{
		*ptr1 = *ptr1 ^ *ptr2;
		*ptr2 = *ptr1 ^ *ptr2;
		*ptr1 = *ptr1 ^ *ptr2;
	}
}

char* itoa(int i, char* b)
{
	int digit;
	int base = 10;
	char* p = b;
	
	if (i == 0)
	{
		*b = '0';
		*(b + 1) = '\0';
		return b;
	}

	while (i != 0)
	{
		digit = i % base;
		i /= base;
		switch (digit) {
		case 1: *p = '1';break;
		case 2: *p = '2';break;
		case 3: *p = '3';break;
		case 4: *p = '4';break;
		case 5: *p = '5';break;
		case 6: *p = '6';break;
		case 7: *p = '7';break;
		case 8: *p = '8';break;
		case 9: *p = '9';break;
		case 0: *p = '0';break;
		}
		++p;
	}
	rev(b);
	return b;
}

int main()
{
	cout << "Please input digits:" << endl;
	int i;
	cin >> i;
	char b[10];
	itoa(i, b);
	cout << b << endl;
	cin.ignore();
	cin.ignore();
}