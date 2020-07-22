#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string s;
	getline (cin, s);

	int lpos (s.find ('h'));
	int rpos (s.rfind ('h'));
	for (int i (0); i < s.length (); i++)
	{
		cout << (((s[i] == 'h') && (i > lpos) && (i < rpos)) ? 'H' : s[i]);
	}
	cout << endl;

	return 0;
}