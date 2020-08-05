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

	bool uniq;
	for (int i (0); i < n.size (); i++)
	{
		uniq = true;
		for (int j (0); j < n.size (); j++)
		{
			if ((i != j) && (n[i] == n[j]))
			{
				uniq = false;
				break;
			}
		}

		if (uniq)
		{
			cout << n[i] << ' ';
		}
	}

	return 0;
}