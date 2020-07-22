#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string s;
	getline (cin, s);

	int fpos (s.find ('f'));
	int lpos (s.rfind ('f'));
	if (fpos != string::npos)
	{
		cout << fpos;
		if (fpos != lpos)
		{
			cout << ' ' << lpos;
		}
	}

	return 0;
}