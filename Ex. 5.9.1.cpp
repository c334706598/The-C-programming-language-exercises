#include <iostream>

char ch = 'y';
char* p_ch = &ch;
char** pp_ch = &p_ch;
int arr[10] = {43,2,1};
int* p_arr = arr;
char string[] = "bacd";
char* p_string = string;
const int cint = 1;
const int* p_cint = &cint;
int a = 1;
int *const cp_int = &a;

int main() {
	std::cout << int(&ch) << std::endl;
	std::cout << int(p_ch) << std::endl;
	std::cout << *p_ch << std::endl;
	std::cout << int(*pp_ch) << std::endl;
	std::cout << **pp_ch << std::endl;
	std::cout << *(++p_arr) << std::endl;
	std::cout << *p_string << std::endl;
	std::cin.ignore();

}