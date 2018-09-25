# include <iostream>

using namespace std;

char* cat(const char* arg1, const char* arg2)
{
	int size1 = 0;
	int size2 = 0;
	while (*(arg1 + size1) != '\0')
	{
		size1++;
	}
	while (*(arg2 + size2) != '\0')
	{
		size2++;
	}
	char* result = new char[size1 + size2 + 1];
	for (int i = 0; i < size1; i++)
	{
		*(result + i) = *(arg1 + i);
	}
	for (int i = 0; i < size2; i++)
	{
		*(result + size1 + i) = *(arg2 + i);
	}
	*(result + size1 + size2) = '\0';
	return result;
}


int main()
{
	char Array1[] = "hello";
	char Array2[] = "Bye bye!";
	char* Array3 = cat(Array1, Array2);
	cout << Array3 << endl;
	cin.ignore();
}