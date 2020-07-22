#include <iostream>

using namespace std;

struct Point
{
	int x, y;
};

int main ()
{
	int n;
	cin >> n;

	Point points[100];

	for (int i (0); i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		
		points[i] = Point {x, y};
	}

	double xx (0), yy (0);
	for (int i (0); i < n; i++)
	{
		xx += points[i].x;
		yy += points[i].y;
	}

	cout << xx / n << ' ' << yy / n;

	return 0;
}