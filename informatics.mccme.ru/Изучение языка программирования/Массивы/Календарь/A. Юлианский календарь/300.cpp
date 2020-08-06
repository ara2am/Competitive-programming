#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	const int month[] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	int m (0);
	for (; ((m < 12) && (month[m] < n)); n -= month[m], m++);

	cout << n << ' ' << m + 1;

	return 0;
}