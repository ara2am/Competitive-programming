#include <iostream>
#include <string>

using namespace std;

string solveTask (string s)
{
	if (s.length () == 0)
	{
		return "";
	}

	string result (solveTask (s.substr (1)));
	result.insert (result.begin (), s[0]);
	result.insert (result.end (), (s[0] == '(') ? ')' : s[0]);
	return result;
}

int main ()
{
	string s;
	cin >> s;

	cout << solveTask (s);

	return 0;
}