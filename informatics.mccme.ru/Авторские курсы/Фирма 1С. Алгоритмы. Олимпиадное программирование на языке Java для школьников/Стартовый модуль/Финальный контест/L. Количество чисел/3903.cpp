#include <iostream>

using namespace std;

int main ()
{
    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << 0;
        return 0;
    }

    for (int i (0); i < b; i++)
    {
        cout << ((i > b - a) ? 0 : 9);
    }

    return 0;
}