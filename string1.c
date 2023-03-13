//palindrom string

#include<stdio.h>
#include<conio.h>
void main()
{
    int len=0,i,temp=0;
	char name[50];
	printf("\n\tEnter Your Name:\n");
	scanf("%[^\n]s",name);
	len = strlen(name);
	for(i=0;i<len;i++)
	{
		if(name[i] != name[len - 1 - i]){
			temp++;
			break;
		}
	}

	if(temp==0){
		printf("it is a palindrom");
	}
	else{
		printf("its not a palindrom");
	}
	getch();
}