#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int a[35];
	for (int i (0); i < n; i++)
	{
		cin >> a[i];

		if (i % 2)
		{
			swap (a[i], a[i - 1]);
		}
	}

	for (int i (0); i < n; i++)
	{
		cout << a[i] << ' ';
	}

	return 0;
}