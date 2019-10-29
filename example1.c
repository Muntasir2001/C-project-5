#include <stdio.h>

int main() {
    int a;
    printf("Enter an integer \n");
    scanf("%d", &a);

    if (a <= 20) {
        printf("Your selected number is less than 20 \n");
    } else {
        printf("Your selected number is not less than 20 \n");
    }

    printf("Your selected number is %d \n", a);
    return 0;
}
