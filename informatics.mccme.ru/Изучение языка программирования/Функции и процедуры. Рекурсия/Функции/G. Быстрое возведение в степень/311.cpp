#include <iostream>

using namespace std;

double power (double a, int n)
{
    if (!n)
    {
        return 1;
    }

    if (n % 2)
    {
        return a * power (a, n - 1);
    }

    return power (a * a, n / 2);
}

int main ()
{
    double a;
    int n;

    cin >> a >> n;
    cout << power (a, n);

    return 0;
}