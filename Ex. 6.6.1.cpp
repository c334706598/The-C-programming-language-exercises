#include <iostream>
//#include <string>
//#include <vector>

using namespace std;

int main()
{
	int i = 0;
	char input_line[10] = {'?','?','?'};
	int max_length = 10;
	int quest_count = 0;
	char* p = input_line;

	//while (i < max_length)
	//{
	//	if (input_line[i] == '?')
	//	{
	//		quest_count++;
	//	}
	//	++i;
	//}
	while (p < input_line + max_length)
	{
		if (*p == '?')
		{
			quest_count++;
		}
		++p;
	}
	
	cout << quest_count << endl;
	cin.ignore();
}


