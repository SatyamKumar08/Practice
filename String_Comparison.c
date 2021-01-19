/* Program to take string as an input from the user using %c and %s. Confirm that the strings are equal.*/
#include<stdio.h>
#include<string.h>

int main(void)
{
    char string1[10] ;
    char string2[10] ;
    char c;
    int comparison;
    int i = 0;
    
    printf("Enter first string: ");
    scanf("%s", string1);                                       // first string as an input 
    
    printf("Enter second string character by character: \n");

    while(c != '\n')                                            // taking character by character as an input using while loop
    {
        fflush(stdin);                                          // fflush(stdin) is used to flush previous character in loop
        scanf("%c", &c);                                        // taking character from user
        string2[i] = c;                                         // storing character in an array
        i++;
        
    }
    string2[i-1] = '\0';
    
    printf("The first string is : %s\n", string1);
    printf("The second string is : %s\n", string2);
    
    comparison = strcmp(string1, string2);
    if (comparison == 0)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Both strings are not equal");
    }
    return 0;
}

// This program is tested on V S Code and working fine -_-