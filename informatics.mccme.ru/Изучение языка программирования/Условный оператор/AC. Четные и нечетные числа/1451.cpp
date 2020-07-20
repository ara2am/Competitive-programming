#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int a, b, c;
	cin >> a >> b >> c;

	int s (abs (a % 2) + abs (b % 2) + abs (c % 2));

	cout << (((s) && (s != 3)) ? "YES" : "NO");

	return 0;
}