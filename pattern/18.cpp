//                         1
//                 2       2
//         3       3       3
// 4       4       4       4

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            cout << "\t";
        }
        for (j = n - i; j <= n; j++)
        {
            cout << i + 1 << "\t";
        }
        cout << endl;
    }
    return 0;
}