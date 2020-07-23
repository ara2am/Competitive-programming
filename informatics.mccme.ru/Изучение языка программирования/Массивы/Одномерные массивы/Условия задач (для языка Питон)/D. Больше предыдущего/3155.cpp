#include <iostream>

using namespace std;

int main ()
{
	int a;
	cin >> a;

	for (int b; cin >> b;)
	{
		if (b > a)
		{
			cout << b << ' ';
		}

		a = b;
	}

	return 0;
}