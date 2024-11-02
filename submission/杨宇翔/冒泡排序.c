#include <stdio.h>
int main()
{
	printf("input 5 number:");
	int i = 0,j = 1,z=1;
	int a[5] = {0};
	for (i = 0; i < 5; i++)
		scanf_s("%d", &a[i]);
	for (i = 1; i <= 4; i++)
	{
		for (j = 0; j <= 4 - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				z = a[j];
				a[j] = a[j + 1];
				a[j + 1] = z;
			}
		}
	}
	for (i = 0; i < 5; i++)
		printf("%d", a[i]);
}