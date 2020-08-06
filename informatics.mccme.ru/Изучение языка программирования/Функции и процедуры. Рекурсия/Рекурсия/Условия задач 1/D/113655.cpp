#include <iostream>
#include <string>

using namespace std;

string insertStar (string s)
{
	if (s.length () == 1)
	{
		return s;
	}

	string result ("*" + insertStar (s.substr (1)));
	result.insert (result.begin (), s[0]);
	return result;
}

int main ()
{
	string s;
	cin >> s;

	cout << insertStar (s);

	return 0;
}