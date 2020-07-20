#include <iostream>

using namespace std;

int main ()
{
	int result (0);
	for (int i (0); i < 100; i++)
	{
		int a;
		cin >> a;

		result += a;
	}

	cout << result;

	return 0;
}