#include <iostream>
#include <limits.h>

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

// take input
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

// get Maximum value from Linked List
int get_max_value(Node *head)
{
    Node *temp = head;
    int maxValue = INT_MIN;

    while (temp != NULL)
    {
        if (temp->value > maxValue)
        {
            maxValue = temp->value;
        }
        temp = temp->next;
    }

    return maxValue;
}

// get Minimum value from Linked List
int get_min_value(Node *head)
{
    Node *temp = head;
    int minValue = INT_MAX;

    while (temp != NULL)
    {
        if (temp->value < minValue)
        {
            minValue = temp->value;
        }
        temp = temp->next;
    }

    return minValue;
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
        take_input(head, tail, value);
    }

    int maxValue = get_max_value(head);
    int minValue = get_min_value(head);

    int valueDifference = maxValue - minValue;
    cout << valueDifference << endl;

    return 0;
}