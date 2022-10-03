#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int i, j;
	for (i = 0;i < 5;i++)
	{
		for (j = 0;j < 5;j++)
		{
			if (i == j || i + j == 4)
			{
				printf("*");
			}
			else
				printf(" ");
			
		}
		printf("\n");
	}
	return 0;
}
