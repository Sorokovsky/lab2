#include <stdio.h>
#include <conio.h>
int main(void) {
	int j = 1;
	char a = 'a';
	printf("\n Table code characters: \n");
	for (; a <= 'z'; ++a)
		printf("\n%4d)%2c: code%4d", j++, a, a);
	printf("\n \n Press any key:");
	_getch();
	return 0;
}