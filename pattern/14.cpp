// A       B       C
// D       E       F
// G       H       I

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i, j, k = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << char('A' + k) << '\t';
            k++;
        }
        cout << endl;
    }
    return 0;
}