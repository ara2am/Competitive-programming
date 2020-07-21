#include <iostream>

using namespace std;

int main ()
{
	int k;
	cin >> k;

	cout << "It is " << k / 30 << " hours " << k % 30 * 2 << " minutes.";

	return 0;
}