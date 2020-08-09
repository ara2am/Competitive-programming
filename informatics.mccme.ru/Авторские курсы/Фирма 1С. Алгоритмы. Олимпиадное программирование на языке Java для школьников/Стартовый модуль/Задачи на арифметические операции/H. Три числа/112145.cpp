#include <iostream>

using namespace std;

int main ()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout.precision (3);
    cout << fixed << a << '+' << b << '+' << c << '=' << a + b + c << endl;
    cout << a << '*' << b << '*' << c << '=' << a * b * c << endl;
    cout << '(' << a << '+' << b << '+' << c << ")/3=" << (a + b + c) / 3.f;

    return 0;
}