// 1       1       1
// 2       2       2
// 3       3       3

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
            cout << i + 1 << "\t";
        }
        cout << endl;
    }
}