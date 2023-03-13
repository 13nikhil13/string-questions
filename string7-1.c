/*
WAP and take a string from user and print length of that string with space and without spaces. 
Also print count of words in string.

Example :- Sunny Singh = 
   Length with Space = 11
   Length without space = 10
   Count of words is = 2
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,with_space=0,without_space=0;
	//int len=0;
	char name[15];
	printf("\n\tEnter Your Name:\t");
	gets(name);
	//len = strlen(name);
	
    for(i=0;name[i]!='\0';i++){
        if(name[i]==32){
            with_space++;
        }
    }
    for(i=0;name[i]!='\0';i++){
        if(name[i]==32){
            without_space++;
        }
    }

    without_space = with_space - without_space;
    printf("\n\tLength of string with-space Is :  %d",with_space);
    printf("\n\tLength of string without-space Is :  %d",without_space);
	
	getch();
}