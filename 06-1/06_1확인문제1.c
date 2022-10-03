#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int a;
	do {
		scanf("%d", &a);
	} while (a < 0);
	printf("%d", a);

	return 0;
}
//06-1 확인문제1