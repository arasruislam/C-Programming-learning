#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;

    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    // temp = pos-1;
    newNode->next = temp->next;
    temp->next = newNode;
}

int size(Node *head)
{
    Node *temp = head;

    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // Print Linked List.
    print_linked_list(head);

    int pos, val;
    cin >> pos >> val;

    if (pos > size(head))
    {
        cout << "invalid index" << endl;
    }
    else
    {
        // Insert Item
        insert(head, pos, val);
    }

    // Print Linked List.
    print_linked_list(head);

    return 0;
}