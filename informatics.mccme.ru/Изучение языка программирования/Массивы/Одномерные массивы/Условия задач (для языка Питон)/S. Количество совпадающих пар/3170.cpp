#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
	vector<int> n;

	for (int a; cin >> a;)
	{
		n.push_back (a);
	}

	sort (n.begin (), n.end ());

	int prev (n[0]), equals (1), result (0);
	for (int i (1); i < n.size (); i++)
	{
		if (n[i] != prev)
		{
			result += equals * (equals - 1) / 2;
			equals = 0;
			prev = n[i];
		}
		equals++;
	}
	result += equals * (equals - 1) / 2;

	cout << result;

	return 0;
}