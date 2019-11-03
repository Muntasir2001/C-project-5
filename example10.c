#include <stdio.h>

int main () {
    char name;
    int marks;

    printf("Enter the student name: \n");
    scanf("%s", &name);
    printf("Enter the mark the student has obtained: \n");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Great work! \n");
    } else if (marks >= 80 && marks <= 89) {
        printf("Good job! \n");
    } else if (marks >= 70 && marks <= 79) {
        printf("Good try! \n");
    } else if (marks >= 60 && marks <= 69) {
        printf("Study Harder! \n");
    } else if (marks <= 59) {
        printf("Tutoring is available! \n");
    } 

    printf("HAVE A GOOD DAY! \n");

    return 0;
}