//Write a program which will the remainder if it is not zero otherwise print the result of the division (that is if the remainder is zero)

#include <stdio.h>

int main () {
    int a, b;
    int result;
    int remainder;

    printf("Input two numbers. Integers preferred \n");
    scanf("%d", &a);
    scanf("%d", &b);

    //result = a/b;
    //remainder = a % b;

    if (a % b != 0) {
        printf("remainder %d", a%b);
    } else {
        printf("result %d", a/b);
    }

    return 0;
}