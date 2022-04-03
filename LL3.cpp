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

Node *mergeSortedLL(Node *h1, Node *h2)
{
    Node *fh = NULL;
    Node *ft = NULL;
    if (h1->data < h2->data)
    {
        fh = h1;
        ft = h1;
        h1 = h1->next;
    }
    else
    {
        fh = h2;
        ft = h2;
        h2 = h2->next;
    }
    while (h1 != NULL && h2 != NULL)
    {
        if (h1->data < h2->data)
        {
            ft->next = h1;
            ft = h1;
            h1 = h1->next;
        }
        else
        {
            ft->next = h2;
            ft = h2;
            h2 = h2->next;
        }
    }
    if (h1 == NULL)
        ft->next = h2;
    else
        ft->next = h1;

    return fh;
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
    Node *head = mergeSortedLL(h1, h2);
    print(head);
    return 0;
}