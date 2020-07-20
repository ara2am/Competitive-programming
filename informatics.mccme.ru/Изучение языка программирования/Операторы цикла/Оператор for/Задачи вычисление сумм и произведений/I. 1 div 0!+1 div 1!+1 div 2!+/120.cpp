#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	if (n > 8)
	{
		n = 8;
	}

	float result (1);
	int factorial (1);
	for (int i (1); i <= n; i++)
	{
		factorial *= i;
		result += 1. / factorial;
	}

	cout << result;

	return 0;
}