#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int number (1), count (1);
	for (int i (0); i < n; i++)
	{
		if (!count)
		{
			number++;
			count = number;
		}

		cout << number << ' ';
		count--;
	}

	return 0;
}