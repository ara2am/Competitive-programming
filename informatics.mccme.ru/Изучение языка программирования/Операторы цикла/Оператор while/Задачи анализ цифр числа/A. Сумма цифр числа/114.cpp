#include <iostream>

using namespace std;

int SumOfDigits (int n)
{
	return (n) ? n % 10 + SumOfDigits (n / 10) : 0;
}

int main ()
{
	int n;
	cin >> n;

	cout << SumOfDigits (n);

	return 0;
}