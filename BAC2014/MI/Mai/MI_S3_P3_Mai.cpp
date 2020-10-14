#include <iostream>

using namespace std;

void perfect(int a, int b)
{
	int i;
	for (i = b; i >= a; i--) 
	{
		int d, s = 1;
		for (d = 2; d <= i / 2; d++)
			if (i % d == 0)
				s = s + d;
		if (s == i)
			cout << i << " ";
	}
}

int main()
{
	int a, b;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	perfect(a, b);
}
