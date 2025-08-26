#include <stdio.h>

int main()
{
  float principal,rate,time,simpleinterest;
   //input from the user
    printf("enter the principal amount:");
    scanf("%f" , &principal);

    printf("enter the rate of interest (in %%): ");
    scanf("%f" , &rate);

     printf("enter the time (in years):");
     scanf("%f" , &time);

     // calculate simple interest 
     simpleinterest = principal * rate * time/100;
      //output the result
      printf(" simple interest   = %.2f\n", simpleinterest);
       
       return 0;
 }      
      
