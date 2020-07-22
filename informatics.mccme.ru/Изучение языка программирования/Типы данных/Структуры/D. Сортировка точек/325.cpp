#include <iostream>
#include <algorithm>

using namespace std;

struct Point
{
	int x, y;
};

bool compare (Point p1, Point p2)
{
	return (p1.x * p1.x + p1.y * p1.y < p2.x * p2.x + p2.y * p2.y);
}

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

	sort (points, points + n, compare);

	for (int i (0); i < n; i++)
	{
		cout << points[i].x << ' ' << points[i].y << endl;
	}

	return 0;
}