#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	vector<int> n;
	int a;

	while (cin >> a)
	{
		n.push_back (a);
	}

	for (int i (0); i < n.size () / 2; i++)
	{
		swap (n[i], n[n.size () - i - 1]);
	}

	for (int i (0); i < n.size (); i++)
	{
		cout << n[i] << ' ';
	}

	return 0;
}