#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int comparator (pair<int, int> s1, pair<int, int> s2)
{
	if (s1.second == s2.second)
	{
		return s1.first < s2.first;
	}

	return s1.second > s2.second;
}

int main ()
{
	vector<pair<int, int>> data;

	int n, m;
	cin >> n >> m;

	for (int i (0); i < n; i++)
	{
		int mx, a;
		cin >> mx;
		for (int j (1); j < m; j++)
		{
			cin >> a;
			mx = max (mx, a);
		}

		data.push_back (make_pair (i, mx));
	}

	sort (data.begin (), data.end (), comparator);

	stringstream ind;
	int result (0);
	for (; ((result < n) && (data[result].second == data[0].second)); result++)
	{
		ind << data[result].first << ' ';
	}

	cout << result << endl << ind.str ();

	return 0;
}