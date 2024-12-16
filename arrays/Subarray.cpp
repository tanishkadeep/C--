#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1};
    vector<int> temp;
    int i, j, n = arr.size();
    for (i = 0; i < n; i++)
    {
        temp = {};
        for (j = i; j < n; j++)
        {
            temp.push_back(arr[j]);
            for(auto it: temp){
                cout << it << " ";
            }
            cout<<endl;
        }
    }

    return 0;
}