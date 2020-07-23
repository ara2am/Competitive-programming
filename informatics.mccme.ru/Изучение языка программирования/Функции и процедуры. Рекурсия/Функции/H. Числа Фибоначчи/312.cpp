#include <iostream>

using namespace std;

int phi (int n)
{
	int a (1), b (1);
	for (int i = 0; i < n - 1; i++)
	{
		int tmp (a);
		a = b;
		b += tmp;
	}

	return b;
}

int main ()
{
	int n;
	cin >> n;

	cout << phi (n);

	return 0;
}