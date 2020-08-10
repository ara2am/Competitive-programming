#include <iostream>

using namespace std;

int main ()
{
    int p, n, s (0);
    cin >> p >> n;

    for (int i (0), a; i < n; i++)
    {
        cin >> a;
        s += a;
    }

    for (int i (0); i < s - p; i++)
    {
        cout << 1 << ' ';
    }

    return 0;
}