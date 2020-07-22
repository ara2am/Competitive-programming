#include <iostream>
#include <string>

using namespace std;

bool Compare (string S1, string S2)
{
    return S1 == S2;
}

int main ()
{
    string s1, s2;
    cin >> s1 >> s2;

    cout << (Compare (s1, s2) ? "yes" : "no");

    return 0;
}