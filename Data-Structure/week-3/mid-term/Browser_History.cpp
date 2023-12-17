#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
    string name;
    Node *next;
    Node *previous;

    Node(string name)
    {
        this->name = name;
        this->next = NULL;
        this->previous = NULL;
    }
};

// Insert string value
void insert_at_tail(Node *&head, Node *&tail, string name)
{
    Node *newNode = new Node(name);

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->previous = tail;

    tail = newNode;
}

// print string doubly linked list
void print_string(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->name << " ";
        temp = temp->next;
    }
    cout << endl;
}

// find the siteName
void find_siteName(Node *head, Node *&currentNode, string siteName)
{
    Node *temp = head;

    int flag = 0;
    while (temp != NULL)
    {
        if (temp->name == siteName)
        {
            flag = 1;
            currentNode = temp;
        }
        temp = temp->next;
    }
    if (flag == 1)
    {
        cout << siteName << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

// get previous node from current node value
void get_previous_site(Node *&currentNode)
{
    if (currentNode->previous == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        cout << currentNode->previous->name << endl;
        currentNode = currentNode->previous;
    }
}

// get next node from current node value
void get_next_site(Node *&currentNode)
{
    if (currentNode->next == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        cout << currentNode->next->name << endl;
        currentNode = currentNode->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *currentNode = NULL;

    string name;
    while (true)
    {
        cin >> name;
        if (name == "end")
            break;

        insert_at_tail(head, tail, name);
    }

    int query;
    cin >> query;
    while (query--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string siteName;
            cin >> siteName;

            find_siteName(head, currentNode, siteName);
        }
        else if (command == "prev")
        {
            get_previous_site(currentNode);
        }
        else if (command == "next")
        {
            get_next_site(currentNode);
        }
    }

    return 0;
}