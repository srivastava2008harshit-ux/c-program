//Q13- write a program to count number of even and odd digits in a number.

#include <stdio.h>

int main()
{
   printf("enter a number:");
   int num, d;
   scanf("%d", &num);
   int even=0 , odd=0;

   while ( num > 0 )
   {
      d=num%10;
      if ( num % 2 == 0)
      {  even=even+1;
      }
      else {
      odd=odd+1;
      }
      num =num/10;
      }
      printf("odd=%d, even=%d\n", odd, even);

      return 0;
           }




