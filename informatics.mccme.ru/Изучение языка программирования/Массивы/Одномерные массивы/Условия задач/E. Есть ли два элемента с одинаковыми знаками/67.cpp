#include <iostream>

using namespace std;

int main ()
{
	int n, prev;
	cin >> n >> prev;

	for (int i (1); i < n; i++)
	{
		int a;
		cin >> a;

		if (a * prev > 0)
		{
			cout << "YES";
			return 0;
		}
		prev = a;
	}

	cout << "NO";

	return 0;
}