#include <stdio.h>
//This is a program which will check whether the integer is positive or negative

int main () {
    int a;
    printf("Input an integer: \n");
    scanf("%d", &a);

    if (a >= 0) {
        printf("The number is positive \n");
    } else {
        printf("This number is not positive \n");
    }

    return 0;
} 
