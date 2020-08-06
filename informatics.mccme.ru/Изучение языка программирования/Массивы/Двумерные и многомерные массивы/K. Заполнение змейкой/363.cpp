#include <iostream>

using namespace std;

int main ()
{
	int n, m;
	cin >> n >> m;

	int** arr = new int* [n];
	for (int i (0); i < n; i++)
	{
		arr[i] = new int[m];

		int limit ((i + 1) * m - 1);
		for (int j (0); j < m; j++)
		{
			arr[i][j] = ((i % 2) ? limit - j : limit - m + j + 1);
		}
	}

	for (int i (0); i < n; i++)
	{
		for (int j (0); j < m; j++)
		{
			cout.width (3);
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}