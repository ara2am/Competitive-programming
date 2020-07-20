#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	cout << (((n == 1) || (n == 2) || (n == 4) || (n == 7) ? "NO" : "YES"));

	return 0;
}