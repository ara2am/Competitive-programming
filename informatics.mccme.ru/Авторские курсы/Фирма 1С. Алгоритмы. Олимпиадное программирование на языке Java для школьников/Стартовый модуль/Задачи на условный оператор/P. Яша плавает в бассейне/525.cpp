#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
	int n, m, x, y;
	cin >> n >> m >> x >> y;

	if (n > m)
	{
		swap (n, m);
	}

	cout << min (min (x, y), min (n - x, m - y));

	return 0;
}