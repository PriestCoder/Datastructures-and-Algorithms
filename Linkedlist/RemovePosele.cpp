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

Node *deleteEle(Node *head, int el)
{
    if (head == nullptr)
        return head;

    if (head->data == el)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {

        if (temp->data == el)
        {
            prev->next = prev->next->next;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    Node *head = ConvertArr2LL(vec);
    head = deleteEle(head, 3);
    Node *temp = head;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}