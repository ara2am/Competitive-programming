#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int result (0), a (1);
	while (a < n)
	{
		a *= 2;
		result++;
	}

	cout << result;

	return 0;
}