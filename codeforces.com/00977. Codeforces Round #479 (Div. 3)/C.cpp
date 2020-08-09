#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr;
    for (int i (0), a; i < n; i++)
    {
        cin >> a;
        arr.push_back (a);
    }

    sort (arr.begin (), arr.end ());

    if (!k)
    {
        cout << ((arr[0] == 1) ? -1 : arr[0] - 1);
    } else if (k == n)
    {
        cout << arr[n - 1];
    } else
    {
        cout << ((arr[k - 1] == arr[k]) ? -1 : arr[k - 1]);
    }

    return 0;
}