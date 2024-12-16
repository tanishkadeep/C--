//                         1
//                 1       2       1
//         1       2       3       2       1
// 1       2       3       4       3       2       1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;

    for (i = 0; i < n; i++)
    {
        int k = 1;
        for (j = 0; j < n - i - 1; j++)
        {
            cout << "\t";
        }
        for (; j < n; j++)
        {
            cout << k++ << "\t";
        }
        k = k - 2;
        for (j = k; j >= 1; j--)
        {
            cout << j << "\t";
        }

        cout << endl;
    }
    return 0;
}