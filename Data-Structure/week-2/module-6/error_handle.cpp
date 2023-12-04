#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
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
        cout << endl
             << "Inserted at head " << endl
             << endl;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp akon last node e

    temp->next = newNode;

    cout << endl
         << "Inserted at tail" << endl
         << endl;
}

// print function
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

// insert value at any position
void insert_at_any_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "invalid index" << endl
                 << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << endl
         << "inserted at position " << pos << endl
         << endl;
}

// insert at head
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "inserted at head" << endl
         << endl;
}

// delete from position
void delete_from_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;

        if (temp == NULL)
        {
            cout << "invalid index" << endl
                 << endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << "invalid index" << endl
             << endl;
        return;
    }

    Node *deleteNode = temp->next;

    temp->next = temp->next->next;
    delete deleteNode;
    cout << endl
         << "Delete position" << endl
         << endl;
}

// update/delete head
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "head not available" << endl
             << endl;
        return;
    }
    
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl
         << "Deleted Head" << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;       // error handle done
        cout << "Option 2: print Linked List" << endl;    // error handle done
        cout << "Option 3: inserted at position" << endl; // error handle done
        cout << "Option 4: inserted at head" << endl;     // error handle done
        cout << "Option 5: delete from position" << endl; // error handle done
        cout << "Option 6: delete head" << endl;          // error handle done
        cout << "Option 7: Terminated" << endl;

        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Please enter a value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {

            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, v;
            cout << "Enter Position: ";
            cin >> pos;
            cout << "Enter Value: ";
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_any_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter Value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {

                delete_from_position(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}