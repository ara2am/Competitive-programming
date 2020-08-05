#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main ()
{
	vector<int> n;
	int a;
	pair<int, int> min (-1, INT_MAX), max (-1, INT_MIN);

	for (int i (0); cin >> a; i++)
	{
		n.push_back (a);

		if (a < min.second)
		{
			min.second = a;
			min.first = i;
		}

		if (a > max.second)
		{
			max.second = a;
			max.first = i;
		}
	}

	swap (n[min.first], n[max.first]);

	for (int i (0); i < n.size (); i++)
	{
		cout << n[i] << ' ';
	}

	return 0;
}