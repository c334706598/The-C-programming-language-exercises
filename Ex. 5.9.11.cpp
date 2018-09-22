#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string word;
	vector<string> v;

	cout << "Please enter words" << endl;
	while (true)
	{
		cin >> word;
		if (word == "Quit")
		{
			cin.ignore();
			break;
		}
		v.push_back(word);
	}

	cout << v.size() << endl;
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()),v.end());
	cout << v.size() << endl;

	for (vector<string>::iterator i = v.begin(); i != v.end(); ++i)
	{
		cout << *i << endl;
	}
	cin.ignore();
}