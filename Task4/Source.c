#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(void)
{
	int j, f, k;
	double F, Lt, s, Tend = 5.0, step;
	float L=2.3F;
	printf_s("Enter k: "); scanf_s("%d", &k);
	printf_s("Enter Lt: "); scanf_s("%lf", &Lt);
	printf_s("Enter step: "); scanf_s("%lf", &step);
	printf_s("\n Erlang function of order %d, Lambda =%1.2f: \n \n", k, L);
	for (double t = 0.0; t <= Tend;)
	{
		t += step;
		s = 0.0;
		f = 1; 
		Lt = 1.0;
		for (j = 1; j <= k; ++j)
		{
			f *= j;
			Lt *= (L * t);
			s += (Lt / f) * exp(-L * t);
		}
		F = 1 - exp(-L * t) - s;
		printf_s("\t% lg \n", F);
	}
	printf("\n \n Count: %d", j);
	_getch();
	return 0;
}