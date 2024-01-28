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

vector<int> node_level_pair(Node *root, int givenLevel)
{
    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});

    vector<int> value;

    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *node = pr.first;
        int level = pr.second;
        q.pop();

        if (level == givenLevel)
        {
            value.push_back(node->value);
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }

    return value;
}

int main()
{
    Node *root = take_input();
    int givenLevel;
    cin >> givenLevel;

    vector<int> value = node_level_pair(root, givenLevel);

    if (value.empty())
    {
        cout << "Invalid" << endl;
    }
    else
    {
        for (int v : value)
        {
            cout << v << " ";
        }
    }

    return 0;
}