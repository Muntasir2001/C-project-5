//This program will find out whether a student has passed or failed and also the grade that he/she will receive according to her marks..using if and if-else statement

#include <stdio.h>

int main () {
    int marks;
    printf("Enter your marks in percentage \n");
    scanf("%d", &marks);

    if (marks >= 40 && marks <= 59) {
        printf("You have passed with C grade \n");
    } else if (marks >= 60 && marks <= 79) {
        printf("You have passed with B grade \n");
    } else if (marks >= 80 && marks <= 100) {
        printf("You have passed with A grade \n");
    } else {
        printf("You have failed the test. Please do the retest within 3 months. \n");
    }

    printf("HAVE A GOOD DAY \n");
    return 0;
}