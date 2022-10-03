#include <stdio.h>

int main()
{
	for (int i = 0;i <= 13;i++)
	{
		for(int j = 0; j < (13-i) ; j++)
		{
			printf(" ");
		}
		for (int k = 0;k < 2*i+1 ;k++)
		{
			printf("$");
		}
		
		printf("\n");
	}

	for (int i = 0; i < 3;i++)
	{
		for ( int j=0; j<13 ;j++)
		{
			printf(" ");
		}
		printf("$");
		printf("\n");
		
	}
	return 0;
}