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

Node *InsertKth(Node *head, int val, int pos)
{
    if (head == NULL)
    {
        if (pos == 1)
        {
            return new Node(val);
        }
        else
        {
            cout << "Not possible " << "\n";
            return 0;
        }
    }
    if (pos == 1)
    {
        Node *temp = new Node(val, head);
        return temp;
    }

    int cnt = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        cnt++;
        if (cnt == pos - 1)
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
    head = InsertKth(head, 5, 2);
    // head = new Node(100, head);

    Node *temp = head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}