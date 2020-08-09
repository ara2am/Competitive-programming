#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int lsp (sqrt (n));
	int ls (lsp * lsp), rs (pow (lsp + 1, 2));

	if ((n != ls + 1) && (n != ls))
	{
		cout << ls - (rs - n) + 1 << ' ';
	}

	if ((n != ls + 1) && (n != 1))
	{
		cout << n - 1 << ' ';
	}

	if (n != ls)
	{
		cout << n + 1 << ' ';
	}

	cout << n + 2 * (lsp + (n != ls));


	return 0;
}