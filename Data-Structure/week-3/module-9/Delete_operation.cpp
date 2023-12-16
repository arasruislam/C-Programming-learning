#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *previous;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->previous = NULL;
    }
};

// print normal way value
void print_normal(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

// print reverse value
void print_reverse(Node *tail)
{
    Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->previous;
    }
    cout << endl;
}
// print size
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

// delete node at any position
void delete_at_any_position(Node *head, int position)
{
    Node *temp = head;

    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }

    Node *delNode = temp->next;
    temp->next = temp->next->next;
    temp->next->previous = temp;

    delete delNode;
}
// delete tail
void delete_tail(Node *&tail)
{
    Node *delNode = tail;
    tail = tail->previous;
    delete delNode;
    tail->next = NULL;
}

// delete head
void delete_head(Node *&head)
{
    Node *delHead = head;
    head = head->next;
    delete delHead;

    head->previous = NULL;
}
int main()
{
    // Node *head = NULL;
    // Node *tail = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // connection nodes
    head->next = a;
    a->previous = head;
    a->next = b;
    b->previous = a;
    b->next = c;
    c->previous = b;

    // takes input
    int position, value;
    cin >> position;

    // delete node at any position
    // delete_at_any_position(head, position);
    // delete tail
    // delete_tail(tail);
    // delete head
    // delete_head(head);

    if (position >= size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (position == 0)
    {
        delete_head(head);
    }
    else if (position == size(head) - 1)
    {
        delete_tail(tail);
    }
    else
    {
        delete_at_any_position(head, position);
    }

    // print left to right
    print_normal(head);
    // print right to left
    print_reverse(tail);

    return 0;
}