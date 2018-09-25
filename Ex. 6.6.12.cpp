# include <iostream>
# include <map>
# include <string>
# include <vector>
# include <algorithm>

using namespace std;

map<string, float> values;
map<string, int> name_count;
vector<float> raw_data;

string curr_Name;
float curr_Num;

void get_token()
{
	char ch = 0;

	cin >> ch;

	if (isalpha(ch))
	{
		cin.putback(ch);
		cin >> curr_Name;
	}
	else if (isdigit(ch) || ch == '.')
	{
		cin.putback(ch);
		cin >> curr_Num;
	}
	else
	{
		cerr << "error: bad token" << '\n';
	}
}

int main()
{
	while (true)
	{
		cout << "Please input a pair" << endl;
		char input;
		cin >> input;
		if (input == 'Q') break;

		cin.putback(input);
		get_token();
		get_token();
		raw_data.push_back(curr_Num);
		if (values.count(curr_Name) == 0)
		{
			values[curr_Name] = curr_Num;
			name_count[curr_Name] = 1;
		}
		else
		{
			values[curr_Name] += curr_Num;
			name_count[curr_Name] += 1;
		}
	}

	if (name_count.size() == 0)
	{
		cout << "no data" << endl;
		cin.ignore();
		return 0;
	}

	float total_sum = 0;
	int total_count = 0;
	for (map<string, float>::iterator it = values.begin(); it != values.end(); ++it)
	{
		cout << it->first << "'s sum:" << it->second << endl;
		cout << it->first << "'s mean:" << (it->second) / name_count[it->first] << endl;
		total_sum += it->second;
		total_count += name_count[it->first];
	}
	sort(raw_data.begin(), raw_data.end());
	cout << "total sum:" << total_sum << endl;
	cout << "total mean:" << total_sum / total_count << endl;
	if (raw_data.size() % 2 == 1) cout << "median:" << raw_data[raw_data.size() / 2] << endl;
	else cout << "median:" << 0.5 * raw_data[raw_data.size() / 2] + 0.5 * raw_data[raw_data.size() / 2 - 1] << endl;
	cin.ignore();
	cin.ignore();
	return 0;
}