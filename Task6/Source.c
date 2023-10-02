# include <stdio.h>
# include <conio.h>
int main(void)
{
	long int x, r, i = 0;
	printf("\n Enter an integer:");
	scanf_s("%ld", &x);
	printf("\n Reverse-digit number% ld: \n \n \t", x);
	do {
		r = x % 10;
		printf("%ld", r);
		x = x / 10;
		i++;
	} while (x != 0);
	printf("\n \n Itterations: %ld", i);
	printf("\n Enter an integer:");
	scanf_s("%ld", &x);
	printf("\n Reverse-digit number% ld: \n \n \t", x);
	i = 0;
	while (x != 0) {
		r = x % 10;
		printf("%ld", r);
		x = x / 10;
		i++;
	}
	printf("\n \n Itterations: %ld", i);
	return 0;
}