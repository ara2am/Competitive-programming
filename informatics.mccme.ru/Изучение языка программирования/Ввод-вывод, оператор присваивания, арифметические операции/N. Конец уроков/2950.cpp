#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int m (9 * 60 + n * 45 + ((n - 1) / 2) * 15 + round ((n - 1) / 2.) * 5);
	cout << m / 60 << ' ' << m % 60;

	return 0;
}