// compare two string is same or not(using 'strcpm' function).

#include <stdio.h>
#include <conio.h>
int main()
{
    char a[20];
    char b[20];
    int i, temp = 0;
    printf("\t enter 1st string \t");
    scanf("%s", a);
    printf("\t enter 2nd string \t");
    scanf("%s", b);
    temp=strcmp(a,b);
    if (temp == 0)
    {
        printf("\t string are same");
    }
    else
    {
        printf("\t string are not same");
    }
    return 0;
}
