#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int dx (abs (x1 - x2));
    int dy (abs (y1 - y2));

    cout << ((((dx == 1) && (dy == 2)) || ((dx == 2) && (dy == 1))) ? "YES" : "NO");

    return 0;
}