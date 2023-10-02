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
	for (kk = ch2; kk >= 'A'; kk--) {
		printf("\n");
		for (ch2 = ch; ch2 < kk; ch2++)
			printf(" ");
		for (char c = kk; c >= 'A'; c--)
			printf("%c", c);
		for (ch2 = ch; ch2 < kk; ch2++)
			printf(" ");
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
		printf("\n ");
		for (ch2 = ch; ch2 <= k - p; ch2++)
			printf(" ");
		for (j = ch; j <= kk; j++)
			printf("%c", j);
		for (i = kk; i > ch; i--)
			printf("%c", i - 1);
		p++;
	}
	p = 0;
	chA = ch;
	for (kk = ch2; kk >= 'A'; kk--) {
		printf("\n");
		for (ch2 = ch; ch2 <= kk; ch2++)
			printf(" ");
		for (char c = kk; c >= 'A'; c--)
			printf("%c", c);
		for (ch2 = ch; ch2 < kk; ch2++)
			printf_s(" ");
	}
}
int main(void) {
	//normal();
	//printf_s("\n\n\n\n");
	reversed();
	//printf_s("\n\n\n\n");
	//left();
	//right();
	//romb();
	return 0;
}