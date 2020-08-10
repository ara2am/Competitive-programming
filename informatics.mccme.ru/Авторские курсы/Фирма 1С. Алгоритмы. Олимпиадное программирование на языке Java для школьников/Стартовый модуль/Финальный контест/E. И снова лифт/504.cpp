#include <iostream>

using namespace std;

int main ()
{
    int a, b, c;
    cin >> a >> b >> c;

    int result (a - b);
    if (result * a <= 0)
    {
        result--;
    }
    a = result;

    result += c;
    if (result * a <= 0)
    {
        result++;
    }

    cout << result;

    return 0;
}