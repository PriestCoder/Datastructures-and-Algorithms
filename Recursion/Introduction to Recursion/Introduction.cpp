#include <iostream>

using namespace std;

int counter = 0;

void f()
{   
    if(counter==4) return ;
    cout << counter << endl;
    counter++;
    f();
}

int main()
{
    f();
}