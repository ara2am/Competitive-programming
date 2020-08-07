#include <iostream>

using namespace std;

int main ()
{
	int a, i;
	cin >> a >> i;

	cout << (a & ~(1 << i));

	return 0;
}