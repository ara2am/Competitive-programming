#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int result (1);
	for (int i (1); i <= n; i++)
	{
		result *= 2;
	}

	cout << result;

	return 0;
}