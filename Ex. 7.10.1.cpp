typedef void(*PF)(char*, int&);
void f1(char*, int&);
void(*pf)(char*, int&);
void f2(PF);
PF f3();

PF f4(PF pf)
{
	return pf;
}




