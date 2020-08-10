#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    for (int l (0); l != n;)
    {
        if ((!l) || (l * 4 > n))
        {
            l++;
            cout << 1 << ' ';
        } else
        {
            l *= 4;
            cout << 4 << ' ';
        }
    }

    return 0;
}