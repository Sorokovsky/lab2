#include <stdio.h>
#include <conio.h>
int main(void)
{
	double denom;
	double sum1 = 0.0, sum2 = 0.0;
	int k = 1;
	denom = k * (k + 1) * (k + 2); // знаменник ряду
	do {
		sum1 = sum2;
		sum2 += 1.0 / denom;
		denom = denom / k * (k + 3);
		++k;
	} while(sum1 < sum2);
	printf("\n \t The amount of numerical series:% lg \n", sum2);
	printf("\n Press any key:");
	_getch();
	return 0;
}