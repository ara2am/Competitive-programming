#include <iostream>

using namespace std;

int c (int n, int k)
{
	if ((n == k) || (!k))
	{
		return 1;
	}
	return c (n - 1, k - 1) + c (n - 1, k);
}

int main ()
{
	int n, k;
	cin >> n >> k;

	cout << c (n, k);

	return 0;
}