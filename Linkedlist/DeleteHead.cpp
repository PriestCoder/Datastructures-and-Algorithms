#include <iostream>
#include <vector>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *ConvertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int LengthofLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;

    while (temp)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

Node *removeHead(Node *head)
{   
    if(head==nullptr) return head ;
    Node *temp = head;
    head = head->next;
    delete (temp);
    return head;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    Node *head = ConvertArr2LL(vec);
    head = removeHead(head);

    Node *temp = head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // cout << LengthofLL(head) ;
}