#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int result (0);
	for (int i (0); i < n; i++)
	{
		int a;
		cin >> a;

		if (!a)
		{
			result++;
		}
	}

	cout << result;

	return 0;
}