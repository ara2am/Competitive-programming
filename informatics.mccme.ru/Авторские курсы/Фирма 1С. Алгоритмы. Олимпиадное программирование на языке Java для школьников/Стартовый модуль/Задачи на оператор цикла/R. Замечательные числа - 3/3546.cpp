#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    for (int i (100); i <= 999; i++)
    {
        int sum (0);
        for (int l (i); l; sum += l % 10, l /= 10);

        if (sum == n)
        {
            cout << i << endl;
        }
    }

    return 0;
}