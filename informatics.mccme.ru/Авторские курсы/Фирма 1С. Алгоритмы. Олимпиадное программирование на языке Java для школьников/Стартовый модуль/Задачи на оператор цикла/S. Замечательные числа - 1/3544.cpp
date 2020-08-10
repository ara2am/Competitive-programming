#include <iostream>

using namespace std;

int main ()
{
    for (int i (10); i <= 99; i++)
    {
        int m (1);
        for (int l (i); l; m *= l % 10, l /= 10);

        if (m * 2 == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}