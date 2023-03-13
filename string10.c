//WAP to split the string char. and also show their ASCII value.

#include <stdio.h>
int main() {  
    char str[50];
    int i;
    printf("Enter a character: ");
    gets(str);  
    for(i=0;str[i]!='\0';i++)
    {
       printf("\n %c = %d", str[i],str[i]);
    }
    printf("\n");
    return 0;
}