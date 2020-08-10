#include <iostream>
#include <cmath>

using namespace std;

float length (int x1, int y1, int x2, int y2)
{
    return sqrt (pow (x1 - x2, 2) + pow (y1 - y2, 2));
}

int main ()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    cout << fixed << length (x1, y1, x2, y2) + length (x1, y1, x3, y3) + length (x2, y2, x3, y3);

    return 0;
}