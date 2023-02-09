#include <iostream>
using namespace std;
/*
    *
   ** n-3
  *** n-2
 **** n-1
***** n

*/

int main()

{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}
