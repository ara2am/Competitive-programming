#include <iostream>

using namespace std;

int main ()
{
	int n, m;
	cin >> n >> m;

	int input[50][50], result[50][50];
	for (int i (0); i < n; i++)
	{
		for (int j (0); j < m; j++)
		{
			cin >> input[i][j];
		}
	}

	for (int i (0); i < n; i++)
	{
		for (int j (0); j < m; j++)
		{
			result[j][i] = input[n - i - 1][j];
		}
	}

	cout << m << ' ' << n << endl;
	for (int i (0); i < m; i++)
	{
		for (int j (0); j < n; j++)
		{
			cout << result[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}