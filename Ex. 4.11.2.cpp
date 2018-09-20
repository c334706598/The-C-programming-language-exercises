# include<string>
# include<complex>
# include<iostream>

struct Date {
	int d, m, y;
};

int day(Date* p) {
	return p->d;
}

double sqrt(double d)
{
	double ans = 1;
	double ans_temp = 0;
	int i = 0;
	while (true)
	{
		ans_temp = ans;
		std::cout << ans << "\n";
		ans = 1.0 / 2.0 * (ans_temp + d / ans_temp);
		std::cout << ans;
		std::cout << "\n";
		i++;
		if (ans - ans_temp < 0.01 && ans - ans_temp > -0.01) {
			break;
		}
	}
	return ans;
};

int main()
{
	char ch = 'a';
	std::string s = "abcd";
	int count;
	const double pi = 3.14159;
	int error_number = 0;

	char* name;
	char* season[10];

	typedef std::complex<short> Point;

	struct User { 
		std::string name; 
		std::string password;
	};
	enum Beer { Carlsberg, Tuborg, Thor };

	double square_root, number;
	std::cin >> number;
	square_root = sqrt(number);
	std::cout << square_root;
	std::cin >> number;
}

template<class T> T abs(T a) { return a < 0 ? -a : a; }
