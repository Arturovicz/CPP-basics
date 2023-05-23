#include <iostream>

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *createNode(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

Node *insertNode(Node *root, int value)
{
    if (root == nullptr)
    {
        return createNode(value);
    }

    if (value < root->data)
    {
        root->left = insertNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = insertNode(root->right, value);
    }

    return root;
}

bool searchNode(Node *root, int value)
{
    if (root == nullptr)
    {
        return false;
    }

    if (value == root->data)
    {
        return true;
    }
    else if (value < root->data)
    {
        return searchNode(root->left, value);
    }
    else
    {
        return searchNode(root->right, value);
    }
}

void inorderTraversal(Node *root)
{
    if (root != nullptr)
    {
        inorderTraversal(root->left);
        std::cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main()
{
    Node *root = nullptr;

    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    std::cout << "Inorder traversal: ";
    inorderTraversal(root);
    std::cout << std::endl;

    int value = 40;
    if (searchNode(root, value))
    {
        std::cout << value << " found in the tree." << std::endl;
    }
    else
    {
        std::cout << value << " not found in the tree." << std::endl;
    }

    return 0;
}
