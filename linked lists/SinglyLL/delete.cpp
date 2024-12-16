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

Node *deleteHeadOfLL(Node *head)
{
    if (!head)
        return head;
    Node *temp = head;
    head = head->next;
    // free(temp);
    delete temp;
    return head;
}

Node *deleteLast(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;

    return head;
}

Node *deleteK(Node *head, int k)
{
    if (head == NULL)
        return NULL;
    if(k==1) return head->next;

    Node *temp = head;
    int cnt = 0;
    while (temp)
    {
        cnt++;
        if (cnt == k - 1)
        {
            temp->next = temp->next->next;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = convertArr2LL(arr);

    // head = deleteHeadOfLL(head);

    // head = deleteLast(head);

    head = deleteK(head, 5);
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}