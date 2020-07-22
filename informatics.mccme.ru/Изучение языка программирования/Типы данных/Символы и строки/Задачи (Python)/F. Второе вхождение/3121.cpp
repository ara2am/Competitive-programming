#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string s;
	getline (cin, s);

	int fpos (s.find ('f'));
	int spos (s.find ('f', fpos + 1));
	if (fpos == string::npos)
	{
		cout << -2;
	} else
	{
		cout << (spos == string::npos ? -1 : spos);
	}

	return 0;
}