#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	bool arr[50][50];
	for (int i (0); i < n; i++)
	{
		for (int j (0); j < n; j++)
		{
			arr[i][j] = (i == 0);
		}
	}

	for (int i (1), x (n - 1), y (0), dir (0), size (n + 1); i < n; i++, dir = ++dir % 4)
	{
		if (!(dir % 2))
		{
			size -= 2;
		}

		size += (i == n - 1);

		switch (dir)
		{
			case 0 :
				for (int j (0); j < size; j++)
				{
					arr[y++][x] = true;
				}
				break;

			case 1 :
				for (int j (0); j < size; j++)
				{
					arr[y][x--] = true;
				}
				break;

			case 2 :
				for (int j (0); j < size; j++)
				{
					arr[y--][x] = true;
				}
				break;

			case 3 :
				for (int j (0); j < size; j++)
				{
					arr[y][x++] = true;
				}
				break;
		}
	}

	for (int i (0); i < n; i++)
	{
		for (int j (0); j < n; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}