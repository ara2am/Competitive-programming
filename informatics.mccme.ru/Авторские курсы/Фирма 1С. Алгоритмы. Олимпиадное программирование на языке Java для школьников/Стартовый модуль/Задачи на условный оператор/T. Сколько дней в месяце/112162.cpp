#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	const int month[] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	if ((n < 1) || (n > 12))
	{
		cout << 0;
	} else
	{
		cout << month[n - 1];
	}

	return 0;
}