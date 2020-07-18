#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    if (!n)
    {
        cout << 0;
    } else
    {
        cout << (n > 0 ? 1 : -1);
    }

    return 0;
}