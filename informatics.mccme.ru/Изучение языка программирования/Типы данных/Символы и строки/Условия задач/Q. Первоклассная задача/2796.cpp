#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string x;
	int n;
	cin >> x >> n;

	for (int i (1); i < n; i++)
	{
		string it ("");

		char prevChar (x[0]);
		int count (1);
		for (int j (1); j < x.length (); j++)
		{
			if (x[j] != prevChar)
			{
				it += to_string (count) + prevChar;

				prevChar = x[j];
				count = 0;
			}

			count++;
		}

		x = it + to_string (count) + prevChar;
	}

	cout << x;

	return 0;
}