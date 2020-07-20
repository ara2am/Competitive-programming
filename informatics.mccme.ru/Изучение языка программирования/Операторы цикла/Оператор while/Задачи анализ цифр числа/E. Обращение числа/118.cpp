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
	int n;
	cin >> n;

	cout << reverse (n);

	return 0;
}