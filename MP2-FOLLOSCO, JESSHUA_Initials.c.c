#include <stdio.h>
#include <string.h>

int main() {
    char employeeName[50];
    float monthlySalary, bonus;

    printf("Enter employee name: ");
    scanf("%s", employeeName);

    printf("Enter monthly salary: ");
    scanf("%f", &monthlySalary);

    if (monthlySalary <= 10000) {
        bonus = 0.8 * monthlySalary;
    } else {
        bonus = 10000;
    }

    printf("Employee Name: %s\n", employeeName);
    printf("Bonus: %.2f\n", bonus);

    return 0;
}
