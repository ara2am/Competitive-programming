#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    int count (1);
    for (int i (2); i <= n; count *= i, i++);

    cout << count;

    return 0;
}