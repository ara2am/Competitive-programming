#include <iostream>

using namespace std;

int main ()
{
	int x, y, z;
	cin >> x >> y >> z;

	if (y < x)
	{
		swap (y, x);
	}
	if (z < y)
	{
		swap (y, z);
	}
	if (y < x)
	{
		swap (y, x);
	}

	cout << x << ' ' << y << ' ' << z;

    return 0;
}