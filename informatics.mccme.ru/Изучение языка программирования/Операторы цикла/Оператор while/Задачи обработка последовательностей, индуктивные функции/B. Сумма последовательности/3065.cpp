#include <iostream>

using namespace std;

int main ()
{
	int a, result (0);
	do
	{
		cin >> a;
		result += a;
	} while (a);

	cout << result;

	return 0;
}