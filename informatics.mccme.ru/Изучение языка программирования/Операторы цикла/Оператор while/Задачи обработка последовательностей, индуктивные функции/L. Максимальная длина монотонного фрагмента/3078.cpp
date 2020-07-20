#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
	int a, b, curMonotonous (1), maxMonotonous (0);
	bool mode (false);
	cin >> a;
	while (true)
	{
		cin >> b;

		if (!b)
		{
			break;
		}

		if (((a > b) && (mode)) || ((a < b) && (!mode)))
		{
			curMonotonous++;
		} else
		{
			maxMonotonous = max (maxMonotonous, curMonotonous);
			curMonotonous = 2;
			if (a > b)
			{
				mode = true;
			} else if (a < b)
			{
				mode = false;
			} else
			{
				curMonotonous = 1;
			}
		}
		a = b;
	}

	cout << max (maxMonotonous, curMonotonous);

	return 0;
}