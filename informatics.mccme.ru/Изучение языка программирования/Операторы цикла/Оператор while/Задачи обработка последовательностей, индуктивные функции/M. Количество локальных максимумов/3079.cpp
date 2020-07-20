#include <iostream>

using namespace std;

int main ()
{
	int a, b, c, result (0);
	cin >> a >> b;
	while (true)
	{
		cin >> c;

		if (!c)
		{
			break;
		}

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