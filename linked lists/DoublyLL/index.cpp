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

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        temp->back = prev;
        prev->next = temp;
        prev = temp;
    }

    Node *temp = head;
    int count = 0;

    while(temp){
        cout << temp->data << endl;
        temp = temp->next;
        count += 1;
    }

    cout << count << endl;

    return 0;
}