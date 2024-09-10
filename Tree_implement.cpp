#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = right = nullptr;
    }
};
Node *insert(Node *root, int value)
{
    if (root == nullptr)
    {
        return new Node(value);
    }
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }
    return root;
}
void Preorder(Node *root)
{
    if (root != nullptr)
    {
        cout << root->data << " ";
        Preorder(root->left);
        Preorder(root->right);
    }
}
void Inorder(Node *root)
{
    if (root != nullptr)
    {
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
}
void Postorder(Node *root)
{
    if (root != nullptr)
    {
        Postorder(root->left);
        Postorder(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    Node *root = nullptr;
    int n, value;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        root = insert(root, value);
    }
    cout << "The preordered numbers:" << endl;
    Preorder(root);
    cout << endl;
    cout << "The inordered numbers:" << endl;
    Inorder(root);
    cout << endl;
    cout << "The postordered numbers:" << endl;
    Postorder(root);
}