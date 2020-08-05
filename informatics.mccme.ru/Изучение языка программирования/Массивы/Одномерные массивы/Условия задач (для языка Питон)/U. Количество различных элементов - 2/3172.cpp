#include <iostream>
#include <set>

using namespace std;

int main ()
{
	set<int> n;

	for (int a; cin >> a;)
	{
		n.insert (a);
	}

	cout << n.size ();

	return 0;
}