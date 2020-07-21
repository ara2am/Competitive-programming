#include <iostream>

using namespace std;

int main ()
{
	int n, m;
	cin >> n >> m;

	cout << m / n + (m % n > 0);

	return 0;
}