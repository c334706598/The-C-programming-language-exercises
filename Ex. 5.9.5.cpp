#include <iostream>

char str[] = "a short string";
int main() {
	std::cout << sizeof(str) / sizeof(*str) << std::endl;
	std::cout << sizeof("a short string") << std::endl;
	std::cout << sizeof(str[0]) << std::endl;
	std::cin.ignore();
}