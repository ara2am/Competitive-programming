#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    char image[4][6] =
    {
        "+___ ",
        "|N / ",
        "|__\\ ",
        "|    "
    };

    for (int i (0); i < 4; i++)
    {
        for (int j (0); j < n; j++)
        {
            for (int k (0); k < 5; k++)
            {
                cout << ((image[i][k] == 'N') ? (char) ('1' + j) : image[i][k]);
            }
        }

        cout << endl;
    }

    return 0;
}