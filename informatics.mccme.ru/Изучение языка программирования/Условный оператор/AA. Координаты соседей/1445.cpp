#include <iostream>

using namespace std;

int main ()
{
	int m, n, x, y;
	cin >> m >> n >> x >> y;

	if (x + 1 <= m)
	{
		cout << x + 1 << ' ' << y << endl;
	}
	if (y + 1 <= n)
	{
		cout << x << ' ' << y + 1 << endl;
	}
	if (x - 1 > 0)
	{
		cout << x - 1 << ' ' << y << endl;
	}
	if (y - 1 > 0)
	{
		cout << x << ' ' << y - 1;
	}

	return 0;
}