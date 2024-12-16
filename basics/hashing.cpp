#include <bits/stdc++.h>
using namespace std;

void hash_num()
{
    int n;
    cout << "Total elements: ";
    cin >> n;

    int arr[n], i;
    int hash[1000000] = {0};

    cout << "Enter elements: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        hash[arr[i]]++;
    }
    int num;
    cout << "Number: ";
    cin >> num;
    cout << hash[num];
}

void hash_str()
{
    string str;
    cin >> str;

    int i, hash[26] = {0};
    for (i = 0; i < str.size(); i++)
    {
        hash[str[i] - 'a']++;
    }

    char ch;
    cin >> ch;
    cout << hash[ch - 'a'];
}

void hash_all()
{
    string str = "abcfkh@#$%KDRGRFYG645U";
    // cin >> str;

    int i, hash[256] = {0};
    for (i = 0; i < str.size(); i++)
    {
        hash[str[i]]++;
    }

    char ch;
    cin >> ch;
    cout << hash[ch];
}

void hashmap()
{
    int n;
    cin >> n;
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mpp;
    for (i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // map stores values in sorted order

    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    cout << "enter numbers to search \n";
    int num;
    for (i = 0; i < 5; i++)
    {
        cin >> num;
        cout << mpp[num] << "\n";
    }

    //for char use: map<char, int>
    // fetching and stores in a map - logN
    unordered_map<int, int> umpp;
}

int main()
{
    // hash_num();
    // hash_str();
    // hash_all();
    hashmap();
}
