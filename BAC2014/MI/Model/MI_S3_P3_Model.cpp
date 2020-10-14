#include <iostream>

using namespace std;

void divizor(int n, int& d)
{
	int i;
	for (i = 2; i <= n; i++) 
	{
		while (n % i == 0)
		{
			n = n / i;
			d = i;
		}
	}
}

int main()
{
	int d, n;
	cout << "n = "; cin >> n;
	divizor(n, d);
	cout << d;
}
