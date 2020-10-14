#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char a[100], v[] = "aeiou";
	int i, j;
	cout << "Sir:"; cin.getline(a, 100);
	int n = strlen(a);

	for (i = 0; i < n; i++)
	{
		if (strchr(v, a[i]))
		{
			for (j = n; j > i; j--)
				a[j] = a[j - 1];
			i++;
		}
	}
	cout << a;
}
