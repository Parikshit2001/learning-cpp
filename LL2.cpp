// Mid of LL
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

void MidLL(Node *head)
// if number of nodes are even, of the two middle print the starting one
{
    Node *temp = head;
    int n = 1;
    while (temp->next != NULL)
    {
        n++;
        temp = temp->next;
    }
    n = (n - 1) / 2;
    temp = head;
    while (n != 0)
    {
        n--;
        temp = temp->next;
    }
    cout << temp->data << endl;
}

void MidLL1(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data << endl;
    ;
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
    MidLL(head);
    MidLL1(head);
    return 0;
}