#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int h, a, b;
	cin >> h >> a >> b;

	cout << ceil ((h - a) / (float)(a - b)) + 1;

	return 0;
}