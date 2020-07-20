#include <iostream>

using namespace std;

int main ()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((!a) && (!b))
    {
        cout << "INF";
    } else if ((!a) || (b % a))
    {
        cout << "NO";
    } else
    {
        int x (-b / a);

        if ((c) && (!(d % c)) && (-d / c == x))
        {
            cout << "NO";
        } else
        {
            cout << x;
        }
    }

    return 0;
}