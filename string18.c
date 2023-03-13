// Write a program in C to split strings by space into words
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char string[100], str[10][20];
    int i, j = 0, k = 0;

    printf("Enter a string: ");
    gets(string);

    for (i = 0; i <= strlen(string); i++)
    {
        if (string[i] == 32 || string[i] == '\0')
        {
            str[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            str[k][j] = string[i];
            j++;
        }
    }
    printf("\n after spliting the string from space:\n");
    for (i = 0; i < k; i++)
    {
        printf("%s\n", str[i]);
    }
    getch();
}