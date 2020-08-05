#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
	string line;
	getline (cin, line);

	int k, c, i (0);
	cin >> k >> c;

	stringstream ss (line);

	for (int a; ss >> a; i++)
	{
		if (i == k)
		{
			cout << c << ' ';
		}

		cout << a << ' ';
	}

	if (i == k)
	{
		cout << c << ' ';
	}

	return 0;
}