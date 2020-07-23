#include <iostream>
#include <algorithm>

using namespace std;

bool comparator (int n1, int n2)
{
	return n1 > n2;
}

int main ()
{
	int n, m;
	cin >> n >> m;

	int* arr = new int[n];
	for (int i (0); i < n; i++)
	{
		arr[i] = 0;

		for (int j (0), a; j < m; j++)
		{
			cin >> a;

			if (a > arr[i])
			{
				arr[i] = a;
			}
		}
	}

	sort (arr, arr + n, comparator);

	int result (1);
	for (int i (1); i < n; i++)
	{
		if (arr[i] != arr[0])
		{
			break;
		}

		result++;
	}

	cout << result;

	return 0;
}