#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	vector<int> n;

	for (int a; cin >> a;)
	{
		n.push_back (a);
	}

	pair<int, int> result (0, 0);
	for (int i (0); i < n.size (); i++)
	{
		int count (1);
		for (int j (i + 1); j < n.size (); j++)
		{
			if (n[i] == n[j])
			{
				count++;
			}
		}

		if (count > result.second)
		{
			result.first = n[i];
			result.second = count;
		}
	}

	cout << result.first;

	return 0;
}