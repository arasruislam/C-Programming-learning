#include <iostream>
#include <queue>

using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *take_input()
{
    int value;
    cin >> value;
    Node *root;
    if (value == -1)
        root = NULL;
    else
        root = new Node(value);

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // step-1: ber kore ano
        Node *p = q.front();
        q.pop();

        // step-2: do all word here
        int l, r;
        cin >> l >> r;
        Node *myLeft = new Node(l);
        Node *myRight = new Node(r);

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // step-3: push the children
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1 -> ber kore ana
        Node *f = q.front();
        q.pop();

        // 2 -> jabotiyo kaj kora
        cout << f->value << endl;

        // 3 -> tar children gula rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = take_input();
    level_order(root);

    return 0;
}