#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;
ifstream f("bac.txt");
int frecv[11], s;

int main()
{
    int n, a, i, j;
    f >> n;
    while (f >> a)
        frecv[int(log10(a))]++;

    for (i = 0; i <= 9; i++)
    {
        if (frecv[i] && s < n)
        {
            s = s + frecv[i];
            j = i;
        }
    }
    if (s < n)
        cout << "Nu exista";
    else
        cout << pow(10, j);
    f.close();
}
