#include <iostream>

using namespace std;

int main ()
{
    float a;
    cin >> a;

    float result (a * a);
    result = result * result * a;

    cout.precision (3);
    cout << fixed << result * result;

    return 0;
}