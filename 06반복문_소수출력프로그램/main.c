#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int a;
	int count;
	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &a);
	for (int i = 2;i <= a;i++)
	{
		count = 0;
		for (int j = 1;j <= i;j++)
		{
			if (i % j == 0)
				count++;
		}
		if (count == 2)
			printf("%d ", i);
			
	}
	return 0;
}
