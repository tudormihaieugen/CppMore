#include <iostream>

using namespace std;

int main()
{
    int a[51][51], i, j, m, n;
    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    for (i = 1; i <= m; i++)
    {
        for (i = 1; i <= n; i++)
        {
            a[i][n - 1] = a[i][n];
            a[m - 1][i] = a[m][i];
        }
    }
    m--;
    n--;
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
