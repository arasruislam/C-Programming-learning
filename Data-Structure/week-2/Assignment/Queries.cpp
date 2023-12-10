#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

// Insert Value.
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// print linked list
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

// insert at head
void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// linked list size
int linked_list_size(Node *head)
{
    int size = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}

// delete from any position
void delete_from_any_position(Node *head, int value)
{
    if (value >= linked_list_size(head) || value == 0)
    {
        return;
    }

    Node *temp = head;
    for (int i = 0; i < value - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
// delete head node
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int main()
{

    int query;
    cin >> query;

    Node *head = NULL;

    while (query--)
    {
        int placer, value;
        cin >> placer >> value;

        if (placer == 1)
        {
            insert_at_tail(head, value);
        }
        else if (placer == 0)
        {
            insert_at_head(head, value);
        }
        else if (placer == 2)
        {
            if (value == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_any_position(head, value);
            }
        }

        print_linked_list(head);
    }

    return 0;
}