// WAP To get String Length
#include<stdio.h>
#include<conio.h>
void main()
{
	int len=0,i,space=0;
	char name[50];
	clrscr();
	printf("\n\tEnter Your Name:");
	scanf("%[^\n]s",name);
	for(i=0;name[i] != '\0';i++)
	{
		if(name[i] == 32)
		{
			space++;
			continue;
		}
		len++;
	}
	printf("\n\tLength Is :  %d",len);
	printf("\n\tSpace In Your string is: %d",space);
	printf("\n\tWith space String is : %d",(len+space));
	getch();
}