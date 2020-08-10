#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    for (int i (0); i < n; i++)
    {
        int h;
        cin >> h;

        if (h <= 437)
        {
            cout << "Crash " << i + 1;
            return 0;
        }
    }

    cout << "No crash";

    return 0;
}