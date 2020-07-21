#include <iostream>

using namespace std;

int main ()
{
	int h1, m1, s1, h2, m2, s2;
	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

	cout << 3600 * h2 + 60 * m2 + s2 - 3600 * h1 - 60 * m1 - s1;

	return 0;
}