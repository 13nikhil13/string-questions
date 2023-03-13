// Write a program in C to find the largest and smallest words in a string

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char string[100], str[10][20];
    int i, j = 0, k = 0, m = 0, n = 0, max, min;

    printf("Enter a string: ");
    gets(string);

    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 32)
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
    str[k][j] = '\0';
    max = strlen(str[0]);
    min = strlen(str[0]);

    for (i = 0; i <= k; i++)
    {
        if (max < strlen(str[i]))
        {
            m = i;
        }
        if (min > strlen(str[i]))
        {
            n = i;
        }
    }
    printf("largest word = %s \t in a string\nsmallest word = %s \t in a string", str[m], str[n]);
    getch();
}