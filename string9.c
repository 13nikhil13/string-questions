//WAP To Find Vowel and Consonant In A String.

#include<stdio.h>
#include<conio.h>
#define FRE 100
#define SIZE 255
void main()
{
	char str[FRE];
	int i,vowel=0,consonent=0;
	printf("\n\tEnter String:");
	gets(str);	// abab
	for(i=0;str[i] != '\0';i++)
	{
		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowel ++;
        }
        else if(str[i]==32){
            continue;
        }
        else{
            consonent++;
        }
	}
	printf("\n\tThe count of vovels in a string are %d",vowel);
	printf("\n\tThe count of consonent in a string are %d",consonent);
	getch();
}