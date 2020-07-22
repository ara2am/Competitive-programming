#include <iostream>
#include <string>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int sa (0), sb (0), sc (0);
	for (int i (0); i < n; i++)
	{
		string i1, i2;
		int a, b, c;
		cin >> i1 >> i2 >> a >> b >> c;

		sa += a;
		sb += b;
		sc += c;
	}


	cout << sa / (float) n << ' ' << sb / (float) n << ' ' << sc / (float) n;

	return 0;
}