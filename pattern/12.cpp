// A       A       A
// B       B       B
// C       C       C

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << char(i + 'A') << "\t";
        }
        cout << endl;
    }
}