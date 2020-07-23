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
			cin >> arr[i][j];
		}
	}

	for (int i (0); i < n; i++)
	{
		for (int j (i); j < n; j++)
		{
			if (arr[i][j] != arr[j][i])
			{
				cout << "no";
				return 0;
			}
		};
	}

	cout << "yes";

	return 0;
}