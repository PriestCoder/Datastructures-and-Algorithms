#include <iostream>

using namespace std;

void OTN(int i, int n)
{
    if (i > n)
        return;
    cout << i << "\n";
    OTN(i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    OTN(1, n);
}