#include <iostream>
#include <fstream>

using namespace std;
ifstream f("bac.txt");

int main()
{
    int n, a, b, maxi = -1, i;
    f >> n;

    for (i = 1; i <= n / 2; i++)
        f >> a;
    for (i = n / 2 + 1; i <= n && maxi == -1; i++)
    {
        f >> b;
        if (b < a)
            maxi = b;
        a = b;
    }
    if (maxi == -1)
        cout << "Nu exista";
    else
        cout << maxi;
    f.close();
}
