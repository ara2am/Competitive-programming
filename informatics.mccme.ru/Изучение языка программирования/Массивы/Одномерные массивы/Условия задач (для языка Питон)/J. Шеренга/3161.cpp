#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main ()
{
	string line;
	getline (cin, line);

	int x;
	cin >> x;

	stringstream ss (line);
	int i (0);
	for (int a; ss >> a; i++)
	{
		if (x > a)
		{
			cout << i + 1;
			return 0;
		}
	}

	cout << i + 1;

	return 0;
}