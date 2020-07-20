#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int result (1);
	for (int i (2); i <= n; i++)
	{
		result += i * i;
	}

	cout << result;

	return 0;
}