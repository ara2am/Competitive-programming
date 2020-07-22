#include <iostream>

using namespace std;

int main ()
{
	int result (0);
	char c;
	while (cin >> c)
	{
		if ((c == '6') || (c == '9') || (c == '0'))
		{
			result++;
		} else if (c == '8')
		{
			result += 2;
		}
	}

	cout << result;

	return 0;
}