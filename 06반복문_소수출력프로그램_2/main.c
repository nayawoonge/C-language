#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int a;
	int count=0;
	int pn;
	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &a);
	for (int i = 2;i < a;i++)
	{
		pn = 0;
		for (int j = 2;j < i;j++)
		{
			if (i % j == 0)
				pn = 1;
		}
		if (pn == 0)
		{
			printf("%d ", i);
			count++;
			if (count % 5 == 0)
				printf("\n");
		}
		

	}
	return 0;
}
