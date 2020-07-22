#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string dir;
	int a, x (0), y (0);
	while (cin >> dir >> a)
	{
		if (dir == "North")
		{
			y += a;
		} else if (dir == "South")
		{
			y -= a;
		} else
		{
			x += (dir == "East") ? a : -a;
		}
	}

	cout << x << ' ' << y;

	return 0;
}