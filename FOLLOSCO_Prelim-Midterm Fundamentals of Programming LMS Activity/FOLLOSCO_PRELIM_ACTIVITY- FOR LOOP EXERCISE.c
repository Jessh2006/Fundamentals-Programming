#include <stdio.h>

int main() {
    // Question 1: Print numbers 1-5
    printf("Numbers 1-5:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Question 2: Print numbers 5-1
    printf("Numbers 5-1:\n");
    for (int i = 5; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    // Question 3: Print numbers between 10-20
    printf("Numbers between 10-20:\n");
    for (int i = 10; i <= 20; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Question 4: Print numbers 20-1
    printf("Numbers 20-1:\n");
    for (int i = 20; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}