#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main ()
{
	string s;
	getline (cin, s);	

	cout << s[2] << endl;
	cout << s[s.length () - 2] << endl;
	cout << s.substr (0, 5) << endl;
	cout << s.substr (0, s.length () - 2) << endl;
	for (int i (0); i < s.length (); i += 2)
	{
		cout << s[i];
	}
	cout << endl;
	for (int i (1); i < s.length (); i += 2)
	{
		cout << s[i];
	}
	cout << endl;
	reverse (s.begin (), s.end ());
	cout << s << endl;
	for (int i (0); i < s.length (); i += 2)
	{
		cout << s[i];
	}
	cout << endl;
	cout << s.length ();

	return 0;
}