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

		for (int j (0); j < m; j++)
		{
			arr[i][j] = (((!i) || (!j)) ? 1 : arr[i - 1][j] + arr[i][j - 1]);
		}
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