#include <iostream>

using namespace std;

int main ()
{
	int n, m;
	cin >> n >> m;

	int max (0), x (0), y (0);
	for (int i (0); i < n; i++)
	{
		for (int j (0), a; j < m; j++)
		{
			cin >> a;

			if (a > max)
			{
				max = a;
				x = i;
				y = j;
			}
		}
	}

	cout << max << endl << x << ' ' << y;

	return 0;
}