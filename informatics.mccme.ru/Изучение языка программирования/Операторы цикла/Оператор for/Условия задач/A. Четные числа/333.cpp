#include <iostream>

using namespace std;

int main ()
{
	int a, b;
	cin >> a >> b;

	for (int i (a + a % 2); i <= b; i += 2)
	{
		cout << i << ' ';
	}

	return 0;
}