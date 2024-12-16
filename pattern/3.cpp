// 1       2       3       4
// 1       2       3       4
// 1       2       3       4
// 1       2       3       4

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << j + 1 << "\t";
        }
        cout << endl;
    }
}