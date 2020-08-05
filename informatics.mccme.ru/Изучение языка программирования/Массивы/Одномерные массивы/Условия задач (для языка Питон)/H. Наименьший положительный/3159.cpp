#include <iostream>
#include <climits>

using namespace std;

int main ()
{
	int min (INT_MAX);
	for (int a; cin >> a;)
	{
		if ((a > 0) && (a < min))
		{
			min = a;
		}
	}

	cout << min;

	return 0;
}