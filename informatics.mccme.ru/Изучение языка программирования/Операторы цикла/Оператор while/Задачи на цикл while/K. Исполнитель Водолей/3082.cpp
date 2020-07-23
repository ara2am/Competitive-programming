#include <iostream>
#include <sstream>

using namespace std;

struct Jug
{
	int lim;
	char name;
};

int main ()
{
	int n;
	Jug a {-1, 'A'}, b {-1, 'B'};
	cin >> a.lim >> b.lim >> n;

	if (a.lim > b.lim)
	{
		swap (a, b);
	}

	if (n == b.lim)
	{
		cout << ">" << b.name;
		return 0;
	}

	int ss (0);
	stringstream result;
	do
	{
		ss += a.lim;

		result << ">" << a.name << endl;
		result << a.name << ">" << b.name << endl;

		if (ss >= b.lim)
		{
			result << b.name << ">" << endl << a.name << ">" << b.name << endl;
			ss %= b.lim;
		}

		if (ss == n)
		{
			cout << result.str ();
			return 0;
		}
	} while (ss);

	cout << "Impossible";

	return 0;
}