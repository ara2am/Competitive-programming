#include <iostream>
#include <string>
#include <sstream>
#include <set>

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
	int result (0);
	while (stream2 >> n)
	{
		if (data.find (n) != data.end ())
		{
			result++;
		}
	}

	cout << result;

	return 0;
}