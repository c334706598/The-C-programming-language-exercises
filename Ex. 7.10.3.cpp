#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	for (int i = 1; *(argv + i) != 0; ++i)
	{
		cout << "Hello, " << argv[i] << endl;
	}
}