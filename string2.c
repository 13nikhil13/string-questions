//uppercase, lowercase, palindrom,camelcase in string

#include<stdio.h>
#include<conio.h>
void main()
{
    int len=0,i,temp=0;
	char name[50];
	printf("\n\tEnter Your Name:\n");
	scanf("%[^\n]s",name);
	len = strlen(name);
	//lower case to upper case
    for(i=0;name[i]!='\0';i++)
	{
		if(name[i] >='a' && name[i] <='z'){
			name[i] = name[i] -32;
		}
	}

	printf("string in upper case = %s", name);
	//upper case to lower case
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i] >='A' && name[i] <='Z'){
			name[i] = name[i] +32;
		}
	}

	printf("\n string in lower case = %s", name);
	
    //palindrom in string

    for(i=0;i<len;i++)
	{
		if(name[i] != name[len - 1 - i]){
			temp++;
			break;
		}
	}

	if(temp==0){
		printf("\n it is a palindrom");
	}
	else{
		printf("\n its not a palindrom");
	}
    //rohan kumar
    //camel case
    for(i=0;name[i]!='\0';i++)
	{
		if(name[i] >='A' && name[i] <='Z'){
			name[i] =  name[i] + 32;
		}
	}

	printf("\n string in camel case = %s", name);
    getch();
}