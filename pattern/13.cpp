// A       B       C
// A       B       C
// A       B       C

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
            cout << char(j + 'A') << "\t";
        }
        cout << endl;
    }
}