#include <iostream>

using namespace std;

int main()
{
	int v[100], n, i, j, ok = 0;
	cout << "n = "; cin >> n;

	for (i = 1; i <= n; i++)
	{
		cout << "v[" << i << "] = ";
		cin >> v[i];
	}
	for (i = 1; i <= n && ok == 0; i++)
	{
		if (v[i] % 2 == 0)
		{
			ok = 1;
			for (j = i; j < n; j++)
			{
				v[j] = v[j + 1];
			}
			n--;
		}
	}
	for (i = 1; i <= n; i++)
		cout << v[i] << " ";
}
