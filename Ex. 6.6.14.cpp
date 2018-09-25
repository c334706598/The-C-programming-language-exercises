# include <iostream>

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

int main()
{
	char str[] = "abcdefg";
	rev(str);
	cout << str << endl;
	cin.ignore();

}