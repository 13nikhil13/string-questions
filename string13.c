// Check a string is subset of another string or not.

#include <stdio.h>

int main()
{
    char string[1000], sub[1000], new[1000];
    int position = 0, length, i = 0, j, len1, len2, flag;

    printf("Input a string\n");
    gets(string);

    printf("Enter the position and length of substring\n"); // start to find the sub string in a string
    scanf("%d%d", &position, &length);

    while (i < length)
    {
        sub[i] = string[position + i - 1];
        i++;
    }
    sub[i] = '\0';

    printf("Required substring is \"%s\"\n", sub); // '\"' to print " // print the founded sub-string.

   /*
   from here we find that the sub string is the subset of new-string or not.  
   */
   
    printf("Enter new string: ");       //new string enter
    scanf("%s", new);

    // Iterate over sub
    for (i = 0; sub[i] != '\0'; i++)
    {
        flag = 0;
        // Iterate over new
        for (j = 0; new[j] != '\0'; j++)
        {
            // If a match is found
            if (sub[i] == new[j])
            {
                flag = 1;
                break;
            }
        }
        // If a character in sub is not found in new
        if (flag == 0)
        {
            printf("Sub String  is not a subset of new string \n");
            return 0;
        }
    }
    // If all characters in sub are found in new
    printf("Sub String  is a subset of new string \n");

    return 0;
}