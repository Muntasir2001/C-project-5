//this program calculates the overtime worked by the employees....

#include <stdio.h>

int main () {
    char name[15];
    int overtime;
    int absent;
    int hours;

    printf("BONUS PAYMENT CALCULATION \n");
    printf("Enter your name: \n");
    scanf("%s", &name);
    printf("Enter the number of hours you have worked overtime: \n");
    scanf("%d", &overtime);
    printf("Enter the number of hours you were absent: \n");
    scanf("%d", &absent);

    hours = overtime - (2/3 * absent);
    
    printf("Hello %s \n", name);

    if (hours > 40) {
        printf("You will get 50 dollars as a bonus \n");
    } else if (hours <= 40 && hours > 30) {
        printf("You will get 40 dollars as a bonus \n");
    } else if (hours <= 30 && hours > 20) {
        printf("You will get 30 dollars as a bonus \n");
    } else if (hours <= 20 && hours > 10) {
        printf("You will get 20 dollars as a bonus \n");
    } else if (hours < 10) {
        printf("You will get 10 dollars as a bonus \n");
    } else {
        printf("You are not getting any bonus \n");
    }

    return 0;
}