#include <iostream>
#include <string>

using namespace std;

string insertBrackets (string s)
{
	if (s.length () <= 2)
	{
		return s;
	}

	string result ("(" + insertBrackets (s.substr (1, s.length () - 2)) + ")");
	result.insert (result.begin (), s[0]);
	result.insert (result.end (), s[s.length () - 1]);
	return result;
}

int main ()
{
	string s;
	cin >> s;

	cout << insertBrackets (s);

	return 0;
}