#include <iostream>
#include <cmath>
#include <algorithm>

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

	double maxDistance (0);
	for (int i (0); i < n; i++)
	{
		for (int j (i + 1); j < n; j++)
		{
			double curDistance = sqrt (pow (points[i].x - points[j].x, 2) + pow (points[i].y - points[j].y, 2));
			maxDistance = max (curDistance, maxDistance);
		}
	}

	cout.precision (15);
	cout << maxDistance;

	return 0;
}