// write a program to calculate compund interest.

#include <stdio.h>
#include <math.h> 


int main() {
    double principal, rate, time, compoundInterest;
    int n; // Number of times interest is compounded per year

    // Input principal, rate, time, and n
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    
    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);
    
    printf("Enter the time in years: ");
    scanf("%lf", &time);
    
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

         // Convert rate from percentage to decimal
    rate = rate / 100;

    // Compound Interest Formula: A = P * (1 + r/n)^(n*t)
    compoundInterest = principal * pow((1 + rate/n), n*time);

    printf("The amount after %.2lf years is: %.2lf\n", time, compoundInterest);

    return 0;
      }

