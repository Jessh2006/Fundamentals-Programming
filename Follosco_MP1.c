#include <stdio.h>

int main() {
    
    // Question 1
    int num1;
    printf("Enter an integer: ");
    scanf("%d", &num1);
    if (num1 == 0) {
        printf("FALSE\n");
    } else {
        printf("TRUE\n");
    }

    // Question 2
    int num2, num3;
    printf("Enter two integers: ");
    scanf("%d %d", &num2, &num3);
    if (num2 == num3) {
        printf("EQUIVALENT\n");
    } else {
        printf("NOT EQUIVALENT\n");
    }

    // Question 3
    int num4, num5;
    printf("Enter two integers: ");
    scanf("%d %d", &num4, &num5);
    if (num4 < num5) {
        printf("FIRST NUMBER IS SMALLER\n");
    } else if (num5 < num4) {
        printf("SECOND NUMBER IS SMALLER\n");
    } else {
        printf("TWO NUMBERS ARE EQUIVALENT\n");
    }

    return 0;
}
