#include <iostream>

using namespace std;

int main ()
{
    float x, y;
    cin >> x >> y;

    int result (1);
    float total (x);
    while (total < y)
    {
        x *= 1.7f;
        total += x;
        result++;
    }

    cout << result;

    return 0;
}