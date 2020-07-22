#include <iostream>

using namespace std;

unsigned char ToUpper (char c)
{
    return ((c >= 'a') && (c <= 'z')) ? c - ' ' : c;
}

int main ()
{
    char c;
    cin >> c;

    cout << ToUpper (c);

    return 0;
}