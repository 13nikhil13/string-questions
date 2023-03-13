//string two string using temp

#include<stdio.h>
#include<conio.h>
void main ()
{
    char str1[50],str2 [50],temp[50];
    int i;
    
    printf("Enter First String :");
    gets(str1);
    printf("Enter Second String :");
    gets(str2);
    printf("\n String Before Swap :");
    printf(" First String = %s \t Second String =%s",str1,str2);
    //Swaping Start ---------------
    for ( i = 0; str1[i] != '\0'; i++)
    {
	temp[i] = str1[i];
    }
    temp[i] = '\0';
    for ( i = 0; str2[i] != '\0'; i++)
    {
	str1[i] = str2[i];
    }
    str1[i] = '\0';
    for ( i = 0; temp[i] != '\0'; i++)
    {
	str2[i] = temp[i];
    }
    str2[i] = '\0';
    printf("\n String After Swap :");
    printf(" First String = %s \t Second String =%s",str1,str2);
    getch(); 
    
}