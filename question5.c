#include <stdio.h>

int main()
{ 
float length , breadth , area , perimeter;
  
  // input from the user
  printf("enter the length of the rectangle:");
  scanf("%f" , &length);
  
  printf("enter the breadth of the rectangle :");
  scanf("%f" , &breadth);
  
  // calculate the area and perimeter of rectangle
  perimeter = 2 * (length + breadth );
  area = length * breadth;
  
  // output the result
 
printf("area of the circle :%f\n" , area);
printf("perimeter  of the circle:%f\n" , perimeter);

return 0;
}

  
  
  
  
  
  

