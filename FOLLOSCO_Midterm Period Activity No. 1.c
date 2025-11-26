#include <stdio.h>

int main() {
    // Question 1: Sum of 10 integers - Brute Force Approach
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, sumBruteForce;

    printf("Enter 10 integers: ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);

    sumBruteForce = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10;

    printf("Sum (Brute Force): %d\n", sumBruteForce);

    // Question 2: Sum of 10 integers - Using for loop
    int num, sumForLoop = 0;

    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        sumForLoop += num;
    }

    printf("Sum (For Loop): %d\n", sumForLoop);

    return 0;
}