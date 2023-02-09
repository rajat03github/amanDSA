#include <iostream>
using namespace std;

/* n =4
*      * 2* 4 - 2* 1 = 6 spaces
**    ** 2* 4 - 2* 2 = 4 spaces
*** |spaces|  ***
********    first part

********    second part is kinda reversed of first
***  ***
**    **
*      *

*/

int main()
{
    int n;
    cin >> n;

    // for first part
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
            cout << "*";

        int space = (2 * n) - (2 * i); // here i is row
        for (int j = 1; j <= space; j++)
            cout << " ";

        // after spaces
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    // for second part
    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
            cout << "*";

        int space = (2 * n) - (2 * i); // here i is row
        for (int j = 1; j <= space; j++)
            cout << " ";

        // after spaces
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}