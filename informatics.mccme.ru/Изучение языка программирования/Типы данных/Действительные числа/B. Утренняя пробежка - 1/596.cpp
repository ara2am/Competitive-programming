#include <iostream>

using namespace std;

int main ()
{
    float x, y;
    cin >> x >> y;

    int result (1);
    while (x < y)
    {
        x *= 1.7f;
        result++;
    }

    cout << result;

    return 0;
}