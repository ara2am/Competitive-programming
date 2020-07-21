#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    float x, y, z;
    int n;
    cin >> x >> y >> z >> n;

    for (int i (0); i < n; i++)
    {
        float a, b, c, q;
        cin >> a >> b >> c >> q;

        x -= a * q;
        y -= b * q;
        z -= c * q;
    }

    cout << ((((x < 0) || (abs (x) <= 1e-5f)) && ((y <= 0) || (abs (y) <= 1e-5f)) && ((z <= 0) || (abs (z) <= 1e-5f))) ? "YES" : "NO");

    return 0;
}