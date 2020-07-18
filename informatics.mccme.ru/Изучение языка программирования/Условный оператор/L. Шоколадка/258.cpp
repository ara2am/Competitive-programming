#include <iostream>

using namespace std;

int main ()
{
    int n, m, k;
    cin >> n >> m >> k;

    cout << ((((k % n == 0) || (k % m == 0)) && (n * m >= k)) ? "YES" : "NO");

    return 0;
}