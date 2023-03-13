// titel case + toggle case = camel case in string.
#include <stdio.h>
#include <conio.h>
void main()
{
    char str[50];
    int i = 0;

    printf("\n\tEnter String ");
    gets(str);
    printf("\n\tYour Inputted String is: %s", str);
    // A  65  Z 90 a 97    122 z rohan kumar
    for (i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 32;
        }

        else if (i > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[i] = str[i] + 32;
        }

        else if (str[i] == 32)
        {
            str[i + 1] = str[i + 1] - 32;
        }
    }
    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i - 1] == 32 && (str[i] >= 97 && str[i] <= 122))
        {   
                str[i] -= 32;
            
        }
    }
    printf("\n\tNew String Is : %s", str);
    getch();
}