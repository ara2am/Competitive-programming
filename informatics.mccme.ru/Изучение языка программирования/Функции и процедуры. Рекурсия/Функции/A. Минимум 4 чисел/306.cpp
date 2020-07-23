#include <iostream>

using namespace std;

int min (int a, int b, int c, int d)
{
	int e ((a < b) ? a : b), f ((c < d) ? c : d);

	return ((e < f) ? e : f);
}

int main ()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	cout << min (a, b, c, d);

	return 0;
}