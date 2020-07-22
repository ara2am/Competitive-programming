#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
	string line1;
	getline (cin, line1);
	string line2;
	getline (cin, line2);

	istringstream stream1 (line1);
	set<int> data;
	int n;
	for (; stream1 >> n; data.insert (n));
	
	istringstream stream2 (line2);
	vector<int> result;
	while (stream2 >> n)
	{
		if (data.find (n) != data.end ())
		{
			result.push_back (n);
		}
	}

	sort (result.begin (), result.end ());

	for (int nn : result)
	{
		cout << nn << ' ';
	}

	return 0;
}