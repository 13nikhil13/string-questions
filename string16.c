#include <stdio.h>  
#include <conio.h>  
#include <string.h>
int main()  
{  
    int i, len = 0,j;  
    char str[100];

    printf("\n\nFind the space in string and remove it :\n");
    printf("----------------------------------------------------------------------\n");
   
    printf("Input the string : ");
    gets(str);  
      
    //Calculating length of the array  
    len = strlen(str);  
      
    //Checks for space character in array if its there then ignores it and swap str[i] to str[i+1];  
    for(i = 0; i < len; i++){  
        if(str[i] == ' '){  
            for(j=i;j<len;j++)  
        {  
            str[j]=str[j+1];  
        }  
        len--;  
        }  
    }  
    printf("String after removing all the white spaces : %s", str);  
    return 0;  
}  