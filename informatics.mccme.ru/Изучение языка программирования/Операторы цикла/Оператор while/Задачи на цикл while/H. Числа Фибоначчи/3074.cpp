#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int f1 (0), f2 (1), i (0);
	while (i < n)
	{
		int tmp (f1 + f2);
		f1 = f2;
		f2 = tmp;
		i++;
	}

	cout << f1;

	return 0;
}