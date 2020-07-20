#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int x;
	cin >> x;

	int result (0);
	for (int i (1); i <= sqrt (x); i++)
	{
		if (!(x % i))
		{
			result += 1 + (i != x / i);
		}
	}

	cout << result;

	return 0;
}