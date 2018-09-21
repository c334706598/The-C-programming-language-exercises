#include <iostream>

char ch = 'a';
int i = 1;
int j = 2;
char* pc = &ch;
int* pi = &i;
int* pj = &j;
void* pv;

int main() {
	std::cout << int(pc) << std::endl;
	std::cout << int(pi) << std::endl;
	std::cout << int(pj) << std::endl;
	std::cout << int(pv) << std::endl;
	std::cin.ignore();
}