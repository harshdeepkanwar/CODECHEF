#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n, k;
    bool flag = false;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (k == arr[i])
        {
            flag = true;
        }
    }

    if (flag)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}
