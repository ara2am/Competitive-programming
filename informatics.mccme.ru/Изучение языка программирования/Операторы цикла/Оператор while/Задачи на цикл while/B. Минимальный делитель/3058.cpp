#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int i (2);
	while (n % i)
	{
		i++;
	}

	cout << i;

	return 0;
}