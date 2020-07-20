#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
	int a, b, curEquals (1), maxEquals (0);
	cin >> a;
	do
	{
		cin >> b;
		if (b == a)
		{
			curEquals++;
		} else
		{
			maxEquals = max (maxEquals, curEquals);
			curEquals = 1;
		}
		a = b;
	} while (a);

	cout << maxEquals;

	return 0;
}