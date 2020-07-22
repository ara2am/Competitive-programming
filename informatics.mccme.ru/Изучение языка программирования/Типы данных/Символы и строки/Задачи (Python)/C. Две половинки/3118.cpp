#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string s;
	cin >> s;

	int hlen (s.length () / 2 + s.length () % 2);
	cout << s.substr (hlen) << s.substr (0, hlen) << endl;

	return 0;
}