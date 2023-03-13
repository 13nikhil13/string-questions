/* Write a program in C to remove characters from a string except alphabets.
    Ex:- Star2 infotech College Ajmer
    output:- Star infotech College Ajmer*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int i, len = 0, j;
    char str[1000];

    printf("\n\nFind the space in string and remove it :\n");
    printf("----------------------------------------------------------------------\n");

    printf("Input the string : ");
    gets(str);

    // Calculating length of the array
    len = strlen(str);

    // Checks for space character in array if its there then ignores it and swap str[i] to str[i+1];
    for (i = 0; i < len; i++)
    {
        while ((str[i] > 32 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 127))
        {
            
            for (j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            len--;
        }
        str[j]='\0';
    }
    printf("String after removing all the white spaces : %s", str);
    return 0;
}
