#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    int x = 0;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
        {
            x++;
        }
        i++;
    }
    cout << x << endl;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
