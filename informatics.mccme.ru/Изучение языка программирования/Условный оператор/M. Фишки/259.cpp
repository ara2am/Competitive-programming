#include <iostream>

using namespace std;

int main ()
{
    int k;
    cin >> k;

    cout << (((k % 4 == 0) || (k == 1)) ? "YES" : "NO");

    return 0;
}