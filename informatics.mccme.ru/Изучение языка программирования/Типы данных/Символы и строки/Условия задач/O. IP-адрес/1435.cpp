#include <iostream>
#include <string>

using namespace std;

bool isCorrectPart (string part)
{
	return ((part.length () > 0) && (atoi (part.c_str ()) <= 255));
}

int main ()
{
	string ip;
	getline (cin, ip);

	int pos;
	while ((pos = ip.find ('.')) != string::npos)
	{
		if (!isCorrectPart (ip.substr (0, pos)))
		{
			cout << 0;
			return 0;
		}

		ip.erase (0, pos + 1);
	}

	cout << isCorrectPart (ip);

	return 0;
}