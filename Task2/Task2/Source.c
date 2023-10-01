
#include <stdio.h> 
#include <conio.h> 
int main(void)
{
	int c, i = 0;
	printf("\n Enter symbol-by-symbol the offer \"Hello, world\", \n press twice Ctrl + Z and press Enter: \n");
	printf("\t");
	while ((c = getchar()) != EOF) {
		printf("\t");
		c = getchar();
		++i;
	}
	printf("\n\t The number of characters:%d \n", i);
	printf("\n Press any key:"); _getch();
	return 0;
}