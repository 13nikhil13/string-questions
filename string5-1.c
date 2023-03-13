// compare two string is same or not(using 'strcpm' function).

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char first[20];
	char second[20];
	int value=0;
	clrscr();
	printf("\n\tEnter First String :");
	gets(first);
	printf("\n\tEnter Second String:");
	gets(second);
	value = strcmp(first,second);
	printf("\n\tString VAlue is :%d",value);
	getch();
}

/*
strcmp(first_string, second_string)	compares the first string with second string. 
If both strings are same, it returns 0,
its return +ve then first string > second otherwise second > first string -ve.
*/