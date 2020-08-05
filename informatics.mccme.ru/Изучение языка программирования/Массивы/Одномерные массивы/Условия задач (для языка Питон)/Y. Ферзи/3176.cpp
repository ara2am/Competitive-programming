#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main ()
{
	vector<pair<int, int>> data (8);

	for (int i (0); i < 8; i++)
	{
		int x, y;
		cin >> x >> y;
		data[i] = make_pair (x, y);
	}

	bool result (false);
	for (int i (0); i < 8; i++)
	{
		for (int j (i + 1); j < 8; j++)
		{
			if ((data[i].first == data[j].first) || (data[i].second == data[j].second) || (abs (data[i].first - data[j].first) == abs (data[i].second - data[j].second)))
			{
				result = true;
				break;
			}
		}
	}

	cout << (result ? "YES" : "NO");

	return 0;
}