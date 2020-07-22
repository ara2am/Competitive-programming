#include <iostream>

using namespace std;

int main ()
{
	int n, a;
	cin >> n >> a;

	int result (0);
	for (int i (1); i < n; i++)
	{
		int b;
		cin >> b;

		if (b > a)
		{
			result++;
		}

		a = b;
	}

	cout << result;

	return 0;
}