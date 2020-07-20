#include <iostream>

using namespace std;

int main ()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int n (c * 100 + d - a * 100 - b);

	cout << n / 100 << ' ' << n % 100;

	return 0;
}