#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string s, maxs ("");

	while (cin >> s)
	{
		if (s.length () > maxs.length ())
		{
			maxs = s;
		}
	}

	cout << maxs << endl << maxs.length ();

	return 0;
}