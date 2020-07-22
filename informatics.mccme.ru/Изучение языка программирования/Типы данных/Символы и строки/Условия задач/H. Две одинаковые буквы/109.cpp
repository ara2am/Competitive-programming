#include <iostream>
#include <string>
#include <set>

using namespace std;

int main ()
{
	string s;
	cin >> s;

	set<char> symbols;
	for (char c : s)
	{
		if (symbols.find (c) != symbols.end ())
		{
			cout << c;
			break;
		}

		symbols.insert (c);
	}

	return 0;
}