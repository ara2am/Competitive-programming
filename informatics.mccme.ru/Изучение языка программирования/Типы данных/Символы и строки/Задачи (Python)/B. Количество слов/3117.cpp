#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string s;
	int count (0);
	for (; cin >> s; count++);

	cout << count;

	return 0;
}