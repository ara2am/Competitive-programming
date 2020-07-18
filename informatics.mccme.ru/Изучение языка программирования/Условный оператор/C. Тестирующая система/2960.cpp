#include <iostream>

using namespace std;

int main ()
{
    int a, b;
    cin >> a >> b;

    cout << ((((a == 1) && (b == 1)) || ((a != 1) && (b != 1))) ? "YES" : "NO");

    return 0;
}