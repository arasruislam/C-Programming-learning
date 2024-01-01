#include <iostream>
#include <stack>
#include <queue>

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

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int value)
    {
        sz++;

        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->previous = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->previous;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }
    int top()
    {
        return tail->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int value)
    {
        sz++;
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->previous = tail;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->previous = NULL;
        delete deleteNode;
    }

    int front()
    {
        return head->value;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    myStack st;
    myQueue qu;

    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        qu.push(x);
    }

    while (!st.empty() && !qu.empty())
    {
        if (st.top() != qu.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        qu.pop();
    }
    if (st.empty())
    {
        cout << "YES" << endl;
    }

    return 0;
}