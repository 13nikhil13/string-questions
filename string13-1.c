//Write a C program to check whether a substring is present in a string.
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	char sstr[10];
	int i,j,flag=0;
	clrscr();
	printf("\n\tEnter The String:");
	gets(str);
	printf("\n\tEnter Search String :");
	gets(sstr);
	for(i=0;i<strlen(str);i++)
	{
		flag=0;
		// the star infotech college ajmer
		// the
		//star the infotech college ajmer
		// the
		for(j=i;j<i + strlen(sstr);j++)
		{
			if(str[j] != sstr[j-i] || str[j] == ' ')
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		break;
	}
	if(flag==0)
	printf("\n\tSearching found");
	else
	printf("\n\tNot Found");
	getch();
}