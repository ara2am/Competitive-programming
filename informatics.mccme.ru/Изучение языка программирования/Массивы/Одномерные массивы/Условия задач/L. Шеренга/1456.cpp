#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int a[100];
	for (int i (0); i < n; i++)
	{
		cin >> a[i];
	}

	int h;
	cin >> h;
	
	for (int i (0); i < n; i++)
	{
		if (h > a[i])
		{
			cout << i + 1;
			return 0;
		}
	}
	
	cout << n + 1;

	return 0;
}