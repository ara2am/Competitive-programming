#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int neg (0), zero (0), pos (0);
	for (int i (0); i < n; i++)
	{
		int a;
		cin >> a;

		if (!a)
		{
			zero++;
		} else if (a > 0)
		{
			pos++;
		} else
		{
			neg++;
		}
	}

	cout << zero << ' ' << pos << ' ' << neg;

	return 0;
}