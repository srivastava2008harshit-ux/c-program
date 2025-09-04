// write a program to calculate the difference between simple interest and compound interest.

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest, difference;

    // Input principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest (compounded annually)
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Calculate difference
    difference = compoundInterest - simpleInterest;

    // Display results
    printf("\nSimple Interest: %.2lf\n", simpleInterest);
    printf("Compound Interest: %.2lf\n", compoundInterest);
    printf("Difference (CI - SI): %.2lf\n", difference);

    return 0;
}

