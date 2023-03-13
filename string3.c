//camelcase in string

#include<stdio.h>
#include<conio.h>
void main()
{
    int len=0,i,temp=0;
	char name[50];
	printf("\n\tEnter Your Name:\n");
	scanf("%[^\n]s",name);
	len = strlen(name);
    //rohan kumar
    //camel case
    for(i=0;i < len;i++)
	{
		if(name[i] >=65 && name[i] <= 90){
			name[i] =  name[i] + 32;
           // printf("%d",(name[i]+32));
		}
        else{
            printf("helo");
            name[i] =  name[i] - 32;
        }
	}

	printf("\n string in camel case = %s", name);
    getch();
}