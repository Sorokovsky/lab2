#include<stdio.h>
#include<conio.h>
int main(void) {
	int j = 0;
	double i, n;
	printf("\n \t Enter the primary natural number: "); scanf_s("%lf", &i);
	printf("\t Enter the last natural number: "); scanf_s("%lf", &n);
	printf("\n \t The numbers are: ");
	double ii = i;
	if (ii >= 0 && n >= 0 && ii <= n)
	{
		while (ii <= n) {
			printf("\n \t%3d %3lf", j, ii);
			++ii;
			++j;
		}

	}
	if (ii < 0 && n < 0 && ii <= n)
	{
		while (ii <= n) 
		{
			printf("\n%3d \t %3lf", j, ii);
			++ii;
			++j;
		}
	}
	j = 0;
	ii = i;
	printf_s("\n\n\n");
	if (ii >= 0 && n >= 0 && ii <= n)
	{
		while (ii <= n) 
		{
			printf("  %lf", ii);
			++ii;
			++j;
		}
	}
	if (ii < 0 && n < 0 && ii <= n)
	{
		double ii = i;
		while (ii <= n)
		{
			printf("%lf", ii);
			++ii;
			++j;
		}
	}
	printf("\n Total numbers:%d \n", j); 
	printf("\n Press any key:");
	_getch();
	return 0;
}