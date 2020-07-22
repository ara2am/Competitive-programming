#include <iostream>

using namespace std;

int main ()
{
	int n, result;
	cin >> n >> result;

	for (int i (1); i < n; i++)
	{
		int a;
		cin >> a;

		if (a > result)
		{
			result = a;
		}
	}
	
	cout << result;

	return 0;
}