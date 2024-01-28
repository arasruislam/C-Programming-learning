#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <math.h>

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

int count_node(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l + r + 1;
}
int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = take_input();
    int totalNode = count_node(root);
    int totalHeight = maxHeight(root);
    int checkNode = pow(2, totalHeight) - 1;

    if (checkNode == totalNode)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}