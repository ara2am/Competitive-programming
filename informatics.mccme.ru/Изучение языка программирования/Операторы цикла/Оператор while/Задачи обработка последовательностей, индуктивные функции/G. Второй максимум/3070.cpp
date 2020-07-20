#include <iostream>

using namespace std;

int main ()
{
	int a, m1 (0), m2 (0);
	do
	{
		cin >> a;
		if (a > m1)
		{
			m2 = m1;
			m1 = a;
		} else if (a > m2)
		{
			m2 = a;
		}
	} while (a);

	cout << m2;

	return 0;
}