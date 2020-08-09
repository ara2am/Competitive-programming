#include <iostream>

using namespace std;

int main ()
{
    int n, k;
    cin >> n >> k;

    for (; k > 0; k--)
    {
        if (n % 10)
        {
            n--;
        } else
        {
            n /= 10;
        }
    }

    cout << n;

    return 0;
}