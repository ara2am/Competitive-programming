#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string s;
	getline (cin, s);

	int pos (s.find ('h') + 1);
	s.insert (pos, s.substr (pos, s.rfind ('h') - pos));

	cout << s << endl;

	return 0;
}