#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
	int n, i, j;
	cin >> n >> i >> j;

	if (i > j)
	{
		swap (i, j);
	}

	cout << min (j - i, n - j + i) - 1;


	return 0;
}