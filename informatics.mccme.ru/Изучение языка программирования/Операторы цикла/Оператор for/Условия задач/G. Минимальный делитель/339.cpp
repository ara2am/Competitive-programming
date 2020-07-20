#include <iostream>

using namespace std;

int main ()
{
	int x;
	cin >> x;

	for (int i (2); i <= x; i++)
	{
		if (!(x % i))
		{
			cout << i;
			break;
		}
	}

	return 0;
}