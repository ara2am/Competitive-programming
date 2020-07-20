#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	float a, b, c;
	cin >> a >> b >> c;

	float d (b * b - 4 * a * c);
	if (d > 0)
	{
		a *= 2;
		cout << (-b - sqrt (d)) / a << ' ' << (-b + sqrt (d)) / a;
	} else if (!d)
	{
		cout << -b / (2 * a);
	}

	return 0;
}