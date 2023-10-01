#include <stdio.h>
#include <conio.h>
int main(void) {
	int i, j = 0, n;
	printf("\n \t Enter the primary natural number:"); scanf_s("%d", &i);
	printf("\t Enter the last natural number:"); scanf_s("%d", &n);
	printf("\n \t The numbers are:"); 
	while (i <= n) {
		printf("\n \t%3d", i);
		++i;
		++j;
	}
	printf("\n \t Total numbers:%d \n", j); printf("\n Press any key:");
	_getch();
	return 0;
}