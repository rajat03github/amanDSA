#include <bits/stdc++.h>
using namespace std;
/*
    1  -- space = n - row
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++) // for spaces
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}