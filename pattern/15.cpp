// D
// C       D
// B       C       D
// A       B       C       D

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i, j, k;
    for (i = 0; i <= n; i++)
    {
        k = n - i;
        for (j = 0; j < i; j++)
        {

            cout << char(k + 'A') << '\t';
            k++;
        }
        cout << endl;
    }
    return 0;
}