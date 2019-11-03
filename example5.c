//This program will work as a login page which will ask for your password and then give you access to the page...

#include <stdio.h>
#include <stdlib.h> //some random library
#include <string.h> //this one contains the 'strcmp() function

int main () {
    char username[15];
    int password;

    printf("#################### \n");
    printf("WELCOME USER \n");
    printf("#################### \n");
    printf("Enter your ID: \n");
    scanf("%s", &username);
    printf("Enter your password: \n");
    scanf("%d", &password);

    char compare = strcmp(username, "Muntasir");

    if ( compare == 0) {
        switch(password) {
            case 12345:
                printf("ACCESS GRANTED \n");
                printf("Welcome back %s \n", username);
                break;
            default:
                printf("ACCESS DENIED. PLEASE TRY AGAIN \n");
                break;
        }
    } else {
        printf("ACCESS DENIED. PLEASE TRY AGAIN");
    }

    return 0;
}