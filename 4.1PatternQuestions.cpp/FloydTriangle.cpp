#include <iostream>
using namespace std;

/*
1
23
456
78910
1112131415
*/

int main()
{
    int n;
    cin >> n;

    int count = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }

    return 0;
}