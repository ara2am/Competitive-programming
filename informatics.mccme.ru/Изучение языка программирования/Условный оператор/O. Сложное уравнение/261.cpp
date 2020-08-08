#include <iostream>

using namespace std;

int main ()
{
    int a, b, c, d, x;
    cin >> a >> b >> c >> d;

    if ((!a) && (!b))
    {
        cout << "INF";
    } else if ((a) && (!(b % a)) && ((x = -b / a) * c + d))
    {
        cout << x;
    } else
    {
        cout << "NO";
    }

    return 0;
}