#include <bits/stdc++.h>
using namespace std;
/*
    ***** -- n to -rowno. 5 - 1 = 4 spaces
   *****
  *****
 *****
*****

*/

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++) // for spaces
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}