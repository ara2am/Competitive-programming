#include <iostream>

using namespace std;

int main ()
{
    int p;
    cin >> p;

    int tmp (p / 2), a (tmp / 2);

    cout << a * (tmp - a);

    return 0;
}