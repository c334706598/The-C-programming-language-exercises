#include <iostream>

void f(char a) {

}

void g(char& a) {

}

void h(const char& a) {

}

int main() {
	char c = 'a';
	unsigned char uc = 'a';
	signed char sc = 'a';

//	f('a');
//	g('a');  // illegal
//	h('a');

//	f(49);
//	g(49);  // illegal
//	h(49);

//	f(3300);  // introduce a tamporary variable
//	g(3300);  // illegal
//	h(3300);  // introduce a tamporary variable

//	f(c);  
//	g(c);  
//	h(c);

//	f(uc);  
//	g(uc);  // illegal
//	h(uc);

//	f(sc);  
//	g(sc);  // illegal
//	h(sc);

}