# include <stdio.h>
# include <conio.h>
# include <math.h>
int main(void)
{
	int j, f, k = 4;
	double F, Lt, s, t = 0.0, Tend = 5.0;
	float L = 2.3F;
	printf("\n Erlang function of order %d, Lambda =%1.2f: \n \n", k, L);
	for (; t <= Tend; t += 0.2)
	{
		s = 0.0; f = 1; Lt = 1.0;
		for (j = 1; j <= k; ++j)
		{
			f *= j;
			Lt *= (L * t);
			s += (Lt / f) * exp(-L * t);
		}
		F = 1 - exp(-L * t) - s;
		printf("\t% lg \ n", F);
	}
	printf("\n \n Press any key:");
	_getch();
	return 0;
}
