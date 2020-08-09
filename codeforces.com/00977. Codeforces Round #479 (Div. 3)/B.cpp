#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    char s[101];
    cin >> s;

    int pos (-1), count (0);
    for (int i (0); i < n - 1; i++)
    {
        int curCount (1);
        for (int j (i + 1); j < n - 1; j++)
        {
            curCount += ((s[i] == s[j]) && (s[i + 1] == s[j + 1]));
        }

        if (curCount > count)
        {
            count = curCount;
            pos = i;
        }
    }

    cout << s[pos] << s[pos + 1];

    return 0;
}