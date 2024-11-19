#include <iostream>
#include <vector>

using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1, Node *prev1, Node *next1)
    {
        data = data1;
        prev1 = prev;
        next1 = next;
    }
    Node(int data1)
    {
        data = data1;
        prev = nullptr;
        next = nullptr;
    }
};

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vec.size() ;
}