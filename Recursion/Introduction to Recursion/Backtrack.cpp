#include <iostream>

using namespace std;

void backtrack(int i, int n)
{
    if (i > n)
        return;
    backtrack(i + 1, n);
    cout << i << "\n";
}

int main()
{
    int n;
    cin >> n;
    backtrack(1, n);
}
