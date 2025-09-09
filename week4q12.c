//Q12- write a program to print number from 100 to 0 in reverse with the gap of two.


#include <stdio.h>

int main() {
    int i;

    // Loop from 100 down to 0 with a step of -2
    for(i = 100; i >= 0; i -= 2) {
        printf("%d\n", i);
    }

    return 0;
}


