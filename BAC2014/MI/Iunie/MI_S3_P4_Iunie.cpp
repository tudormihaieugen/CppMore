#include <fstream>
#include <iostream>

using namespace std;
ifstream f("bac.txt");
int frecv[100];

int main()
{
    int a, i, maxi = 0;
    while (f >> a)
    {
        while (a > 9)
        {
            frecv[a % 100]++;
            a = a / 10;
        }
    }
    for (i = 10; i <= 99; i++)
    {
        if (frecv[i] > maxi)
            maxi = frecv[i];

        for (i = 10; i <= 99; i++)
        {
            if (frecv[i] == maxi && frecv[i] != 0)
                cout << i << " ";
        }
    }
    f.close();
}
