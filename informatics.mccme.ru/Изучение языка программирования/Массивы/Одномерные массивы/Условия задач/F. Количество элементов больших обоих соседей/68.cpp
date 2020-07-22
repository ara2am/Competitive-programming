#include <iostream>
#include <climits>

using namespace std;

int main ()
{
	int n, a (INT_MAX), b (INT_MAX), c;
	cin >> n;

	int result (0);
	for (int i (0); i < n; i++)
	{
		cin >> c;

		if ((b > a) && (b > c))
		{
			result++;
		}
		a = b;
		b = c;
	}

	cout << result;

	return 0;
}