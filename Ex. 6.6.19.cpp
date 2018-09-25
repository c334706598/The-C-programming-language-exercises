#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

int no_of_errors;
int curr_line = 0;
double number_value;
string string_value;
map<string, double> table;

enum Token_value {
	NAME,		NUMBER,			END,
	PLUS='+',	MINUS='-',		MUL='*',	DIV='/',
	PRINT=';',	ASSIGN='=',		LP='(',		RP=')'
};

Token_value curr_tok = PRINT;

double error(const string& s)
{
	no_of_errors++;
	cerr << "error:" << s << "," << '\t' << "line:" << curr_line << '\n';
	return 1;
}

double expr(bool);

Token_value get_token()
{
	char ch;
	do {
		if (!cin.get(ch)) return curr_tok = END;
	} while (ch != '\n' && isspace(ch));

	switch (ch)
	{
	case ';':
	case '\n':
		curr_line += 1; return curr_tok = PRINT;
	case '*':
	case '/':
	case '+':
	case '-':
	case '(':
	case ')':
	case '=':
		return curr_tok = Token_value(ch);
	case '0':case '1':case '2':case '3':case '4':
	case '5':case '6':case '7':case '8':case '9':
	case '.':
		cin.putback(ch);
		cin >> number_value;
		return curr_tok = NUMBER;
	default:     //NAME, NAME=, or error
		if (isalpha(ch)) {
			string_value = ch;
			while (cin.get(ch) && isalnum(ch)) string_value.push_back(ch);
			cin.putback(ch);
			return curr_tok = NAME;
		}
		error("bad token");
		return curr_tok = PRINT;
	}
}

double prim(bool get)
{
	if (get) get_token();
	switch (curr_tok) {
	case NUMBER:
	{
		double v = number_value;
		get_token();
		return v;
	}
	case NAME:
	{
		double& v = table[string_value];
		if (get_token() == ASSIGN) v = expr(true);
		return v;
	}
	case MINUS:
		return -prim(true);
	case LP:
	{
		double e = expr(true);
		if (curr_tok != RP) return error(") expected");
		get_token();
		return e;
	}
	default:
		return error("primary expected");
	}
}

double term(bool get)
{
	double left = prim(get);
	for (;;)
		switch (curr_tok) {
		case MUL:
			left *= prim(true);
			break;
		case DIV:
			if (double d = prim(true)) {
				left /= d;
				break;
			}
			return error("divide by 0");
		default:
			return left;
		}
}

double expr(bool get)
{
	double left = term(get);
	for(;;)
		switch (curr_tok) {
		case PLUS:
			left += term(true);
			break;
		case MINUS:
			left -= term(true);
			break;
		default:
			return left;
		}
}



int main()
{
	table["pi"] = 3.1415926;
	table["e"] = 2.7182818;
	while (cin) {
		get_token();
		if (curr_tok == END) break;
		if (curr_tok == PRINT) continue;
		cout << expr(false) << '\n';
	}
	return no_of_errors;
}