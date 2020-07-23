#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int arr[100][100];
	for (int i (0); i < n; i++)
	{
		for (int j (0); j < n; j++)
		{
			arr[i][j] = (n - i - 1 == j) + 2 * (n - i - 1 < j);
		}
	}

	for (int i (0); i < n; i++)
	{
		for (int j (0); j < n; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}