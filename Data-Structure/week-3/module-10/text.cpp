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

// print normal way
void print_normal_way(Node *head)
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
// print reverse way
void print_reverse_way(Node *tail)
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

// insert at any position
void insert_at_any_position(Node *&head, Node *&tail, int position, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;

    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    newNode->next->previous = newNode;
    newNode->previous = temp;
}

// insert at head
void insert_head(Node *&head, Node *&tail, int value)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int position, value;
        cin >> position >> value;

        if (position == 0)
        {
            insert_head(head, tail, value);
        }
        else
        {
            insert_at_any_position(head, tail, position, value);
        }

        print_normal_way(head);
        print_reverse_way(tail);
    }

    return 0;
}