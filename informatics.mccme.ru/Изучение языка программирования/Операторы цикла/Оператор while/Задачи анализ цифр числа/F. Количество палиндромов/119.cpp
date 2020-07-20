#include <iostream>

using namespace std;

int reverse (int n)
{
	int result (0);
	while (n)
	{
		result *= 10;
		result += n % 10;
		n /= 10;
	}

	return result;
}

int main ()
{
	int k;
	cin >> k;

	int result (0);
	for (int i (1); i <= k; i++)
	{
		if (i == reverse (i))
		{
			result++;
		}
	}

	cout << result;

	return 0;
}