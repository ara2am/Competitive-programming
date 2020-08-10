#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    int sum (0);
    for (; n; sum += n % 10, n /= 10);

    cout << sum;

    return 0;
}