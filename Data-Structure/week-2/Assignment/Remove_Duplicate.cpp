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

// insert at tail
void insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
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

// delete node
void delete_node(Node *&head, int value)
{
    Node *temp2 = head;
    while (temp2->next != NULL)
    {
        if (temp2->next->value == value)
        {
            Node *deleteNode = temp2->next;
            temp2->next = temp2->next->next;
            delete deleteNode;
        }
        else
        {
            temp2 = temp2->next;
        }
    }
}

// print linked list
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;

    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head, value);
    }

    Node *temp = head;

    while (temp != NULL)
    {
        delete_node(temp, temp->value);
        temp = temp->next;
    }

    print(head);

    return 0;
}