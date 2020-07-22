#include <iostream>
#include <string>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	for (int i (0); i < n; i++)
	{
		string surname, name;
		int a, b, c;
		cin >> surname >> name >> a >> b >> c;

		if ((a > 3) && (b > 3) && (c > 3))
		{
			cout << surname << ' ' << name << endl;
		}
	}

	return 0;
}