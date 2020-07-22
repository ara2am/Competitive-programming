#include <iostream>
#include <string>

using namespace std;

bool isPalindrom (string s)
{
	for (int i (0); i <= s.length () / 2; i++)
	{
		if (s[i] != s[s.length () - 1 - i])
		{
			return false;
		}
	}

	return true;
}

int main ()
{
	string s;
	cin >> s;

	string result ("");
	for (int i (0); i < s.length (); i++)
	{
		string subS ("");
		for (int j (i); j < s.length (); j++)
		{
			subS += s[j];
			if (((subS.length () > result.length ())) && (isPalindrom (subS)))
			{
				result = subS;
			}
		}
	}

	cout << result;

	return 0;
}