#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	const int SIZE = 2 * n + 1;

	int** arr = new int* [SIZE];
	for (int i (0); i < SIZE; i++)
	{
		arr[i] = new int[SIZE];
	}

	for (int x (SIZE / 2), y (x), el (0), dir (0), 
		maxPower (1), curPower (maxPower); el < SIZE * SIZE; el++, curPower--)
	{
		if (!curPower)
		{
			dir = ++dir % 4;
			
			if (!(dir % 2))
			{
				maxPower++;
			}

			curPower = maxPower;
		}

		switch (dir)
		{
			case 0 :
				arr[y--][x] = el;
			    break;

			case 1 :
				arr[y][x--] = el;
				break;

			case 2 :
				arr[y++][x] = el;
				break;

			case 3 :
				arr[y][x++] = el;
				break;
		}
	}

	for (int i (0); i < SIZE; i++)
	{
		for (int j (0); j < SIZE; j++)
		{
			cout.width (3);
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}