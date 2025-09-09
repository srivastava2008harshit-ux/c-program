//Q6- write a program to input maximum limit and find all numbers divisible by 5 and 7.

#include <stdio.h>

int main() {
    int limit, i = 1;

    // Input the maximum limit
    printf("Enter the maximum limit: ");
    scanf("%d", &limit);

    printf("Numbers divisible by 5 and 7 up to %d are:\n", limit);

    while (i <= limit) {
        if (i % 5 == 0 && i % 7 == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");
    return 0;
}

