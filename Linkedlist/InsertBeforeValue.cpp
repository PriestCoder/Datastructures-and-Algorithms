#include <iostream>
#include <vector>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
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

Node *InsertBeforeValue(Node *head, int el, int val)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->data == val)
    {
        Node *temp = new Node(el, head);
        return temp;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {

        if (temp->next->data == val)
        {
            Node *x = new Node(val);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    Node *head = ConvertArr2LL(vec);
    head = InsertBeforeValue(head, 5, 1);
    // head = new Node(100, head);

    Node *temp = head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}