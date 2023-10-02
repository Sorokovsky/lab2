# include <stdio.h>
# include <conio.h>
int main(void) {
	int p = 0;
	char ch = 'A';
	char i, j, k, ch2, kk, chA;
	chA = ch;
	printf("\n Enter a capital letter between \" A \" and\" S \":");
		scanf_s("%c", &ch2, sizeof(char));
	for (chA -= 1; chA >= ch2; chA--)
	{
		printf("\n Error! Press any key:");
		_getch();
		return -1;
	}
	for (kk = 'S' + 1; kk <= ch2; kk++)
	{
		printf("\n Error! Press any key:");
		_getch();
		return -1;
	}
	k = ch2;
	for (kk = ch; kk <= k; kk++)
	{
		printf("\n ");
		for (ch2 = ch; ch2 <= k - p; ch2++)
			printf(" ");
		for (j = ch; j <= kk; j++)
			printf("%c", j);
		for (i = kk; i > ch; i--)
			printf("%c", i - 1);
		p++;
	}
	printf("\n \n Press any key:");
	_getch();
	return 0;
}