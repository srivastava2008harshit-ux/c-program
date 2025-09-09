// write a program to input a number and then reverse it and print.

#include <stdio.h>

int main()
{
   printf("program to input a number and then reverse it and print.\n\n");

   int num,d,sum=0;
   printf("enter a number:");
   scanf("%d" , &num);

   while ( num > 0 )
   {   d = num  % 10;
   sum = sum*10+d;
   num = num/10;
   }
   printf("reverse is = %d\n", sum);
   return 0;
   }

                                        
