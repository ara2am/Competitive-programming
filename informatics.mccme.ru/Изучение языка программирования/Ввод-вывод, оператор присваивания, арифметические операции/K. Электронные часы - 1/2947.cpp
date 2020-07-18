#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    n %= 24 * 60;

    cout << n / 60 << ' ' << n % 60;

    return 0;
}