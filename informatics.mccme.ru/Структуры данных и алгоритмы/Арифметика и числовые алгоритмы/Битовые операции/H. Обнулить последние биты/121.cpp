#include <iostream>

using namespace std;

int main ()
{
	int a, i;
	cin >> a >> i;

	int mask (0);
	for (int j (0); j < i; j++)
	{
		mask |= 1 << j;
	}

	cout << (a & ~mask);

	return 0;
}