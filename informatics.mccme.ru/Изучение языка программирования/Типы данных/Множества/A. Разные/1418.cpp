#include <iostream>
#include <set>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	set<int> data;
	for (int i (0); i < n; i++)
	{
		int a;
		cin >> a;
		data.insert (a);
	}

	cout << data.size ();

	return 0;
}