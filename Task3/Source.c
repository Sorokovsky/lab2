#include <stdio.h>
#include <conio.h>
void letters()
{
	char start, end;
	printf_s("Enter the first symbol: ");
	start = _getch();
	printf_s("%c", start);
	printf_s("\nEnter the end symbol: ");
	end = _getch();
	printf_s("%c", end);
	printf_s("\n Tstartble code charters: \n");
	for (int j = 0; start <= end; ++start)
	{
		j++;
		printf_s("\n%4d)%2c: code%4d", j, start - 32, start - 32);
		j++;
		printf_s("\n%4d)%2c: code%4d", j, start, start);
	}
	_getch();
}
void myFullName()
{
	char name[] = "Sorokovsky Andrey", current;
	int i = 0;
	printf_s("My fullname is Sorokovsky Andrey\n");
	printf_s("\n Tstartble code charters: \n");
	do
	{
		current = name[i];
		printf_s("\n%4d)%2c: code%4d", i, current, current);
		i++;
	} while (current != '\0');
}
int main(void) {
	letters();
	myFullName();
	return 0;
}