#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

double centi_to_meter(double x);

int main(void)
{
	double res;

	res = centi_to_meter(187);
	printf("%.2lfm\n", res);

	return 0;
}

double centi_to_meter(double x)
{
	double temp;
	temp = x / 100;
	return (temp);
}
