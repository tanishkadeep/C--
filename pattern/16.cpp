//                         *
//                 *       *
//         *       *       *
// *       *       *       *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << "\t";
        }
        for (j = n - i; j <= n; j++)
        {
            cout << "*\t";
        }
        cout << endl;
    }

    return 0;
}