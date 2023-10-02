#include <stdio.h>
#include <conio.h>
int main(void)
{
	float denom;
	float sum1 = 0.0, sum2 = 0.0001;
	int k = 1;
	denom = k * (k + 1) * (k + 2); 
	while (sum1 < sum2) {
		sum1 = sum2;
		sum2 += (1.0 / denom);
		denom = denom / k * (k + 3);
		++k;
	}
	printf_s("\n \t The amount of numerical series:%lg \n", sum2);
	printf_s("Number of itteration: %d", k);
	return 0;
}