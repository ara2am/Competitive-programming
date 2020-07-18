#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	cout << abs (n % 10 - n / 1000) + abs (n / 10 % 10 - n / 100 % 10) + 1;

	return 0;
}