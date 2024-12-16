#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter: ";
    cin >> a;

    if (a >= 65 && a <= 90) // using ascii value
        cout << "uppercase" << endl;
    else if (a >= 'a' && a <= 'z')
        cout << "lowercase" << endl;
    else if (a >= '0' && a <= '9')
        cout << "digit" << endl;
}