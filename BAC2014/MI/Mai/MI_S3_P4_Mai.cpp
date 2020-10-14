#include <iostream>
#include <fstream>

using namespace std;
ifstream f("bac.txt");

int main()
{
	int a, b, nr = 1, maxi = 1, c, i;
	f >> a;

	while (f >> b)
	{
		if (a == b)
			nr++;
		else {
			if (nr >= maxi)
			{
				maxi = nr;
				c = a;
			}
			nr = 1;
		}
		a = b;
	}
	if (nr >= maxi)
	{
		maxi = nr;
		c = a;
	}
	cout << maxi << endl;
	for (i = 1; i <= maxi; i++)
		cout << c << " ";
	f.close();
}
