#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int arr[1000] {1, 1};
	for (int i (2); i <= n; i++)
	{
		int nn (i / 2);
		arr[i] = arr[nn] + ((i % 2) ? -1 : 1) * arr[nn - 1];
	}

	cout << arr[n];

	return 0;
}