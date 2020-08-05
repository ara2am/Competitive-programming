#include <iostream>

using namespace std;

int main ()
{
	int prev, result (1);
	cin >> prev;

	for (int a; cin >> a;)
	{
		result += (prev != a);
		prev = a;
	}
	
	cout << result;

	return 0;
}