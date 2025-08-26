// write a program to swap two numbers with third variable 

#include <stdio.h>

int main()
{
    int a, b, temp;
    //input numbers
    printf("enter two numbers:");
    scanf("%d %d", &a , &b);

    printf("before swapping: a=%d, b=%d\n" , a , b);

    //swapping using third variable
    temp = a;
    a = b;
    b = temp;

    printf("after swapping: a=%d , b=%d\n" , a,b);

    return 0;
    }


