#include <stdio.h>

int main() {
    // Task 1: Display the output using either for, while, or do-while

    // Using for loop to display numbers 1 to 10
    printf("Numbers from 1 to 10 using for loop:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Task 2: Find and print the prime numbers within 2 input range.
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        int isPrime = 1; // Assume the number is prime

        if (i <= 1) {
            isPrime = 0; // 0 and 1 are not prime numbers
        } else {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = 0; // If divisible by any number, it's not prime
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}