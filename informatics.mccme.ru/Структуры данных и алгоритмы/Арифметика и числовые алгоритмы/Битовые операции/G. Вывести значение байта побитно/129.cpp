#include <iostream>

using namespace std;

int main ()
{
	int a;
	cin >> a;

	for (int i (7); i >= 0; i--)
	{
		cout << ((a & (1 << i)) ? 1 : 0);
	}

	return 0;
}