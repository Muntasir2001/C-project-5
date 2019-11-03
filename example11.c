//this program finds out whether an year is a leap year (366 days)

#include <stdio.h>

int main () {
    int year;

    printf("LEAP YEAR TESTING \n");
    printf("Enter an year: \n");
    scanf("%d", &year);

    if (year%4 == 0) {
        printf("This year is a leap year \n");
    } else {
        printf("This year is not a leap year \n");
    }

    return 0;
}