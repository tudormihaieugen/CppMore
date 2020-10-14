#include <iostream>

using namespace std;

int main()
{
	int n, m, A[21][21], i, j, k;
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	k = 2;

	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (k % 5 != 0)
			{
				A[i][j] = k;
				k = k + 2;
			}
			else
			{
				A[i][j] = k + 2;
				k = k + 4;
			}
		}
	}
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
}
