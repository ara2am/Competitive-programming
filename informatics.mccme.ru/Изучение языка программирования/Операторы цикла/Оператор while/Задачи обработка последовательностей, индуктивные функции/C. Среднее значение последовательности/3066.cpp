#include <iostream>

using namespace std;

int main ()
{
	int a, sum (0), n (-1);
	do
	{
		cin >> a;
		sum += a;
		n++;
	} while (a);

	cout << (float) sum / n;

	return 0;
}