#include <bits/stdc++.h>
using namespace std;
vector<int> temp;

void perm(vector<int> &arr, int index, vector<vector<int>> &ans)
{
    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }

    for (int i = index; i < arr.size(); i++)
    {
        swap(arr[index], arr[i]);
        perm(arr, index + 1, ans);
        swap(arr[index], arr[i]);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};
    int n = arr.size();
    vector<vector<int>> ans;

    perm(arr, 0, ans);
    for (auto it : ans)
    {
        for (auto it1 : it)
        {
            cout << it1 << " ";
        }
        cout << endl;
    }
    return 0;
}