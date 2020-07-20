#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	double result (1);
	for (int i (2); i <= n; i++)
	{
		result += 1. / ((long long) i * i);
	}

	cout << result;

	return 0;
}