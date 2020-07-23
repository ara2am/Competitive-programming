#include <iostream>

using namespace std;

int main ()
{
	int result, ind (0);
	cin >> result;

	for (int i (1), a; cin >> a; i++)
	{
		if (a > result)
		{
			result = a;
			ind = i;
		}
	}
	
	cout << result << ' ' << ind;

	return 0;
}