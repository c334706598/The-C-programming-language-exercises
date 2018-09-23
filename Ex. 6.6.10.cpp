#include <iostream>
using namespace std;
int Strlen(const char* str)
{
	int size = 0;
	while (*str != '\0')
	{
		size += 1;
		++str;
	}
	return size;
}

char* Strcpy(const char* str1, char* str2)
{
	int i;
	for (i = 0; i < Strlen(str); i++)
	{
		*(str2 + i) = *(str1 + i)
	}
	*(str2 + i) = '\0';
	return str2;
}

int Strcmp(const char* str1, const char* str2)
{
	for (;;)
	{
		if (*str1 == '\0' && *str2 == '\0') return 0;
		if (*str1 > *str2) return 1;
		if (*str1 < *str2) return -1;
		++str1;
		++str2;
	}
}