#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
	int n, a, b, c, d;
	cin >> n >> a >> b >> c >> d;

	int arr[1000];
	for (int i (0); i < n; i++)
	{
		arr[i] = i + 1;
	}

	reverse (arr + a - 1, arr + b);
	reverse (arr + c - 1, arr + d);
	
	for (int i (0); i < n; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}