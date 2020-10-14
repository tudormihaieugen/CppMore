#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char a[100], v[] = "aeiou";
	int i, j;
	cout << "Sir: "; cin.getline(a, 100);
	int n = strlen(a);

	for (i = 1; i < n; i++)
	{
		if (strchr(v, a[i]) && strchr(v, a[i - 1]))
		{
			for (j = i; j < n - 1; j++)
				a[j] = a[j + 1];
			a[n - 1] = NULL;
			i--;
		}
	}
	cout << a;
}
