#include <iostream>

using namespace std;

int main ()
{
	int n, prev, result (1);
	cin >> n >> prev;

	for (int i (1); i < n; i++)
	{
		int a;
		cin >> a;

		result += (prev != a);
		prev = a;
	}
	
	cout << result;

	return 0;
}