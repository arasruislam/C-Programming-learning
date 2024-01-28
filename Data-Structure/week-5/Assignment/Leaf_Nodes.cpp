#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

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

void descending(Node *root, vector<int> &value)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }

    if (!root->left && !root->right)
    {
        value.push_back(root->value);
        return;
    }
    descending(root->left, value);
    descending(root->right, value);
}

int main()
{
    Node *root = take_input();
    vector<int> value;
    descending(root, value);

    sort(value.begin(), value.end(), greater<int>());

    for (auto v : value)
    {
        cout << v << " ";
    }

    return 0;
}