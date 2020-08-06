#include <iostream>

using namespace std;

int main ()
{
	int n, m;
	cin >> n >> m;

	int** arr = new int* [n];
	for (int k (0); k < n * m; k++)
	{
		int i = k / m;
		int j = k % m;

		if (!j)
		{
			arr[i] = new int[m];
		}
		arr[i][j] = i * j;
	}

	for (int i (0); i < n; i++)
	{
		for (int j (0); j < m; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}