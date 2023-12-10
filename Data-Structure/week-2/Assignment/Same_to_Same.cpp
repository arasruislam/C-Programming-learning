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

// take input from user
void take_input(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// check size
int check_size(Node *head, Node *head2)
{
    Node *temp = head;
    Node *temp2 = head2;

    int size1 = 0;
    int size2 = 0;

    while (temp != NULL)
    {
        size1++;
        temp = temp->next;
    }
    while (temp2 != NULL)
    {
        size2++;
        temp2 = temp2->next;
    }

    int value = 0;
    if (size1 != size2)
    {
        value = 1;
    }

    return value;
}

// check two linked list same or not
void linked_list_same_or_not(Node *head, Node *head2)
{
    Node *temp = head;
    Node *temp2 = head2;
    int flag = 0;
    while (temp != NULL && temp2 != NULL)
    {
        if (temp->value != temp2->value)
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

// print function
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int value;
        cin >> value;

        if (value == -1)
            break;

        take_input(head, tail, value);
    }

    // second linked list input
    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int value;
        cin >> value;

        if (value == -1)
            break;

        take_input(head2, tail2, value);
    }

    int size = check_size(head, head2);
    if (size == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        // send head and head2
        linked_list_same_or_not(head, head2);
    }

    return 0;
}