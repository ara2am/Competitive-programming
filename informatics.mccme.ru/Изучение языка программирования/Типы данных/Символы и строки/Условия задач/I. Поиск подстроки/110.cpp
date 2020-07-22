#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string a, b;
	cin >> a >> b;

	cout << ((b.find(a) != string::npos) ? "yes" : "no");

	return 0;
}