// 1
// 2       3
// 3       4       5
// 4       5       6       7

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i, j;
    for (i = 1; i <= n; i++)
    {
        int k = i;
        for (j = 1; j <= i; j++)
        {
            cout << k++ << '\t';
        }
        cout << endl;
    }
    return 0;
}