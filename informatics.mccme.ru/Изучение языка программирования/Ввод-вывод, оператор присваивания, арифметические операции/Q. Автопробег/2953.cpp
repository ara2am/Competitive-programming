#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int n, m;
    cin >> n >> m;

    cout << ceilf (m / (n + 0.));

    return 0;
}