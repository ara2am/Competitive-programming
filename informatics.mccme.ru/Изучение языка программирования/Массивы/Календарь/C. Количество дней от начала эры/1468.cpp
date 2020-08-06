#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int month[] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	int y (n % 10000), m (n / 10000 % 100), d (n / 1000000 % 100);

	month[1] += ((!(y % 4) && (y % 100)) || (!(y % 400)));

	int result (d);
	for (int i (1); i < y; result += (((!(i % 4) && (i % 100)) || (!(i % 400))) ? 366 : 365), i++);
	for (int i (0); i < m - 1; i++)
	{
		result += month[i];
	}

	cout << result;

	return 0;
}