#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int get_num(void);

int main(void)
{
	int result;

	result = get_num();
	printf("��ȯ�� : %d\n", result);
	return 0;

}

int get_num(void)
{
	int num;

	printf("����Է� : ");
	scanf("%d", &num);

	return num;
}