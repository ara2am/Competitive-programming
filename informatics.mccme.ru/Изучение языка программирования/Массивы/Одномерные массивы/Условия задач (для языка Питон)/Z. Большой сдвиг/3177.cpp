#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
	string line;
	getline (cin, line);

	stringstream ss (line);

	vector<int> arr;
	for (int i (0), a; ss >> a; i++)
	{
		arr.push_back (a);
	}

	int k;
	cin >> k;
	k %= (int) arr.size ();

	rotate (arr.begin (), ((k > 0) ? arr.end () : arr.begin ()) - k, arr.end ());

	for (int nn : arr)
	{
		cout << nn << ' ';
	}

	return 0;
}