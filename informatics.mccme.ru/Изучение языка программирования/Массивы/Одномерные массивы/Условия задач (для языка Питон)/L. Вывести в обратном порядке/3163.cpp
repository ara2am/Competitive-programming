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

	for (int i (n.size () - 1); i >= 0; i--)
	{
		cout << n[i] << ' ';
	}

	return 0;
}