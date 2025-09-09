//Q3- write a program to input age check whether the person is eligilbe for vote or not.

#include <stdio.h>

int main()
{
   int age;
   printf("enter your age:\n");
   scanf("%d" , &age);
   
   if (age>=18) {
   printf("YOU ARE ELIGIBLR TO VOTE\n");
   }
      else
      printf("YOU ARE NOT ELIGIBLE TO VOTE\n");
      
    return 0;
  }

