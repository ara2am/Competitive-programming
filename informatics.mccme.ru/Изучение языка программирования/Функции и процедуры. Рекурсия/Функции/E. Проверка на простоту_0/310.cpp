#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    for (int i = 2; i <= sqrt (n); i++)
    {
        if (n % i == 0)
        {
            cout << "composite";
            return 0;
        }
    }

    cout << "prime";

    return 0;
}