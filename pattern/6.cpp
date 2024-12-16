// 16      15      14      13
// 12      11      10      9
// 8       7       6       5
// 4       3       2       1

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int i, j, k = n * n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << k-- << '\t';
        }
        cout << endl;
    }
}