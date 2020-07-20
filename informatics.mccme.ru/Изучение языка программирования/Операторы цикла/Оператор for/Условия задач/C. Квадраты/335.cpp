#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int a, b;
	cin >> a >> b;

	int sb (sqrt (b));
	for (int i (ceil (sqrt (a))); i <= sb; i++)
	{
		cout << i * i << ' ';
	}

	return 0;
}