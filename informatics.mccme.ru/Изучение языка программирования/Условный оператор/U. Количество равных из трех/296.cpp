#include <iostream>

using namespace std;

int main ()
{
	int a, b, c;
	cin >> a >> b >> c;

	if ((a == b) && (b == c))
	{
		cout << 3;
	} else
	{
		cout << (((a == b) || (b == c) || (a == c)) ? 2 : 0);
	}

	return 0;
}