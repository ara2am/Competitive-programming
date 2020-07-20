#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int result (1);
	int pow2 (2);
	for (int i (1); i <= n; i++)
	{
		result += pow2;
		pow2 *= 2;
	}

	cout << result;

	return 0;
}