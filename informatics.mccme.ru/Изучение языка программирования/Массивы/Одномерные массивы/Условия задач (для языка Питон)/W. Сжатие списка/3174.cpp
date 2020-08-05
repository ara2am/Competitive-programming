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
	
	int zeroCount (0);
	for (int i (0); i < n.size (); i++)
	{
		if (!n[i])
		{
			zeroCount++;
		} else if (zeroCount)
		{
			n[i - zeroCount] = n[i];
			n[i] = 0;
		}
	}

	for (int i : n)
	{
		cout << i << ' ';
	}

	return 0;
}