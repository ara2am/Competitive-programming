#include <iostream>
#include <set>

using namespace std;

int main ()
{
	set<int> data;
	int a;
	while (cin >> a)
	{
		cout << ((data.find (a) != data.end ()) ? "YES" : "NO") << endl;
		data.insert (a);
	}

	return 0;
}