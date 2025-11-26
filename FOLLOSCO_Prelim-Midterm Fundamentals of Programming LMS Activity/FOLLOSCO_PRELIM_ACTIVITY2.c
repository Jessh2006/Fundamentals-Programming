#include <stdio.h>

int main() {
    float averageScore;

    printf("Enter the average score: ");
    scanf("%f", &averageScore);

    if (averageScore >= 90) {
        printf("Grade = A\n");
    } else if (averageScore >= 70 && averageScore < 90) {
        printf("Grade = B\n");
    } else if (averageScore >= 50 && averageScore < 70) {
        printf("Grade = C\n");
    } else {
        printf("Grade = F\n");
    }

    return 0;
}