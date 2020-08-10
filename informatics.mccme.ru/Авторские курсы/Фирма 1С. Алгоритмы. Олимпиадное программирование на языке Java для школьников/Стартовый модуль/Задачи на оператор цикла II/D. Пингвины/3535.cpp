#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    char image[5][11] =
    {
        "   _~_    ",
        "  (o o)   ",
        " /  V  \\  ",
        "/(  _  )\\ ",
        "  ^^ ^^   "
    };

    for (int i (0); i < 5; i++)
    {
        for (int j (0); j < n; j++)
        {
            cout << image[i];
        }

        cout << endl;
    }

    return 0;
}