#include <iostream>
#include <fstream>

using namespace std;
ifstream f("bac.txt");
int frecv[11];

int main()
{
    int a, i, maxi = 0;
    while (f >> a)
    {
        while (a > 0)
        {
            frecv[a % 10]++;
            a = a / 10;
        }
    }
    for (i = 0; i <= 9; i++)
    {
        if (frecv[i] > maxi)
            maxi = frecv[i];
    }
    for (i = 0; i <= 9; i++)
    {
        if (frecv[i] == maxi && maxi != 0)
            cout << i << " ";
    }
    f.close();
}
