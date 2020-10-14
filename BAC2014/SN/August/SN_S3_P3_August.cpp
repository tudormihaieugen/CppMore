#include <iostream>

using namespace std;

int main()
{
	int n, k = 2, i, a[51];
	cout << "n = "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		if (k % 5 != 0)
		{
			a[i] = k;
			k = k + 2;
		}
		else
		{
			a[i] = k + 2;
			k = k + 4;
		}
	}
	for (i = 1; i <= n; i++)
		cout << a[i] << " ";
}
