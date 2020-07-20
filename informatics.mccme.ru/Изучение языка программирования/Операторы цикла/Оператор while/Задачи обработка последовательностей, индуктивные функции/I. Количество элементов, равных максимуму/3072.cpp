#include <iostream>

using namespace std;

int main ()
{
	int a, m (0), result (0);
	do
	{
		cin >> a;
		if (a > m)
		{
			m = a;
			result = 1;
		} else if (a == m)
		{
			result++;
		}
	} while (a);

	cout << result;

	return 0;
}