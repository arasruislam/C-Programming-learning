#include <iostream>
#include <queue>
#include <vector>

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

// Takes Input using Level Order
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
        // First Step
        Node *pt = q.front();
        q.pop();

        // Second Step
        int l, r;
        cin >> l >> r;
        Node *newLeft;
        Node *newRight;
        if (l == -1)
            newLeft = NULL;
        else
            newLeft = new Node(l);
        if (r == -1)
            newRight = NULL;
        else
            newRight = new Node(r);

        pt->left = newLeft;
        pt->right = newRight;

        // Final Step
        if (pt->left)
            q.push(pt->left);
        if (pt->right)
            q.push(pt->right);
    }
    return root;
}

void printLeft(Node *root)
{

    if (root->left)
    {
        printLeft(root->left);
        cout << root->left->value << " ";
    }
    else if (root->right)
    {
        printLeft(root->right);
        cout << root->right->value << " ";
    }
}

void printRight(Node *root)
{
    if (root->right)
    {
        cout << root->right->value << " ";
        printRight(root->right);
    }
    else if (root->left)
    {
        cout << root->left->value << " ";
        printRight(root->left);
    }
}

int main()
{
    Node *root = take_input();

    if (root)
    {
        if (root->left)
        {
            printLeft(root);
            cout << root->value << " ";
        }
        if (root->right)
        {
            printRight(root);
        }
    }

    return 0;
}