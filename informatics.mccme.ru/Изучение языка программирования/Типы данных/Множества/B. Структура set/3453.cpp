#include <iostream>
#include <set>
#include <string>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	set<int> data;
	for (int i (0); i < n; i++)
	{
		string cmd;
		int a;
		cin >> cmd;
		if (cmd == "ADD")
		{
			cin >> a;
			data.insert (a);
		} else if (cmd == "PRESENT")
		{
			cin >> a;
			cout << ((data.find (a) != data.end ()) ? "YES" : "NO") << endl;
		} else
		{
			cout << data.size () << endl;
		}
	}

	return 0;
}