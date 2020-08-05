#include <iostream>
#include <climits>

using namespace std;

int main ()
{
	long long min (LLONG_MAX);
	for (int a; cin >> a;)
	{
		if ((a % 2) && (a < min))
		{
			min = a;
		}
	}

	cout << ((min != LLONG_MAX) ? min : 0);

	return 0;
}