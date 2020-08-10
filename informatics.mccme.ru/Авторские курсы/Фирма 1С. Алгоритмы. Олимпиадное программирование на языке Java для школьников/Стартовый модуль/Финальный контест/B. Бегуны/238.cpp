#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    int p1 (0), p2 (0);
    for (int i (0); i < n; i++)
    {
        int v1, t1, v2, t2;
        cin >> v1 >> t1 >> v2 >> t2;

        p1 = (p1 + 400 + (v1 * t1) % 400) % 400;
        p2 = (p2 + 400 + (v2 * t2) % 400) % 400;
    }

    cout << abs (p1 - p2);

    return 0;
}