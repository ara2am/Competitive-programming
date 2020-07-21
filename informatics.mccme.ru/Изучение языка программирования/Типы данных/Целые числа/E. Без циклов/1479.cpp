#include <iostream>

using namespace std;

int main ()
{
	int k, n;
	cin >> k >> n;

	cout << (n - 1) / k + 1 << ' ' << (n - 1) % k + 1;

	return 0;
}