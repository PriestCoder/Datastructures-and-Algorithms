#include <iostream>
#include <vector>

using namespace std ;

class Node{
    
    public:
    int data ;
    Node* next ;
    
    public:
    Node(int data1, Node* next1)
    {
          data = data1 ;
          next = next1 ;
    }
    public:
    Node(int data1)
    {
          data = data1 ;
          next = nullptr ;
    }

};

int main()
{
    vector<int> vec = {1,2,3,4} ;
    
    /*
    Declared as object not storing pointer to the memory
    Node y = Node(vec[0],nullptr);
    cout << y.data ;
    */

   Node* x = new Node(vec[0]) ;
   Node* y = new Node(vec[1]) ;
   Node* z = new Node(vec[2]) ;
   Node* w = new Node(vec[3]) ;

   cout << x->data  << " " << y->data << " " << z->data << " " << w->data <<"\n";
   //cout << x->next  << " " << y->next<< " " << z->next << " " << w->next<<"\n";

  

}