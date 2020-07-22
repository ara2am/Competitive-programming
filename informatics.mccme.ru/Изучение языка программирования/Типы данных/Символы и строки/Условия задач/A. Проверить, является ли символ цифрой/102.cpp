#include <iostream>

using namespace std;

bool IsDigit (char c)
{
    return ((c >= '0') && (c <= '9'));
}

int main ()
{
    char c;
    cin >> c;

    cout << ((IsDigit (c)) ? "yes" : "no");

    return 0;
}