#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int a[3]{1, 2, 4};
	for (int i (0), tmp; i < n - 1; i++)
	{
		tmp = a[0] + a[1] + a[2];
		a[0] = a[1];
		a[1] = a[2];
		a[2] = tmp;
	}

	cout << a[0];

	return 0;
}