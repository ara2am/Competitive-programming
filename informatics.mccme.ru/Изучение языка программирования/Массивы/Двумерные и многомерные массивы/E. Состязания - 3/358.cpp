#include <iostream>
#include <algorithm>

using namespace std;

struct Sportsman
{
	int id, bestTry, totalScore;
};

bool comparator (Sportsman s1, Sportsman s2)
{
	if (s1.bestTry == s2.bestTry)
	{
		if (s1.totalScore == s2.totalScore)
		{
			return (s1.id < s1.id);
		}

		return (s1.totalScore > s2.totalScore);
	}

	return (s1.bestTry > s2.bestTry);
}

int main ()
{
	int n, m;
	cin >> n >> m;

	Sportsman* arr = new Sportsman[n];
	for (int i (0); i < n; i++)
	{
		arr[i].id = i;
		arr[i].bestTry = 0;
		arr[i].totalScore = 0;

		for (int j (0), a; j < m; j++)
		{
			cin >> a;
			arr[i].totalScore += a;

			if (a > arr[i].bestTry)
			{
				arr[i].bestTry = a;
			}
		}
	}

	sort (arr, arr + n, comparator);

	cout << arr[0].id;

	return 0;
}