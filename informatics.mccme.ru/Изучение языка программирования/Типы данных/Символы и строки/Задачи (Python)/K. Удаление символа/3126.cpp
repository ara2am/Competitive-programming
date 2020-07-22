#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string s;
	getline (cin, s);

	for (char c : s)
	{
		if (c != '@')
		{
			cout << c;
		}
	}
	cout << endl;

	return 0;
}