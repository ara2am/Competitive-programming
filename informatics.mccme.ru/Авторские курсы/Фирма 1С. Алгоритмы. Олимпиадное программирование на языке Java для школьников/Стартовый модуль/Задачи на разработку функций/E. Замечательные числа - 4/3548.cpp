#include <iostream>

using namespace std;

bool isPalindrome (int n)
{
    return ((n / 1000 == n % 10) && (n / 10 % 10 == n / 100 % 10));
}

int main ()
{
    int a, b;
    cin >> a >> b;

    for (int i (a); i <= b; i++)
    {
        if (isPalindrome (i))
        {
            cout << i << endl;
        }
    }

    return 0;
}