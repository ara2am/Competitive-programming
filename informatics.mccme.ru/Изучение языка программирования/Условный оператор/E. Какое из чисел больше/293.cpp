#include <iostream>

using namespace std;

int main ()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0;
    } else
    {
        cout << (a > b ? 1 : 2);
    }

    return 0;
}