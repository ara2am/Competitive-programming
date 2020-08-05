#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
	string line;
	getline (cin, line);

	int k;
	cin >> k;

	stringstream ss (line);
	for (int i (0), a; ss >> a; i++)
	{
		if (i != k)
		{
			cout << a << ' ';
		}
	}

	return 0;
}