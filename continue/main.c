#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int sum = 0;
	for (int i = 1;i <= 100;i++)
	{
		if ((i % 3) == 0)
		{
			printf("°Ç³Ê¶Ú ¼ö %d\n", i);
			continue;
		}
		sum += i;
	}
	printf("ÇÕ : %d", sum);
	return 0;

}
