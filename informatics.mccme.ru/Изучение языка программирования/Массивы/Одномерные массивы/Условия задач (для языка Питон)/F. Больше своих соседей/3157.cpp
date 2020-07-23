#include <iostream>
#include <climits>

using namespace std;

int main ()
{
	int result (0);
	for (int a (INT_MAX), b (INT_MAX), c; cin >> c;)
	{
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