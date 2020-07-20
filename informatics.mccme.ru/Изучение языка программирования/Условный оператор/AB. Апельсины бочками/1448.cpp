#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	cout << n << ' ';
	n %= 100;
	if (((n > 10) && (n < 20)) || (!(n % 10)) || (n % 10 >= 5))
	{
		cout << "bochek";
	} else
	{
		cout << ((n % 10 == 1) ? "bochka" : "bochki");
	}

	return 0;
}