// 1       2       3       4
// 5       6       7       8
// 9       10      11      12
// 13      14      15      16

#include <iostream>
using namespace std;
int main()
{
    //------------------------
    // without using third variable
    // using a single loop

    /*
        int n;
        cin >> n;

        int i;
        for (i = 1; i <= n * n; i++)
        {
            cout << i << '\t';
            if (i % n == 0)
                cout << endl;
        }
    */

    //------------------------
    // using third variable
    // using 2 loops

    int n;
    cin >> n;

    int i, j, k = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << k++ << '\t';
        }
        cout << endl;
    }
}