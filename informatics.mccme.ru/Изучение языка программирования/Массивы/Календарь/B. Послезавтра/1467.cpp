#include <iostream>

using namespace std;

int main ()
{
	int d, m, y;
	cin >> d >> m >> y;

	int month[] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	month[1] += ((!(y % 4) && (y % 100)) || (!(y % 400)));
	
	d += 2;
	if (d > month[m - 1])
	{
		d -= month[m - 1];
		m++;
	}

	if (m > 12)
	{
		m = 1;
		y++;
	}

	cout << d << ' ' << m << ' ' << y;

	return 0;
}