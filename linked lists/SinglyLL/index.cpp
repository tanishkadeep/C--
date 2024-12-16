#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArr2LL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int main()
{
    Node *y = new Node(2, nullptr);
    Node *x = new Node(2);

    vector<int> arr = {1, 2, 3};
    Node *head = convertArr2LL(arr);
    cout << head->data << endl;

    Node *temp = head;
    int cnt = 0;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
        cnt++;
    }

    cout << "\nLength of LL = " << cnt;

    return 0;
}