#include <iostream>
#include <string>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        string num, first, last;
        cin >> num;
        first = num[0];
        last = num[num.length() - 1];

        int a = stoi(first);
        int b = stoi(last);
        cout << a + b << endl;
    }
    return 0;
}
