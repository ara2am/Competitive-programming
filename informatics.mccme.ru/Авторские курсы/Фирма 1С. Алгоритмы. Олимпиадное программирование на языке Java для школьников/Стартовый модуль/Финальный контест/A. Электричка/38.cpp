#include <iostream>

using namespace std;

int main ()
{
    int i, j;
    cin >> i >> j;

    cout << ((i == j) ? 0 : j + i - 1);

    return 0;
}