#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string s;
	getline (cin, s);

	int pos (s.find('h'));
	s.erase (pos, s.rfind ('h') - pos + 1);

	cout << s << endl;

	return 0;
}