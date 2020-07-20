#include <iostream>

using namespace std;

int main ()
{
	float a;
	int n;
	cin >> a >> n;

	float result (1);
	float pow (a);
	for (int i (0); i < n; i++)
	{
		result += pow;
		pow *= a;
	}

	cout << result;

	return 0;
}