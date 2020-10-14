#include <iostream>
#include <fstream>

using namespace std;
ifstream f("bac.txt");

int main()
{
	int a, b, c, ok = 0;
	f >> a >> b;

	while (f >> c)
	{
		if (a >= c && ok == 0)
			cout << a << " ";
		else
		{
			ok = 1;
			cout << c << " ";
		}
		a = b;
		b = c;
	}
	f.close();
}
