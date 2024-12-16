#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *deleteHead(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }

    Node *temp = head;
    head = head->next;
    head->back = nullptr;
    temp->next = nullptr;
    free(temp);

    return head;
}
Node *deleteTail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }

    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }

    temp->back->next = nullptr;
    temp->back = nullptr;
    delete temp;

    return head;
}

Node *deleteNode(Node *head, int x)
{
    // Your code here
    Node *temp = head;
    int cnt = 0;

    while (temp)
    {
        cnt++;
        if (cnt == x)
        {
            if (!temp->back && !temp->next)
                return NULL;
            if (!temp->back)
                return deleteHead(head);
            if (!temp->next)
                return deleteTail(head);

            temp->back->next = temp->next;
            temp->next->back = temp->back;
            temp->back = nullptr;
            temp->next = nullptr;
            free(temp);
            break;
        }
        else
            temp = temp->next;
    }

    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3};

    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        temp->back = prev;
        prev->next = temp;
        prev = temp;
    }
    head = deleteNode(head, 1);

    Node *temp = head;
    int count = 0;

    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
        count += 1;
    }

    // cout << count << endl;

    return 0;
}