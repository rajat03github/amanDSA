#include <iostream>
using namespace std;

int main()
{

    int row, col;

    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        // for colums to row now
        for (int j = 1; j <= col; j++)
            // this code is for one line
            cout << "*";
        cout << endl;
    }
    return 0;
}