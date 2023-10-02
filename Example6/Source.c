# include <stdio.h>
# include <conio.h>
int main(void)
{
	long int x, r;
	printf("\n Enter an integer:");
	scanf_s("%ld", &x);
	printf("\n Reverse-digit number% ld: \n \n \t", x);
	do {
		r = x % 10;
		printf("%ld", r);
		x = x / 10;
	} while (x!= 0);
	printf("\n \n Press any key:");
	_getch();
	return 0;
}