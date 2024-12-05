#include <iostream>

using namespace std;

/*void f(int n, int i)
{
    if (n < i) return;
    cout << n << endl;
    f(n - 1, i);
}
*/

void f(int i, int n)
{
    if (i < 1)
        return;
    cout << i << "\n";
    f(i - 1, n);
}

int main()
{
    int n;
    cin >> n;
    f(n, n);
}