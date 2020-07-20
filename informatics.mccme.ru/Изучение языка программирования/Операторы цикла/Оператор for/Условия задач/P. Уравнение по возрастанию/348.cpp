#include <iostream>

using namespace std;

int main ()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	for (int i (0); i <= 1000; i++)
	{
		int ii (i * i);
		if (a * i * ii + b * ii + c * i == -d)
		{
			cout << i << ' ';
		}
	}

	return 0;
}