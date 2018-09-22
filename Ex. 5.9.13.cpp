#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Date
{
	int year;
	int month;
	int day;
};

void output_Date(Date date)
{
	cout << "year:" << date.year << endl;
	cout << "year:" << date.month << endl;
	cout << "year:" << date.day << endl;
}

void input_Date(Date& date)
{
	cout << "Please input year" << endl;
	cin >> date.year;
	cout << "Please input month" << endl;
	cin >> date.month;
	cout << "Please input day" << endl;
	cin >> date.day;
}

int main()
{
	Date date = {
		1992, // year
		2,    // month
		14    // day
	};

	input_Date(date);
	cin.ignore();
	output_Date(date);
	cin.ignore();
}