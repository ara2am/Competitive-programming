#include <iostream>

using namespace std;

int main ()
{
	int prev;
	cin >> prev;

	for (int a; cin >> a;)
	{
		if (a * prev > 0)
		{
			cout << prev << ' ' << a;
			return 0;
		}
		prev = a;
	}

	return 0;
}