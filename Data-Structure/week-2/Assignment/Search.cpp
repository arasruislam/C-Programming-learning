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

// check the value is available or not
void search_value(Node *head, int searchValue)
{
    Node *temp = head;
    int index = 0;
    int flag = 0;

    while (temp != NULL)
    {
        if (temp->value == searchValue)
        {
            flag = 1;
            break;
        }
        temp = temp->next;
        index++;
    }

    if (flag == 1)
    {

        cout << index << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}

int main()
{
    int query;
    cin >> query;

    while (query--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int value;
        while (true)
        {
            cin >> value;
            if (value == -1)
                break;

            take_input(head, tail, value);
        }

        int searchValue;
        cin >> searchValue;

        // send value and head to search_value function
        search_value(head, searchValue);
    }
    return 0;
}