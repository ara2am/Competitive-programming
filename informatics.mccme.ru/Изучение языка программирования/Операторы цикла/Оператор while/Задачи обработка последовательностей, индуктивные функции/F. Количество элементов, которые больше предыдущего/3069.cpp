#include <iostream>

using namespace std;

int main ()
{
	int a, b, result (0);
	cin >> b;
	do
	{
		cin >> a;
		result += a > b;
		swap (a, b);
	} while (b);

	cout << result;

	return 0;
}