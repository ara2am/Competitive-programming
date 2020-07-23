#include <iostream>

using namespace std;

double power (double a, int n)
{
	return ((n) ? a * power (a, n - 1) : 1);
}

int main ()
{
	double a;
	int n;
	cin >> a >> n;

	cout << power (a, n);

	return 0;
}