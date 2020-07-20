#include <iostream>

using namespace std;

int main ()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	int result (0);
	for (int i (0); i <= 1000; i++)
	{
		int ii (i * i);
		if ((i - e) && (!(a * i * ii + b * ii + c * i + d)))
		{
			result++;
		}
	}

	cout << result;

	return 0;
}