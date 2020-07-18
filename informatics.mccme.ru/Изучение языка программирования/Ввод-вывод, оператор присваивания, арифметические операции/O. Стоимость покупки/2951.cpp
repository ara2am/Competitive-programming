#include <iostream>

using namespace std;

int main ()
{
    int a, b, n;
    cin >> a >> b >> n;

    a = (a * 100 + b) * n;

    cout << a / 100 << ' ' << a % 100;

    return 0;
}