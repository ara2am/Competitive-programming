#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double a, b, c;
    cin >> a >> b >> c;

    cout << ((abs (c - (a + b)) <= 0.00000001) ? "YES" : "NO");

    return 0;
}