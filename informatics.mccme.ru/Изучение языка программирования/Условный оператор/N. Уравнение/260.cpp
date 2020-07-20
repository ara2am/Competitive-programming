#include <iostream>

using namespace std;

int main ()
{
    int a, b;
    cin >> a >> b;

    if ((!a) && (!b))
    {
        cout << "INF";
    }
    else if ((!a) || (b % a))
    {
        cout << "NO";
    } else
    {
        cout << -b / a;
    }

    return 0;
}