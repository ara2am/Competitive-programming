#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
	int a, b, c, prevPos (-1), minDistance (-1), i (0);
	cin >> a >> b;
	while (true)
	{
		cin >> c;

		if (!c)
		{
			break;
		}

		if ((b > a) && (b > c))
		{
			if (prevPos == -1)
			{
				prevPos = i;
			} else
			{
				int distance (i - prevPos);
				prevPos = i;
				minDistance = (minDistance == -1) ? distance : min (minDistance, distance);
			}
		}

		a = b;
		b = c;
		i++;
	}

	cout << ((minDistance == -1) ? 0 : minDistance);

	return 0;
}