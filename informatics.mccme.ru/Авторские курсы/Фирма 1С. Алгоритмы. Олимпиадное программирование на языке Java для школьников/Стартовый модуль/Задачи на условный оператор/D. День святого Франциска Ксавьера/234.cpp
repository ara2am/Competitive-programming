#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
    int n, m;
    cin >> n >> m;

    if (m == 1605)
    {
        cout << 1;
        return 0;
    }

    int nn (max (n, 1605) - 1605), mm (max (m, 1605) - 1605);
    int result ((mm - nn + nn % 10) / 10);
    cout << result + ((n < 1605) && (m >= 1605));

    return 0;
}