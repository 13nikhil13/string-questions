// anagram in a string

#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    char str1[100], str2[100];
    int i, j, len1, len2, found = 0, notfound = 0;
    printf("Enter First String :");
    gets(str1);
    printf("Enter Second String :");
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    // Condition Apply
    if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
        {
            for (j = 0; j < len1; j++)
            {

                if (str1[i] == str2[j])
                {
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                notfound = 1;
                break;
            }
        }
        if (notfound == 1)
        {
            printf("String is  not Anagram");
        }
        else
        {
            printf("String is  Anagram");
        }
    }
    else
    {
        printf("String Size Not Same");
    }

    getch();
}