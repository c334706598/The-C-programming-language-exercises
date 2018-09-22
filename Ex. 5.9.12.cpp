#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> StrToVec(string str)
{
	vector<char> res;
	for (string::iterator it = str.begin(); it != str.end(); ++it) {
		res.push_back(*it);
	}
	return res;
}

vector<char> CharArrToVec(char input[])
{
	vector<char> res, targ;
	char* p = input;
	while (*p != '\0') 
	{
		res.push_back(*p);
		p++;
	}
	return res;
}

int Count(vector<char> text, vector<char> target)
{
	vector<char>::iterator text_it = text.begin();
	int target_size = target.size();
	int res = 0;
	int matched = 0;
	while (true)
	{
		if (text_it >= text.end()-matched) break;
		if (*(text_it + matched) == *(target.begin() + matched))
		{
			matched++;
			if (matched == target_size)
			{
				res++;
				matched = 0;
				text_it++;
			}
			continue;
		}
		else
		{
			matched = 0;
			text_it++;
			continue;
		}
	}
	return res;
}


int CountPair1(string str, string targ) 
{
	vector<char> text = StrToVec(str);
	vector<char> target = StrToVec(targ);
	return Count(text, target);

}

int CountPair2(char charArr[], string targ)
{
	vector<char> text = CharArrToVec(charArr);
	vector<char> target = StrToVec(targ);
	//cout << text.size() << endl;
	//cout << target.size() << endl;
	//cin.ignore();
	return Count(text, target);
}


int main()
{
	char text[] = "xabaacbaababfababfbaxaba";
	//string text = "xabaacbaababfababfbaxaba";
	string target = "aba";
	//int result = CountPair1(text, target);
	int result = CountPair2(text, target);
	cout << result << endl;
	cin.ignore();

}