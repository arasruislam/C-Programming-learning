#include <iostream>

using namespace std;

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

// print linked list in reverse way
void print_reverse_doubly(Node *head, Node *tail)
{
    Node *temp = tail;
    Node *tempTwo = head;
    while (temp != NULL && tempTwo != NULL)
    {
        if (temp->value != tempTwo->value)
        {
            cout << "NO";
            return;
        }
        temp = temp->previous;
        tempTwo = tempTwo->next;
    }
    cout << "YES" << endl;
}

// insert value
void insert_value(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->previous = tail;
    tail = tail->next;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;

    while (true)
    {
        cin >> value;
        if (value == -1)
            break;

        insert_value(head, tail, value);
    }

    print_reverse_doubly(head, tail);

    return 0;
}