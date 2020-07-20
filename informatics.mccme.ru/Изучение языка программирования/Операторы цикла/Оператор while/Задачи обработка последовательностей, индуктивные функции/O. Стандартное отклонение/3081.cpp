#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int a, sum (0), sum2 (0), n (-1);
	do
	{
		cin >> a;
		
		sum += a;
		sum2 += a * a;
		n++;
	} while (a);

	float s (sum / (float) n);

	cout << sqrt ((sum2 - 2 * sum * s + s * s * n) / (n - 1));

	return 0;
}