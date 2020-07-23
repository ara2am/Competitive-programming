#include <iostream>

using namespace std;

int main ()
{
	int result (0);
	for (int a; cin >> a;)
	{
		if (a > 0)
		{
			result++;
		}
	}

	cout << result;

	return 0;
}