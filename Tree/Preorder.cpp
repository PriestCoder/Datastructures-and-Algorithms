#include <iostream>
#include <vector>
#define int long long

using namespace std;

struct Node
{

    int data;
    Node *left;
    Node *right;

    Node(int data1)
    {
        data = data1;
        left = nullptr;
        right = nullptr;
    }
};

void preorder(Node *root, vector<int> &arr)
{
    if (root == nullptr)
    {
        return;
    }

    arr.push_back(root->data) ;
    preorder(root->left, arr);
    preorder(root->right, arr);
}

vector<int> Preorder(Node *root)
{
    vector<int> arr;

    preorder(root, arr);

    return arr;
}

signed main()
{

    Node *root = new Node(1);
    Node *n1 = new Node(2);
    Node *n2 = new Node(3);
    Node *n3 = new Node(4);
    Node *n4 = new Node(5);
    Node *n5 = new Node(6);
    Node *n6 = new Node(7);
    Node *n7 = new Node(8);
    Node *n8 = new Node(9);
    Node *n9 = new Node(10);

    root->left = n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;
    n4->left = n5;
    n2->left = n6;
    n2->right = n7;
    n7->left = n8;
    n7->right = n9;

    vector<int> result = Preorder(root);

    cout << "Preorder traversal :- " << "\n";

    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}