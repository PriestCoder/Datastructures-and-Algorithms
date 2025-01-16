#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int data1)
    {
        data = data1;
        left = right = nullptr;
    }
};

int main()
{
    Node *root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(3);
    cout << root->left->data << " " << root->data << " " << root->right->data;
}