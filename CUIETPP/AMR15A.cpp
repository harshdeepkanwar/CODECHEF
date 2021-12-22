#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int c = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0)
        {
            c++;
        }
    }

    if (c > N / 2)
    {
        cout << "READY FOR BATTLE" << endl;
    }
    else
    {
        cout << "NOT READY" << endl;
    }

    return 0;
}
