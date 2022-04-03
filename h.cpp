#include <bits/stdc++.h>
using namespace std;
#include "Node.cpp"
// -1 as terminator
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

Node *deleteNode(Node *head, int n)
{
    if (n == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < n - 1; i++)
            temp = temp->next;
        Node *temp1 = temp->next;
        temp->next = temp1->next;
        delete temp1;
    }
    return head;
}

Node *insertNode(Node *head, int position, int data)
{
    if (position == 1)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }
    Node *temp = head;
    for (int i = 1; i < position - 1; i++)
        temp = temp->next;
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
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
    Node *head = takeinput();
    print(head);
    head = insertNode(head, 2, 5);
    print(head);
    head = deleteNode(head, 1);
    print(head);
    return 0;
}