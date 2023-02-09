#include <bits/stdc++.h>
using namespace std;
/*
12345 --1 st row
1234 --2 row
123
12
1
*/

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) // for rows
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}