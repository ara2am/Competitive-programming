#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int f1 (1), f2 (1);
	for (int i (0), tmp; i < n; i++)
	{
		tmp = (f1 + f2) % 10;
		f1 = f2;
		f2 = tmp;
	}

	cout << f1;

	return 0;
}