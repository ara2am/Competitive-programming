#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	cout << n << ' ';
	if (((n > 10) && (n < 20)) || (!(n % 10)) || (n % 10 >= 5))
	{
		cout << "korov";
	} else
	{
		cout << ((n % 10 == 1) ? "korova" : "korovy");
	}

	return 0;
}