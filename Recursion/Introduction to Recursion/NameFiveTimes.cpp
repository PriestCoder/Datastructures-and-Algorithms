#include <iostream>

using namespace std;

int cnt = 0;

void name()
{
    if (cnt == 5) return;
    cout << "Madhav " << "\n";
    cnt++ ;
    name();
}

int main()
{
    name();
}