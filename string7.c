/*
WAP and take a string from user and print length of that string with space and without spaces.
Also print count of words in string.

Example :- Sunny Singh =
   Length with Space = 11
   Length without space = 10
   Count of words is = 2
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int len = 0, i, space = 0, word=1;
    char name[50];
    printf("\n\tEnter Your Name:\t");
    gets(name);
    len = strlen(name);

    for (i = 0; i < len; i++)
    {
        if (name[i] == 32)
        {
            space++;
            continue;
        }
    }
    
    for (i = 0; name[i]!='\0'; i++)
    {
              
        if (name[i] == 32 )
        {
            word++;
        }
    }

    printf("\n\tLength of string without-space Is :  %d", (len - space));
    printf("\n\tcount  of Space :%d", space);
    printf("\n\tLength of string with-space Is :  %d", len);
    printf("\n\tTotal number of words are :  %d", word);

    getch();
}