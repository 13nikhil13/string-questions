// compare two string is same or not

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
    for (i = 0; a[i] != '\0' || b[i] != '\0'; i++)
    {
        if (a[i] != b[i])
        {
            temp = 1;
            break;
        }
    }
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
