//Q11- write a program to input a number and printf if it is palindrome or not.

#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        sum = sum * 10 + digit;
        temp = temp / 10;
    }

    if (sum == n) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }

    return 0;
}



