#include <iostream>

using namespace std;

unsigned char ChangeCase (char c)
{
    if ((c >= 'a') && (c <= 'z'))
    {
        return c - ' ';
    }

    return ((c >= 'A') && (c <= 'Z')) ? c + ' ' : c;
}

int main ()
{
    char c;
    cin >> c;

    cout << ChangeCase (c);

    return 0;
}