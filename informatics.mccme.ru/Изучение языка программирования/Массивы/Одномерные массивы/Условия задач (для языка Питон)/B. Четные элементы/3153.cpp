#include <iostream>

using namespace std;

int main ()
{
	for (int a; cin >> a;)
	{
		if (!(a % 2))
		{
			cout << a << ' ';
		}
	}

	return 0;
}