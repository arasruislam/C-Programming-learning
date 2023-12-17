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

// insert at any position
void insert_at_position(Node *head, int position, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;

    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    // connect next node
    newNode->next = temp->next;
    temp->next = newNode;
    // connect previous node
    newNode->next->previous = newNode;
    newNode->previous = temp;
}

// size
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

// insert at tail
void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (tail == NULL)
    {
        tail = newNode;
        head = newNode;
        return;
    }

    tail->next = newNode;
    newNode->previous = tail;
    tail = newNode;
}

// insert at head
void insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->previous = newNode;
    head = newNode;
}

// print forward
void forward(Node *head)
{
    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}

// print backward
void backward(Node *tail)
{
    Node *temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->previous;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int query;
    cin >> query;
    while (query--)
    {
        int position, value;
        cin >> position >> value;

        if (position == 0)
        {
            insert_at_head(head, tail, value);
        }
        else if (position == size(head))
        {
            insert_at_tail(head, tail, value);
        }
        else if (position >= size(head))
        {
            cout << "Invalid" << endl;
            continue;
        }
        else
        {
            insert_at_position(head, position, value);
        }

        // print forward
        forward(head);
        // print backward
        backward(tail);
    }

    return 0;
}