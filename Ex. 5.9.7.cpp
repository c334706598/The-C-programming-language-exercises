#include <iostream>
#include <string>

using namespace std;

struct Calendar
{
	string month;
	int days;
};

int main() {
	string Months[12] = { "JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC" };
	int Days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	Calendar cal[12];

	for (int i = 0; i < 12; i++) 
	{
		cal[i].month = Months[i];
		cal[i].days = Days[i];
	}
	for (int i = 0; i < 12; i++) { 
		cout << Months[i] << ":" << Days[i] << endl; 
		cout << cal[i].month << ":" << cal[i].days << endl;
	}
	cin.ignore();
}
