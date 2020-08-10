#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    for (int i (pow (10, n) - 1); i >= pow (10, n - 1); i -= 2)
    {
        cout << i << ' ';
    }

    return 0;
}