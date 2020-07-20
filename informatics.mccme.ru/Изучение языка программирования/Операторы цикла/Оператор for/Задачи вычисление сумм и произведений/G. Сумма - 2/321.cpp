#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	double result (1);
	int sign (-1);
	for (int i (1); i <= n; i++)
	{
		result += sign / (double) (2 * i + 1);
		sign = -sign;
	}

	cout << 4 * result;

	return 0;
}