// 1       2       3       4       5       5       4       3       2       1
// 1       2       3       4       *       *       4       3       2       1
// 1       2       3       *       *       *       *       3       2       1
// 1       2       *       *       *       *       *       *       2       1
// 1       *       *       *       *       *       *       *       *       1

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
            cout << j + 1 << "\t";
        }
        for (; j < n; j++)
        {
            cout << "*\t";
        }
        for (j = 0; j < i; j++)
        {
            cout << "*\t";
        }
        for (j = n - i; j >= 1; j--)
        {
            cout << j << "\t";
        }

        cout << endl;
    }
    return 0;
}