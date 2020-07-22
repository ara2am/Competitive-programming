#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	pair<int, int> farPoint (0, 0);
	int farDistance (0);

	for (int i (0); i < n; i++)
	{
		int x, y;
		cin >> x >> y;

		int distance (x * x + y * y);
		if (distance > farDistance)
		{
			farPoint = make_pair (x, y);
			farDistance = distance;
		}
	}

	cout << farPoint.first << ' ' << farPoint.second;

	return 0;
}