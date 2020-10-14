#include <iostream>

using namespace std;

void divizori(int n, int& mic, int& mare)
{
	int d;
	for (d = 2; d <= n / 2; d++)
		if (n % d == 0)
		{
			mare = d;
			if (mic == 0)
				mic = d;
		}
	if (mare == mic)
		mare = mic = 0;
}

int main()
{
	int n, mic, mare;
	cout << "n = "; cin >> n;
	divizori(n, mic, mare);
	cout << mic << " " << mare;
}
