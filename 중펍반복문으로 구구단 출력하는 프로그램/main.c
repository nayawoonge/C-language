#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int i, j;
	for (i = 1;i < 10;i++)
	{
		for (j = 1;j < 10;j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
