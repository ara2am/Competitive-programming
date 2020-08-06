#include <iostream>
#include <string>

using namespace std;

string archiveString (string s)
{
	if (s.length () == 1)
	{
		return s;
	}
	
	string result ((s.length () > 2) ? archiveString (s.substr (1, s.length () - 2)) : "");
	if (s[0] != s[s.length () - 1])
	{
		result.insert (result.begin (), s[0]);
		result.insert (result.end (), s[s.length () - 1]);
	}
	
	return result;
}

int main ()
{
	string s;
	cin >> s;

	cout << archiveString (s);

	return 0;
}