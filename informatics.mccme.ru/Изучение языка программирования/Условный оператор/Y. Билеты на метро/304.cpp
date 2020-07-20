#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int a (n / 60);
	n %= 60;
	if (n > 34)
	{
		n = 0;
		a++;
	}

	int b (n / 10);
	n %= 10;
	if (n == 9)
	{
		n = 0;
		b++;
	}
	
	cout << n << ' ' << b << ' ' << a;

	return 0;
}