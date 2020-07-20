#include <iostream>

using namespace std;

int NumberOfZeroes (int n)
{
	return (n) ? (!(n % 10)) + NumberOfZeroes (n / 10) : 0;
}

int main ()
{
	int n;
	cin >> n;

	cout << NumberOfZeroes (n);

	return 0;
}