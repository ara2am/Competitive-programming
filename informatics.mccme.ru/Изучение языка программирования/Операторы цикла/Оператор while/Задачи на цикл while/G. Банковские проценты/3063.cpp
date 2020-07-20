#include <iostream>

using namespace std;

int main ()
{
	int x, p, y;
	cin >> x >> p >> y;

	x *= 100;
	y *= 100;
	int result (0);
	while (x < y)
	{
		x += x * (p / 100.);
		result++;
	}

	cout << result;

	return 0;
}