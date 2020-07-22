#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int a[35];
	for (int i (0); i < n; i++)
	{
		cin >> a[i];
	}
	
	int tmp (a [0]);
	for (int i (1); i < n; i++)
	{
		swap (tmp, a[i]);
	}
	swap (tmp, a[0]);

	for (int i (0); i < n; i++)
	{
		cout << a[i] << ' ';
	}

	return 0;
}