#include <iostream>

using namespace std;

int main ()
{
	int n, m, w;
	cin >> n >> m >> w;

	int arr[34][34];
	for (int i (0); i <= n + 1; i++)
	{
		for (int j (0); j <= m + 1; j++)
		{
			arr[i][j] = 0;
		}
	}

	for (int i (0); i < w; i++)
	{
		int x, y;
		cin >> x >> y;

		arr[x][y] = -1000;
		arr[x - 1][y]++;
		arr[x - 1][y + 1]++;
		arr[x - 1][y - 1]++;
		arr[x + 1][y]++;
		arr[x + 1][y + 1]++;
		arr[x + 1][y - 1]++;
		arr[x][y + 1]++;
		arr[x][y - 1]++;
	}

	for (int i (1); i <= n; i++)
	{
		for (int j (1); j <= m; j++)
		{
			if (arr[i][j] < 0)
			{
				cout << "* ";
			} else
			{
				cout << arr[i][j] << ' ';
			}
		}
		cout << endl;
	}

	return 0;
}