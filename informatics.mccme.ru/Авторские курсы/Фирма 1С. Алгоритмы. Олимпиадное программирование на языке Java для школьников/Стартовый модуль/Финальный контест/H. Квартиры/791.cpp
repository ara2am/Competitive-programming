#include <iostream>

using namespace std;

int main ()
{
    int x, y;
    cin >> x >> y;

    cout << ((y % (y - x + 1)) ? "NO" : "YES");

    return 0;
}