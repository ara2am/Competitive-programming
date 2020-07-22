#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point
{
	int x, y;

	double distance (Point p)
	{
		return sqrt (pow (x - p.x, 2) + pow (y - p.y, 2));
	}
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

	double result (0);
	for (int i (0); i < n; i++)
	{
		for (int j (i + 1); j < n; j++)
		{
			for (int k (j + 1); k < n; k++)
			{
				double a (points[i].distance (points[j]));
				double b (points[j].distance (points[k]));
				double c (points[i].distance (points[k]));

				double p ((a + b + c) / 2);

				result = max (sqrt (p * (p - a) * (p - b) * (p - c)), result);
			}
		}
	}

	cout.precision (15);
	cout << result;

	return 0;
}