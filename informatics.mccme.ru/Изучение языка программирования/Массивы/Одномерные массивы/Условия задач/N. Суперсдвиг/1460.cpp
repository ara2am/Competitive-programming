#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	vector<int> arr (n);
	for (int i (0); i < n; cin >> arr[i], i++);

	int k;
	cin >> k;
	k %= n;

	rotate (arr.begin (), ((k > 0) ? arr.end () : arr.begin ()) - k, arr.end ());

	for (int nn : arr)
	{
		cout << nn << ' ';
	}

	return 0;
}