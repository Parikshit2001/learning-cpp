#include <bits/stdc++.h>
using namespace std;
#include "Node.cpp"
// -1 as terminator
// Merge sorted LL
// Give two sorted LL as input
Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    cout << head->data << " ";
    while (head->next != NULL)
    {
        head = head->next;
        cout << head->data << " ";
    }
    cout << endl;
}

int main()
{
    Node *h1 = takeinput();
    Node *h2 = takeinput();
    print(h1);
    print(h2);
    return 0;
}