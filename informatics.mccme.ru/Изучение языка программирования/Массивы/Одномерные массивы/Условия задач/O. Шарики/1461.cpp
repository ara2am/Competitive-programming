#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	vector<int> arr (n);
	for (int i (0); i < n; i++)
	{
		cin >> arr[i];
	}

	int result (0);
	bool changed;
	do
	{
		changed = false;
		int prev (arr.back ()), count (1);

		for (int i (arr.size () - 2); i >= 0; i--)
		{
			if (arr[i] != prev)
			{
				count = 0;
				prev = arr[i];
			}

			count++;

			if (count == 3)
			{
				changed = true;
				arr.erase (arr.begin () + i, arr.begin () + i + 3);
				result += 3;
			} else if (count > 3)
			{
				arr.erase (arr.begin () + i, arr.begin () + i + 1);
				result++;
			}
		}
	} while (changed);

	cout << result;

	return 0;
}