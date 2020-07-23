#include <iostream>

using namespace std;

int main ()
{
	int n, m;
	cin >> n >> m;

	int maxSum (0), ind (0);
	for (int i (0); i < n; i++)
	{
		int curSum (0);
		for (int j (0), a; j < m; j++)
		{
			cin >> a;
			curSum += a;
		}

		if (curSum > maxSum)
		{
			maxSum = curSum;
			ind = i;
		}
	}

	cout << maxSum << endl << ind;

	return 0;
}