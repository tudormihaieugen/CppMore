#include <iostream>

using namespace std;

void interval(int n, int& a, int& b)
{
    int i, p = 1;
    for (i = 1; i <= n - 1; i++)
        p = p * i;

    a = p + 1;
    b = p * n * (n + 1) - 1;
}

int main()
{
    int n, a, b;
    cout << "n = "; cin >> n;
    interval(n, a, b);
    cout << a << " " << b;
}
