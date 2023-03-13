//WAP TO find Highest Frequency In a string of word.

#include<stdio.h>
#include<conio.h>
#define FRE 100
#define SIZE 255
void main()
{
	char str[FRE];
	char check[SIZE] = {0};
	int i,flag,max=0;
	printf("\n\tEnter String:");
	gets(str);	// abab
	for(i=0;str[i] != '\0';i++)
	{
		flag = (int)str[i];
		check[flag] += 1;
	}
	for(i=0;i<SIZE;i++)
	{
		if(check[i] > check[max]){
			max = i;
		}
	}
	printf("\n\tThe Frequency of %c chrectore is %d",max,check[max]);
	getch();
}
