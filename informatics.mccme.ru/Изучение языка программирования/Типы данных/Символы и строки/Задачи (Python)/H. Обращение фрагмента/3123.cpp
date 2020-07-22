#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main ()
{
	string s;
	getline (cin, s);

	reverse (s.begin () + s.find ('h') + 1, s.begin () + s.rfind ('h'));

	cout << s << endl;

	return 0;
}