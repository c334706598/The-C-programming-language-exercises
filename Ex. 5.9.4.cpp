#include <iostream>

void swap1(int* pa, int* pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void swap2(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 100;
	int b = 27;
	swap1(&a, &b);
	std::cout << "a=" << a << ", b=" << b << std::endl;
	swap2(a, b);
	std::cout << "a=" << a << ", b=" << b << std::endl;
	std::cin.ignore();
}