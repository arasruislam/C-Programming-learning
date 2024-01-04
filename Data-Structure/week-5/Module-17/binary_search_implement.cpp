#include <iostream>

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

int main()
{
    // Create Nodes
    Node *root = new Node(10);
    Node *a = new Node(10);
    Node *b = new Node(10);
    Node *c = new Node(10);
    Node *d = new Node(10);
    Node *e = new Node(10);
    Node *f = new Node(10);
    Node *g = new Node(10);
    Node *h = new Node(10);
    Node *i = new Node(10);

    // connection
    root->left =a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    b->right = d;
    d->left = f;
    d->right= g;
    h->right = i;

    return 0;
}