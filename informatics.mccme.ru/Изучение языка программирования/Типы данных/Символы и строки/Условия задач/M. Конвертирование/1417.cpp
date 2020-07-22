#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string s;
	int a, b;
	getline (cin, s);
	cin >> a >> b;

	a--;
	b--;
	for (int i = 0; i <= (b - a) / 2; i++)
	{
		swap (s[a + i], s[b - i]);
	}

	cout << s;

	return 0;
}