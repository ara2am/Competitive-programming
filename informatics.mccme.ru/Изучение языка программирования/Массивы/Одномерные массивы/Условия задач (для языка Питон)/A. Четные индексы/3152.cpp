#include <iostream>

using namespace std;

int main ()
{
	for (int i (0), a; cin >> a; i++)
	{
		if (!(i % 2))
		{
			cout << a << ' ';
		}
	}

	return 0;
}