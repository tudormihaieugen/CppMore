#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char a[100];
	int i, poz, j, n;
	cout << "Sir: "; cin.getline(a, 100);
	if (a[0] != ' ')
		poz = 0;
	else
		poz = 1;
	n = strlen(a);

	for (i = 1; i < strlen(a); i++)
	{
		if (a[i - 1] == ' ')
		{
			if ((i - poz) % 2 == 0 && (i - poz) > 2)
			{
				for (j = (i + poz) / 2 - 1; j < strlen(a) - 1; j++)
					a[j] = a[j + 1];
				a[strlen(a) - 1] = NULL;
				i--;
			}
			poz = i;
		}
	}
	if ((i + 1 - poz) % 2 == 0 && (i + 1 - poz) > 2)
	{
		for (j = (i + 1 + poz) / 2 - 1; j < strlen(a) - 1; j++)
			a[j] = a[j + 1];
		a[strlen(a) - 1] = NULL;
	}
	if (n == strlen(a))
		cout << "Nu exista";
	else
		cout << a;
}
