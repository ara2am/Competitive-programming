#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main ()
{
	int a[3];
	cin >> a[0] >> a[1] >> a[2];

	sort (a, a + 3);

	if (a[0] + a[1] <= a[2])
	{
		cout << "impossible";
		return 0;
	}

	a[0] = pow (a[0], 2) + pow (a[1], 2);
	a[2] = pow (a[2], 2);

	if (a[0] == a[2])
	{
		cout << "right";
	} else
	{
		cout << ((a[0] > a[2]) ? "acute" : "obtuse");
	}

	return 0;
}