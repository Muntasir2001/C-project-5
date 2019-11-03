#include <stdio.h>

int main () {
    int mark1, mark2, mark3, mark4;
    int average;

    printf("Enter four marks you have obtained: \n");
    scanf("%d", &mark1);
    scanf("%d", &mark2);
    scanf("%d", &mark3);
    scanf("%d", &mark4);

    average = (mark1 + mark2 + mark3 + mark4)/4;

    if (average >= 40) {
        printf("Congratulations, you have passed the test \n");
    } else {
        printf("You have FAILED the test \n");
    }

    printf("HAVE A GOOD DAY \n");
   
}