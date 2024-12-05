#include <iostream>

using namespace std;

void Backtrack(int i, int n)
{

    if (i < 1)
        return;
    Backtrack(i - 1, n);
    cout << i << "\n";
}

int main()
{

    int n;
    cin >> n;
    Backtrack(n, n);
}