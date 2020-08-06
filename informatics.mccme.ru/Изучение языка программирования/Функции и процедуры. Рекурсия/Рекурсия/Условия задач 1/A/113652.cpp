#include <iostream>

using namespace std;

bool check (int n)
{
	if (n < 1)
	{
		return false;
	} else if (n == 1)
	{
		return true;
	}

	return (check (n - 5) || check (n - 3));
}

int main ()
{
	int n;
	cin >> n;

	cout << ((check (n)) ? "YES" : "NO");

	return 0;
}