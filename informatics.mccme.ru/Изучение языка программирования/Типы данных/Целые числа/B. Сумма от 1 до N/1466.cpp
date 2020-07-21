#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	long long n;
	cin >> n;

	long long result (abs (n));
	if (result % 2)
	{
		result *= (1 + result) / 2;
	} else
	{
		result = result / 2 * (1 + result);
	}

	cout << ((n < 0) ? 1 - result : result);

	return 0;
}