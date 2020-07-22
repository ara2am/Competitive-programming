#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string final (""), s;
	for (; cin >> s; final += s);

	bool result (true);
	for (int i = 0; i <= final.length () / 2; i++)
	{
		if (final[i] != final[final.length () - i - 1])
		{
			result = false;
			break;
		}
	}

	cout << (result ? "yes" : "no");

	return 0;
}