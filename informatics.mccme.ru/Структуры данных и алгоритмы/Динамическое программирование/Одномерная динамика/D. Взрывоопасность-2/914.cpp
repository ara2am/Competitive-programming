#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int a1 (3), a2 (8);
	for (int i (0); i < n - 1; i++)
	{
		int tmp (a1 + a2);
		a1 = a2;
		a2 = 2 * tmp;
	}

	cout << a1;

	return 0;
}