#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main ()
{
    string n;
    cin >> n;

    sort (n.begin (), n.end ());

    long long nn(stoll (n) * 9);
    int sum (0);
    for (; nn; sum += nn % 10, nn /= 10);

    cout << sum;

    return 0;
}