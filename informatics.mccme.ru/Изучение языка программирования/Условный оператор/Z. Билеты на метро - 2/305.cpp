#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int a (n / 60);
	n %= 60;
	if (n > 35)
	{
		n = 0;
		a++;
	}

	int b (n / 20);
	n %= 20;
	if (n > 17)
	{
		n = 0;
		b++;
	}

	int c (n / 10);
	n %= 10;
	if (n == 9)
	{
		n = 0;
		c++;
	}
	
	cout << n % 5 << ' ' << n / 5 <<  ' ' << c << ' ' << b << ' ' << a;

	return 0;
}