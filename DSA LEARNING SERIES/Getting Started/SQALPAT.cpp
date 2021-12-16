#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 5 * i - 4; j <= 5 * i; j++)
            {
                cout << j << " ";
            }
        }
        else
        {
            for (int j = 5 * i; j >= 5 * i - 4; j--)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
