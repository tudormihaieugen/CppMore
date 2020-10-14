#include <iostream>
#include <fstream>

using namespace std;
ifstream f("bac.txt");

int main()
{
    int n, a, b, mini = -1, i;
    f >> n >> a;

    for (i = 2; i <= n / 2 + 1; i++)
    {
        f >> b;
        if (a > b)
            mini = a;
        a = b;
    }
    if (mini == -1)
        cout << "Nu exista";
    else
        cout << mini;

    f.close();
}
