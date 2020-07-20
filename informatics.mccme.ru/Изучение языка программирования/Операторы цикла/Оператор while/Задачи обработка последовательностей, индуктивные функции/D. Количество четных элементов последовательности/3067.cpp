#include <iostream>

using namespace std;

int main ()
{
	int a, result (-1);
	do
	{
		cin >> a;
		result += !(a % 2);
	} while (a);

	cout << result;

	return 0;
}