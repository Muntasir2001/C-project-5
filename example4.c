#include <stdio.h>

int main () {
    int age;
    int vehicle_type;

    printf("To check whether you are eligible, please enter your age: \n");
    scanf("%d", &age);

    printf("Please select a vehicle type.\n Please input NUMBERS ONLY. \n 1 - Motorbike \n 2 - Sedan/Normal Car 8 seater \n 3 - Mini Bus/Bus/Truck \n");
    scanf("%d", &vehicle_type);

    if (age >= 17 && vehicle_type == 1) {
        printf("You are eligible for applying for a motobike licence :-) \n");
    } else if (age >= 17 && vehicle_type == 2) {
        printf("You are eligible for applying for a normal vehicle licence :-) \n");
    } else if (age >= 20 && vehicle_type == 3) {
        printf("You are eliglble for applying for a bus/minibus/truck licence  :-) \n");
    } else {
        printf("Sorry, you are not yet eligible for applying for any type of licence. :-( \n Please come back later. \n  ");
    }

    printf("HAVE A GOOD DAY \n");
    return 0;
}