#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int h ((n / 3600) % 24);
	n %= 3600;

	int m (n / 60);
	n %= 60;

	cout << h << ':' << m / 10 % 10 << m % 10 << ':' << n / 10 % 10 << n % 10;

	return 0;
}