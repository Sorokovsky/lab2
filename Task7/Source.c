# include <stdio.h>
# include <conio.h>
void normal()
{
	int p = 0;
	char ch = 'A';
	char i, j, k='S', ch2, kk, chA;
	chA = ch;
	printf("\n Enter a capital letter between \" A \" and\" S \":");
	do {
		ch2 = getchar();
	} while (!(ch >= 'A' && ch <= 'S'));
	for (kk = 'S' + 1; kk <= ch2; kk++)
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
}
void reversed()
{
	int p = 0;
	char ch = 'A';
	char i, j, k, ch2 = 'S', kk, chA;
	chA = ch;
	printf("\n Enter a capital letter between \" A \" and\" S \":");
	do {
		ch2 = getchar();
	} while (!(ch >= 'A' && ch <= 'S'));
	k = ch2;
	for (kk = ch; kk <= k; kk++) {
		printf("\n ");
		for (ch2 = ch; ch2 <= k - p; ch2++)
			printf(" ");
		for (j = ch; j <= kk; j++)
			printf("%c", j);
		for (i = kk; i > ch; i--)
			printf("%c", i - 1);
		p++;
	}

}
void left() {
	int p = 0;
	char ch = 'A';
	char i, j, k, ch2 = 'S', kk, chA;
	chA = ch;
	printf("\n Enter a capital letter between \" A \" and\" S \":");
	do {
		ch2 = getchar();
	} while (!(ch >= 'A' && ch <= 'S'));
	k = ch2;
	for (kk = ch; kk <= k; kk++)
	{
		printf("\n ");
		for (ch2 = ch; ch2 <= k - p; ch2++)
			printf(" ");
		for (j = ch; j <= kk; j++)
			printf("%c", j);
		p++;
	}
}
void right()
{
	int p = 0;
	char ch = 'A';
	char i, j, k, ch2 = 'S', kk, chA;
	chA = ch;
	printf("\n Enter a capital letter between \" A \" and\" S \":");
	do {
		ch2 = getchar();
	} while (!(ch >= 'A' && ch <= 'S'));
	k = ch2;
	for (kk = ch; kk <= k; kk++)
	{
		printf("\n ");
		for (ch2 = ch; ch2 <= k - p; ch2++)
			printf(" ");
		for (j = ch; j <= kk; j++)
			printf(" ");
		for (i = kk; i > ch; i--)
			printf("%c", i - 1);
		p++;
	}
}
void romb()
{
	int p = 0;
	char ch = 'A';
	char i, j, k = 'S', ch2, kk, chA;
	chA = ch;
	printf("\n Enter a capital letter between \" A \" and\" S \":");
	do {
		ch2 = getchar();
	} while (!(ch >= 'A' && ch <= 'S'));
	for (kk = 'S' + 1; kk <= ch2; kk++)
		k = ch2;
	for (kk = ch; kk <= k; kk++)
	{
		printf_s("\n ");
		for (ch2 = ch; ch2 <= k - p; ch2++)
			printf_s(" ");
		for (j = ch; j <= kk; j++)
			printf_s("%c", j);
		for (i = kk; i > ch; i--)
			printf_s("%c", i - 1);
		p++;
	}
	p = 0;
	chA = ch;
	printf("\n  ");
	for (kk = ch; k >= 'A'; k--) {
		for (ch; ch <= k; ch++)
			printf_s("%c", ch);
		for (ch; ch <= ch2; ch++)
			printf_s("%c", ch);

		p++;
	}
}
int main(void) {
	//normal();
	//printf_s("\n\n\n\n");
	//reversed();
	//printf_s("\n\n\n\n");
	//left();
	//right();
	romb();
	return 0;
}