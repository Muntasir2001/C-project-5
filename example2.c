#include <stdio.h>

int main () {
    int a;
    printf("Enter an integer \n");
    scanf("%d", &a);

    if (a == 20) {
        printf("Value of a is 20 \n");
    } else if (a == 40) {
        printf("Value of a is 40 \n");
    } else {
        printf("None of the values are matching \n");
    }
    printf("Your value is %d", a);
    return 0;
}