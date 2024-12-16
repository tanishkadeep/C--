// 1
// 2       2
// 3       3       3
// 4       4       4       4

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << "\t";
        }
        cout << endl;
    }
}