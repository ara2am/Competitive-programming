#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	int n, k;
	cin >> n >> k;

	vector<bool> data (n, true);

	for (int i (0); i < k; i++)
	{
		int l, r;
		cin >> l >> r;

		for (int j (l - 1); j < r; j++)
		{
			data[j] = false;
		}
	}

	for (bool c : data)
	{
		cout << (c ? 'I' : '.');
	}

	return 0;
}