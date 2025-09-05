// write a c program to check whether a number is divisibe by 5 or 11 , state true or false.

#include <stdio.h>

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d" , &n);
    
    if (n%5 == 0 || n%11 == 0)
    printf("true\n");
    else 
    printf("false\n");
    return 0;
    }
