#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int x, y, z;
    cin >> x >> y >> z;

    if (x + y > z && y + z > x && z + x > y)
    {
        if (x == y && y == z)
        {
            cout << "1";
        }
        else if (x == y || y == z || z == x)
        {
            cout << "2";
        }
        else if (x != y && y != z && z != x)
        {
            cout << "3";
        }
    }
    else
    {
        cout << "-1";
    }

    return 0;
}
