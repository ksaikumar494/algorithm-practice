#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{
    char str[10];
    int length,x;
    printf("enter a string: \n");
    gets(str);
    length=strlen(str);
    length=length-1;
    x=0;
    while(length > x)
    {
        if(str[length]!=str[x])
        {
            printf("%s is not a palindrome",str);
            exit(0);
        }
        length--;
        x++;
    }
    printf("%s is a palindrome",str);
    return 0;
}
