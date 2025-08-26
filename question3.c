#include <stdio.h>
#define  PI 3.14

int main()
{
 float radius , area , perimeter ;

 // input from the user 
 printf("enter the radius of the circle:");
 scanf("%f" , &radius);

  //  calculate the area and perimeter 
  area = PI * radius * radius ;
  perimeter = 2 * PI * radius;

   // output the result 
   printf("area of the circle:%.2f\n" , area);
   printf("perimeter of the circle : %.2f\n" , perimeter );

   return 0;
   }


