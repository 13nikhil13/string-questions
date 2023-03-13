# **Strings In C Language**
## _This is the basic infomation about stings in C Language_

---
- String: - In 'C' Language String is a group of charectors Terminated By Null Charector.

* You Can Print Whole String Using **%s** Formate Specifier.

* String Are Created using **Double Quates  " "**. 

* All Charector Are Store Their Indexes, Using these Index We Can Access All Charectors.

* Charector Occuppy **1 Byte** In Memory.

* We can Get String Input We Have Method In C-Language.
    1.	**scanf( );** this is can't get more then one word.

    2.	**gets( );** This is used To Get More Then One Word OR Sentence no need to using format Specifier.
* We Have Two Method In c to Print String
    1.	**printf();** Print Formated Output using Formate Specifier.
   
    2.	**puts();**  Here Formate Specifier Not Used.
* Disadvantage OF String: - 	**Buffer OverFlow**

* Syntax: -
			**DataType       Name   ArrayName[SIZE];**
    
    Example: - char  str[10];

* Declaration and Inilization: -
		
        DataType Name ArrayName[SIZE] =   {'s','t','a','r','\0'};
        
        char str[10] = {'s','t','a','r','\0'};
            
        char str2[10] = "star"; 

---

## ___A sample program___

```

#include<stdio.h>
#include<conio.h>
// WAP To print String
void main()
{
	int i=0;
	char name[10] = {'s','t','a','r','\0'};
	clrscr();
	printf("\n\tYou Name Is : %c\n",name[i]); // print only single charector
	while(name[i] != '\0')
	{
		printf("%c",name[i]);
		i++;
	}
	getch();
}
```
---

## Some important pre-define functions

1)	**strlen(string_name): -**	returns the length of string name.
2)	**strcpy(destination, source): -**	copies the contents of source string to destination string.
3)	**strcat(first_string, second_string): -**	concats or joins first string with second string. The result of the string is stored in first string.
4)	**strcmp(first_string, second_string): -**	compares the first string with second string. If both strings are same, it returns 0, its return +ve then first string > second otherwise second > first string -ve.
5)	**strrev(string): -** 	returns reverse string.
6)	**strlwr(string): -**	returns string characters in lowercase.
7)	**strupr(string): -** 	returns string characters in uppercase.

---
|Column 1|Column 2|
|--------|--------|
|    A    |    B    |
|    C    |    D    |
---
![Example-of-string](https://user-images.githubusercontent.com/94820544/224846745-6379b47e-ec7b-44ad-8270-d71e74cf7991.png)
