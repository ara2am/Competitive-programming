#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
	int a, result (0);
	do
	{
		cin >> a;
		result = max (a, result);
	} while (a);

	cout << result;

	return 0;
}