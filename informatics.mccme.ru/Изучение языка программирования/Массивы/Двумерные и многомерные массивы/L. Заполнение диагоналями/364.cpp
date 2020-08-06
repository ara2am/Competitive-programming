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
	}

	for (int j (0), el (0); j < m + n - 1; j++)
	{ 
		for (int i (0); ((i <= j) && (i < n)); i++)
		{
			if (j - i < m)
			{
				arr[i][j - i] = el++;
			}
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