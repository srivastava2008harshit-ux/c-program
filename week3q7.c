// program to calculate user age in form of d1 m1 y1 and d2 m2 y2.

#include <stdio.h>

int main() {
    int d1, m1, y1; // birth date
    int d2, m2, y2; // current date
    int d, m, y;

    printf("Enter birth date (dd mm yyyy): ");
    scanf("%d %d %d", &d1, &m1, &y1);

    printf("Enter current date (dd mm yyyy): ");
    scanf("%d %d %d", &d2, &m2, &y2);

    y = y2 - y1;
    m = m2 - m1;
    d = d2 - d1;

    if (d < 0) {
        d += 30;   // simple borrow
        m--;
    }
    if (m < 0) {
        m += 12;
        y--;
    }

    printf("Age = %d years %d months %d days\n", y, m, d);

    return 0;
}

