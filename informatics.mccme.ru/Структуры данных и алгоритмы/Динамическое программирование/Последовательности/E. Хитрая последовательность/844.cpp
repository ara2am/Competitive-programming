#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int arr[1001] {1, 1, 2};
	for (int i (2); i < n / 2 + n % 2 + 1; i++)
	{
		int i2 (2 * i);

		arr[i2] = arr[i] + 1;
		arr[i2 - 1] = arr[i2] + arr[i - 1];
	}

	cout << arr[n];

	return 0;
}