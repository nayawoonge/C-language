#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

double average(double a, double b);

int main(void)
{
	double res;
	res = average(1.5, 3.4);
	printf("res = %lf", res);

	return 0;
}

double average(double a, double b)
{
	double temp;
	temp = a + b;
	return(temp / 2.0);
}
