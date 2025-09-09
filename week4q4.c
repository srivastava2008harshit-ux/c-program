//Q4-write a program to  input student marks of five subjects and than calculate the percentage,CGPA and grade.

#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage, cgpa;
    char grade;

    // Input marks of 5 subjects
    printf("Enter marks of 5 subjects (out of 100):\n");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5.0;

    
    cgpa = percentage / 9.5;

    // Assign grade
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 45)
        grade = 'D';
    else
        grade = 'F';

    
       printf("\nTotal Marks = %.2f/500", total);
       printf("\nPercentage  = %.2f%%", percentage);
       printf("\nCGPA        = %.2f", cgpa);
         printf("\nGrade       = %c\n", grade);

    return 0;
}

