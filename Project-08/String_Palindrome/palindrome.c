// Develop a program that  check given string is palindrome
//  or not without using string functions

#include <stdio.h>

int main()
{
    char s[50];
    int i, len= 0, result=0;

    printf("Enter string: ");
    scanf("%s", s);

    while(s[len] != '\0')
    {
        len++;
    }

    for(i = 0; i < len; i++)
    {
        if(s[i] != s[len - i - 1])
        {
            result= 1;
            break;
        }
    }

    if(result==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
