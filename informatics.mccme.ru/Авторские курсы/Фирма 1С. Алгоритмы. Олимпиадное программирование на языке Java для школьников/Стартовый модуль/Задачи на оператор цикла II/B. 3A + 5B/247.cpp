#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    for (int i (0); n - i >= 0; i += 5)
    {
        if (!((n - i) % 3))
        {
            cout << (n - i) / 3 << ' ' << i / 5;
            return 0;
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}