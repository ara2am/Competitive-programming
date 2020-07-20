#include <iostream>

using namespace std;

int main ()
{
	int a (1), sum (0);
	bool prev0 (false);

	while ((a) || (!prev0))
	{
		prev0 = !a;
		cin >> a;
		sum += a;
	}

	cout << sum;

	return 0;
}