#include <iostream>
using namespace std;

int main()
{
    int i, n, a[50], x;
    cout << "n = "; cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "x = "; cin >> x;

    for (i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
            a[i] = a[i] - x;
    }
    for (i = 1; i <= n; i++)
        cout << a[i] << " ";
}
