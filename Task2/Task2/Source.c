#include <stdio.h>
#include <conio.h>
void countOfString()
{
    char input;
    int count = 0;
    printf_s("Enter the string \"Hello, world\": ");
    while (1) {
        input = getchar(); // Input the char
        if (input == '\n')
        {
            break;
        }
        count++;
    }
    printf_s("Count of characters: %d\n", count); // Display the result
}
void diagonal()
{
    char input, output = "";
    int count = 0;
    printf_s("Enter the name and surname: ");
    while (1) {
        input = getchar(); // Input the char
        if (input == '\n')
        {
            break;
        }
        count++;
        output += ' ' * count + input + '\n';
        for (int i = 0; i < count; i++)
        {
            printf_s(" ");
        }
        printf_s("%c\n", input);
    }
}
void dublicate(int count)
{
    char symbol;
    printf_s("Enter the char:");
    symbol = getchar();
    printf_s("\n");
    for (int i = 0; i < count; i++)
    {
        printf_s("%c", symbol);
    }
}
int main() 
{
   countOfString();
   diagonal();
   dublicate(2);
   return 0;
}