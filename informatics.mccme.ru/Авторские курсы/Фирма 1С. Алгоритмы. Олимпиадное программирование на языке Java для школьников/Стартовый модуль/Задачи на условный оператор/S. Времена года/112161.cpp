#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;
	
	if ((n < 1) || (n > 12))
	{
		cout << "NO";
	} else if ((n >= 3) && (n <= 5))
	{
		cout << "spring";
	} else if ((n >= 6) && (n <= 8))
	{
		cout << "summer";
	} else
	{
		cout << (((n >= 9) && (n <= 11)) ? "autumn" : "winter");
	}

	return 0;
}